#pragma once /*это директива препроцессора, 
	           котора€ указывает компил€тору 
			   включить файл заголовка только 
			   один раз при компил€ции файла 
			   исходного кода*/

//ѕодключаемые библиотеки проекта
#include "Enums.h"

//ќбъ€вление шаблона
template <typename T>

//ќбъ€вление функций дл€ проверки корректности ввода пунктов меню
T GetInput(void);
int GetInt(void);
MainMenuItems GetMainMenuItem(void);
EnteringMenuItems GetEnteringMenuItem(void);
WriteDataMenuItems GetWriteDataMenuItem(void);
FileRecordItems GetFileRecordItem(void);
