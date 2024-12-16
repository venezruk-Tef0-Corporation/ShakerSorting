#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>

using namespace std;
using namespace System;

string ToStdstring(String^ Line) {

	string stringline = "";

	stringline = msclr::interop::marshal_as<string>(Line);

	return stringline;
}