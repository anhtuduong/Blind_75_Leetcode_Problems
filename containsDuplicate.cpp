// https://leetcode.com/problems/contains-duplicate/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <cassert>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    bool isDuplicated = false;

    for(auto num : nums) {
        // Case duplicated
        if(set.find(num) != set.end()) {
            return true;
        }
        // Case NOT duplicated
        else {
            set.insert(num);
        }
    }
    return isDuplicated;
}

int main()
{
    vector<int> nums = {1,2,3,1};
    assert(containsDuplicate(nums) == true);

    return 0;
}