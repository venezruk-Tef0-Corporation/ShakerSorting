#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "sqlite3.h"
#include "Database.h"

void DeleteArray() {
    auto start = std::chrono::steady_clock::now();
    sqlite3* db;
    sqlite3_open("arrays.db", &db);
    deleteAllArrays(db);
    sqlite3_close(db);
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    auto diff_milsec = std::chrono::duration_cast<std::chrono::milliseconds>(diff).count();
    double diff_sec = static_cast<double>(diff_milsec) / 1000;
    cout << "Тест выполнен успешно" << endl;
    cout << "Время выполнения теста (в секундах): " << diff_sec << endl;
}