/// week10-4.cpp
#include <iostream>
#include <string>
using namespace std;

class Cat{
	string name;
	Cat(string_name){
		name = _name;
	}
	void print(){
		cout << "My name is "<< name << ".\n";
	}
};

int main()
{
	Cat, cat1("小花"), cat2("小白");
	cat1.print();
	cat.print();
}