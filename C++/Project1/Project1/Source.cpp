#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

class Base {
public:
	void test() {
		cout << "Base" << endl;
	}
};

class Child : public Base {
public:
	void test() {
		cout << "Child" << endl;
	}
};
int main()
{
	Base *b = new Base;
	Child *c = new Child;
	b->test();
	c->test();
	return 0;
}

