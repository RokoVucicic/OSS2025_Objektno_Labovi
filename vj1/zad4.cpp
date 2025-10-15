#include <iostream>
#include <string>
using namespace std;

char& at(string& str, unsigned i)
{
	return str[i];
}
int main()
{
	string s("danasjedivan");
	cout << s << :endl;
	at(s, 4) += 1;
	cout << s << endl;
}