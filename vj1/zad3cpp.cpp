/*#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (char& x : s) {
		x = toupper(x);
		if (isdigit(x)) {
			x= '*';
		}
		if (isspace(x)) {
			x = '_';
		}
	}	
	cout << s;
}*/