#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

class sulution {
public:
	int removeDuplicates(vector<int>& nums) {
		int n = nums.size();
		if (n == 0) return 0;
		int count = 1;

		for (int i = 0; i < n-1; i++) {
			int j = i + 1;
			while(nums[j++] == nums[i]){}
			nums[i + 1] = nums[j - 1];
		}
	}
};
int main()
{
	
	vector< vector <int> > a(3);
	for (int i = 0; i < 3; i++) {
		a[i].resize(3);
	}
	int n = a.size();
	cout << n << endl;
	return 0;
}

