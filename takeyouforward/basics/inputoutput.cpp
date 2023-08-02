#include<iostream>
#include <cctype>
using namespace std;

int main() {
	char c;
	cin >> c;
	if(islower(c))
		cout << 0;
	else if (isupper(c)) 
		cout << 1;
	else
		cout << -1;
	return 0;
}
