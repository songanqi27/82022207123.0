#include<iostream>
#include<iomanip>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> buf;
		int n1 = nums1.size();
		int n2 = nums2.size();
		vector<int> res;
		for (int i = 0; i < n1; i++)
		{
			buf[nums1[i]]++;
		}
		for (int j = 0; j < n2; j++)
		{
			if (buf[nums2[j]] > 0)
			{
				res.push_back(nums2[j]);
				buf[nums2[j]] = 0;
			}
		}
		return res;
	}
};
int main()
{
	Solution s;
	vector<int> num1 = { 1,2,2,1 };
	vector<int> num2 = { 2,2 };
	vector<int> res = s.intersect(num1, num2);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << endl;
	system("pause");
	return 0;
}