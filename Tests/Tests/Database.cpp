// Подключаемые библиотеки
#include <iostream>
#include <vector>
#include <string>
#include "sqlite3.h"

using namespace std; /* Using namespace std в C++ — это директива,
                        которая позволяет использовать все идентификаторы
                        из пространства имён std без указания префикса std:: */

                        // Определения функций

                        /// <summary>
                        /// Функция, выполняющая запрос на удаление всех элементов базы данных
                        /// </summary>
                        /// <param name="db - указатель на базу данных"></param>
void deleteAllArrays(sqlite3* db) {

    const char* sql = "DELETE FROM Arrays;";
    sqlite3_stmt* stmt;

    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
}

/// <summary>
/// Функция, выполняющая запрос на удаление строки по заданному номеру
/// </summary>
/// <param name="db - указатель на базу данных"></param>
/// <param name="id - номер строки, которую необходимо удалить"></param>
void deleteArrayById(sqlite3* db, int id) {

    const char* sql = "DELETE FROM Arrays WHERE ID = ?;";
    sqlite3_stmt* stmt;

    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, id);

    sqlite3_step(stmt);

    sqlite3_finalize(stmt);
}

/// <summary>
/// Функция, запрашивающая количество строк базы данных
/// </summary>
/// <param name=""></param>
/// <returns></returns>
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

/// <summary>
/// Функция, сохраняющая массивы в базу данных
/// </summary>
/// <param name="unsorted_array - неотсортированный массив"></param>
/// <param name="array - отсортированный массив"></param>
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

// Конец файла