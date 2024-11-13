/// week10-3.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
	string name;
	void printf(){
		cout << "I am a cat.My name is" << name << ".\n";
	}
};

int main()
{
	Cat, cat1, cat2;
	cat1.name = "小花";
	cat1.print();
	cat2.name = "小白";
	cat.print();
}