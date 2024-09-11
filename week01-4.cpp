//week01-4.cpp CC17-09A
//Not ok,but easy understand.
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n/16 %2;
	cout << n/8 %2;
	cout << n/4 %2;
	cout << n/2 %2;
	cout << n%2;
	return 0;
}