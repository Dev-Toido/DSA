#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unindex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[unindex]!=nums[i]){
                nums[++unindex]=nums[i];
            }
        }
        return unindex+1;
    }
};

int main() {
    // Your code goes here
    
    return 0;
}