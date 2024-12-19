#pragma once

#include <string>
#include "..\ShakerSorting\sqlite3\sqlite3\sqlite3.h"

using namespace std;

void deleteAllArrays(sqlite3* db);

void deleteArrayById(sqlite3* db, int id);

int GetID(void);

void saveArrayToDB(string unsorted_array, string array);