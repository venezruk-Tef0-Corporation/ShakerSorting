#pragma once /*это директива препроцессора, 
			   котора€ указывает компил€тору
			   включить файл заголовка только
			   один раз при компил€ции файла
			   исходного кода*/

//ќбъ€вление переменных перечислимого типа - вспомогательных переменных дл€ пунктов меню
enum MainMenuItems { StartProgram = 1, StartTesting, Quit };
enum EnteringMenuItems { ManualEnter = 1, AutoEnter };
enum FileRecordItems { Rewriting = 1, NewFileChoice };
enum WriteDataMenuItems { Writing = 1, Cancelling };