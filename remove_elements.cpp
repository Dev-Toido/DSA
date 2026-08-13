#include <iostream>
#include <vector>
using namespace std;

cclass Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) {
            return 0;
        } else if (nums.size() == 1) {
            return (nums[0] == val) ? 0 : 1;
        } else {
            int unindex = nums.size() - 1;
            for (int i = 0; i <= unindex; i++) {
                if(i>=unindex && nums[i] == val){return unindex;}
                while (nums[unindex] == val && i<unindex) {
                    unindex--;
                    if (unindex <= 0)
                        break;
                }
                if (nums[i] == val) {
                    nums[i] = nums[unindex--];
                }
            }
            return (unindex >= 0) ? unindex + 1 : 0;
        }
    }
};

int main() {
    // Your code goes here
    
    return 0;
}