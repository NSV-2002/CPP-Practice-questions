#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int> &nums)
{
    int ans = 0;
    for(int val : nums)
    {
        ans ^= val;
    }
    return ans;
}
int main()
{
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);

    cout << unique(nums);
    return 0;
}