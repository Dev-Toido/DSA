#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        if (nums.size() == 0)
        {
            return 0;
        }
        int mid;
        if (target > nums[right])
        {
            return right + 1;
        }
        while (left < right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if (target < nums[mid])
                {
                    right = (mid - 1 < 0)?0:mid-1;
                }
                else
                {
                    left = mid + 1;
                }
            }
        }
        if (nums[right] >= target)
        {
            return right;
        }
        else{
            return right + 1;
        }
    }
};

int main()
{
    // Your code goes here

    return 0;
}