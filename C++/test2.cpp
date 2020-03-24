#include <iostream>
#include <string>
using namespace std;

void func(char a[], char b[], char sub[], int m, int n)
{
	if (!(m && n))return;
	else {
		if (a[m] != b[n]) {
			func(a, b, sub, m, n - 1);
			func(a, b, sub, m - 1, n);
		}
		else {
			strcat(sub, (const char*)a[m]);
			func(a, b, sub, m - 1, n - 1);
		}
	}

}

int main()
{
	char a[] = { "advantage" };
	char b[] = { "danger" };
	char sub[2] = { "a" };
	func(a, b, sub, 9, 6);
	cout << sub << endl;

	return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//void Max(int& a)
//{
//    int a;
//    cout << "the adress of a in Max() is :" << &x << endl;
//
//    return;
//}
//
//int main()
//{
//    int a;
//    Max(a);
//
//    cout << "the adress in main function is：" << &a << endl;
//
//    return 0;
//}

