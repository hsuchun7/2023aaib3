/// week10-2.cpp
#include <iostream>
using namespace std;

class Mouse{
public:
	void print(){
		cout << "I am a mouse, 叫叫.\n";
	}
};

class Cat{
public:
	void print(){
		cout << "I am a cat. 喵喵\n";
	}
};

int main()
{
	Mouse, mouse1,mouse2;
	Cat, cat1, cat2;
	mouse1.print();
	cat1.print();
	cat2.print();
}