#include <iostream>
#include <vector>
#include <string>
#include "..\ShakerSorting\sqlite3\sqlite3\sqlite3.h"

using namespace std;

void deleteAllArrays(sqlite3* db) {

    const char* sql = "DELETE FROM Arrays;";
    sqlite3_stmt* stmt;

    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
}

void deleteArrayById(sqlite3* db, int id) {

    const char* sql = "DELETE FROM Arrays WHERE ID = ?;";
    sqlite3_stmt* stmt;

    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, id);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
}

int GetID(void) {

    sqlite3* db;
    sqlite3_open("arrays.db", &db);

    const char* sql = "SELECT max(ID) FROM arrays";

    sqlite3_stmt* stmt;

    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    int id = sqlite3_column_int(stmt, 0);

    sqlite3_finalize(stmt);

    return id;
}

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