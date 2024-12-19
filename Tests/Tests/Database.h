#pragma once

#include <string>

using namespace std;

void saveArrayToDB(string unsorted_array, string array);
void deleteArrayById(sqlite3* db, int id);
void deleteAllArrays(sqlite3* db);