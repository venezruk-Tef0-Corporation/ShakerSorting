#pragma once /* #pragma once Ч это директива препроцессора, 
				котора€ указывает компил€тору включить файл
				заголовка только один раз при компил€ции файла
				исходного кода */

				// ѕодключаемые библиотеки
#include <string>
#include "sqlite3.h"


using namespace std; /* Using namespace std в C++ Ч это директива,
						котора€ позвол€ет использовать все идентификаторы
						из пространства имЄн std без указани€ префикса std:: */

						// ќбъ€влени€ функций, расположенных в файле .cpp
void deleteAllArrays(sqlite3* db);
void deleteArrayById(sqlite3* db, int id);
int GetID(void);
void saveArrayToDB(string unsorted_array, string array);

//  онец файла