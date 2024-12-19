#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <sstream>
#include "sqlite3.h"
#include "Database.h"
#include "ShakerSorting.h"

using namespace std;

void GetArray() {

    auto start = std::chrono::steady_clock::now();
	for (int i = 0; i < 100; i++) {
        sqlite3* db;

        // Открываем базу данных
        sqlite3_open("arrays.db", &db);

        const char* sql = "SELECT UnsortedArray FROM Arrays ORDER BY RANDOM() LIMIT 1;";
        sqlite3_stmt* stmt;

        // Подготавливаем запрос
        sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

        string arrayString;

        // Выполняем запрос
        sqlite3_step(stmt);
        const char* unsortedArray = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
          
        arrayString = string(unsortedArray);

        // Освобождаем ресурсы
        sqlite3_finalize(stmt);

        // Преобразование строки в массив целых чисел
        vector<string> array;
        stringstream ss(arrayString);
        string number;
        while (getline(ss, number, ',')) {
            array.push_back(number);
        }
        int size = static_cast<int>(array.size());
        int* Array = new int[size];
        int number_1 = 0;
        for (int i = 0; i < size; i++) {
            number_1 = stoi(array[i]);
            Array[i] = number_1;
        }
        ShakerSorting(Array, size);

	}
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    auto diff_milsec = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();
    double diff_sec = static_cast<double>(diff_milsec)/1000;
    cout << "Время выполнения теста для 1 массива (в секундах): " << diff_sec/100 << endl;
    cout << "Время выполнения теста (в секундах): " << diff_sec << endl;
}