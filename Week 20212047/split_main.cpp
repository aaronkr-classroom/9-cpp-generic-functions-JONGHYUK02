// split.cpp
#include <iostream>
#include <string>
#include <iterator>

#include "split.h"

using namespace std;



int main() {
	string s;

	//문자열을 한 행씩 입력받아 분할
	while (getline(cin, s))
		split(s, ostream_iterator<string>(cout, "\n"));
	return 0;
}