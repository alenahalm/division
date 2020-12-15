#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	int d1 = n / 100, d2 = (n % 100) / 10, d3 = n % 10;
	cout << "Result of adding digits:" << endl;
	if ((d1 + d2 + d3) % 3 == 0) {
		cout << "Your number can be divided by 3" << endl;
	}
	else {
		cout << "Your number can't be divided by 3" << endl;
	}
	cout << "Result of using n % 3 == 0:" << endl;
	if (n % 3 == 0) {
		cout << "Your number can be divided by 3" << endl;
	}
	else {
		cout << "Your number can't be divided by 3" << endl;
	}
	system("pause");
}