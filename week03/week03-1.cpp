///week03-1.cpp
#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >>s;
	for(char c:s){
        if(c!='2') cout << c << endl;
	}
	return 0;
}
