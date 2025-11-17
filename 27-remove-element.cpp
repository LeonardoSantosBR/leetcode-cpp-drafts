#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
    int val = 2;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(find(nums.begin(), nums.end(), val));
            i--;
        }
    }

    return nums.size();
}
// jeito de remover duplicados em um vector:
// sort(nums.begin(), nums.end());
// nums.erase(unique(nums.begin(), nums.end()), nums.end());