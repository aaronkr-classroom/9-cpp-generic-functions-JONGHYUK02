// split.cpp
#include <iostream>
#include <string>
#include <iterator>

#include "split.h"

using namespace std;



int main() {
	string s;

	//���ڿ��� �� �྿ �Է¹޾� ����
	while (getline(cin, s))
		split(s, ostream_iterator<string>(cout, "\n"));
	return 0;
}