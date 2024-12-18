#include <iostream>
#include <vector>
#include <string>
#include "..\ShakerSorting\sqlite3\sqlite3\sqlite3.h"

using namespace std;

void saveArrayToDB(string unsorted_array, string array) {
    sqlite3* db;
    sqlite3_open("arrays.db", &db);

    // Создать таблицу, если её нет
    string createTableSQL =
        "CREATE TABLE IF NOT EXISTS Arrays ("
        "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
        "UnsortedArray TEXT, "
        "SortedArray TEXT);";
    sqlite3_exec(db, createTableSQL.c_str(), nullptr, nullptr, nullptr);

    //Добавление строки в таблицу
    string insertSQL =
        "INSERT INTO Arrays (UnsortedArray, SortedArray) VALUES ('"
        + unsorted_array + "', '" + array + "');";
    sqlite3_exec(db, insertSQL.c_str(), nullptr, nullptr, nullptr);

    sqlite3_close(db);
}