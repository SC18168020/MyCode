#include <iostream>
#include <string>
#include <vector>
using namespace std;

//string func(char a[], char b[], string c, int m, int n)
//{
//	
//	if ( m == -1 || n == -1 ) return c ;//������ĳһ���ַ������������
//	else {
//		//�ַ������һ���ַ���ͬ�����
//		if (a[m] != b[n]) {
//			string str1; 		
//			func(a, b, str1, m, n - 1);
//			string str2;
//			func(a, b, str2, m - 1, n);
//			c.append(str1.size() > str1.size() ? str1 : str2);
//						
//		}
//		//�ַ������һ���ַ���ͬ��ȥ�����һ���ַ������Ƚ�
//		else {
//			c.append(1,a[m]);
//			func(a, b, c, m - 1, n - 1);
//			
//		}
//		
//	}
//
//}

//int main()
//{
//	char a[] = { "advantage" };
//	char b[] = { "danger" };
//	string c = {"a"};
//	string func(char a[], char b[], string c, int m, int n);
//
//	func(a, b, c, 8, 5);
//	//char d = 's';
//	
//	
//	cout << c << endl;
//	return 0;
//}

int Max(int a[], int n)//�ݹ��㷨
{
	if (n == 0) return a[n];
	if (n == 1) return a[n] > a[n - 1] ? a[n] : a[n - 1];

	int before; before = Max(a, n - 1);//δѡ
	int current; current = Max(a, n - 2) + a[n];//ѡ��
	return before > current ? before : current;
}

int Max2(int a[],int temp[],int n)//��̬�滮
{
	
	if (n == 0)return a[n];
	if (n == 1)return a[0] > a[1] ? a[0] : a[1];
	temp[0] = a[0];
	temp[1] = a[0] > a[1] ? a[0] : a[1];
	for (int i = 2; i < n + 1; i++)
	{
		int cur = a[i] + temp[i - 2];
		int before = temp[i - 1];
		temp[i] = cur > before ? cur : before;
	}
	
	return temp[n];
}

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max = prices[0];
		int min = prices[0];
		for (int i = 0; i < prices.size(); i++) {

		}
	}
};
int main()
{
	int b;
	
	c[0] = 1;
	//cout << "asdf" << endl;
	int A[] = { 20,1,20,1,1,20,1,20,1,1,20 };//test
	int temp[] = {0,0,0,0,0,0,0,0,0,0,0};
	b = Max2(A,temp ,10);
	cout << b << endl;
	return 0;
}

