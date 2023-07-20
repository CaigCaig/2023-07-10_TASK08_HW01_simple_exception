#include <iostream>
#include <string>
#include "funcs.h"

int function(std::string str, int forbidden_length) {
	int len = str.length();
	if (len == forbidden_length) throw "bad_lenght";
	else return len;
}