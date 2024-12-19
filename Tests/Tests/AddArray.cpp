#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "sqlite3.h"
#include "ShakerSorting.h"
#include "Database.h"

using namespace std;

void AddArrayToDB(int num) {

    auto start = std::chrono::steady_clock::now();

    sqlite3* db;
    sqlite3_open("arrays.db", &db);
    string dropTableSQL = "DROP TABLE arrays";
    sqlite3_exec(db, dropTableSQL.c_str(), nullptr, nullptr, nullptr);
    sqlite3_close(db);

    for (int i = 0; i < num; i++) {
        int size=rand()%101+1;
        int* unsorted_array = new int[size];
        int* sorted_array = new int[size];
        for (int i=0; i < size; i++) {
            unsorted_array[i] = rand() % 20000 - 10000;
        }
        for (int i=0; i < size; i++) {
            sorted_array[i] = unsorted_array[i];
        }
        ShakerSorting(sorted_array, size);
        string unsorted_line = "";
        string sorted_line = "";

        for (int i=0; i < size ; i++) {
            unsorted_line += to_string(unsorted_array[i])+' ';
        }
        for (int i=0; i < size ; i++) {
            sorted_line += to_string(sorted_array[i]) + ' ';
        }

        saveArrayToDB(unsorted_line, sorted_line);
    }


    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    auto diff_milsec = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();
    double diff_sec = static_cast<double>(diff_milsec) / 1000;
    cout << "Тест выполнен успешно" << endl;
    cout << "Время выполнения теста (в секундах): " << diff_sec << endl;
}