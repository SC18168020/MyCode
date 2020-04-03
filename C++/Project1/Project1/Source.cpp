#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main()
{
	int a[] = { 1,3,2,0,3,0,5,0,8 };
	stack<int> s;
	int i = 0;
	for (i = 0; i < 9; i++) {
		if (a[i]) s.push(a[i]);
		 
	}

	for (i = s.size(); s.size() < 9; i++) {
		s.push(0);
	}

	for (i = 8; i > -1; i--) {
		a[i] = s.top();
		s.pop();
		cout << a[i];
	}
	return 0;
}

