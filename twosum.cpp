// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <cassert>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    vector<int> result;

    for(int i = 0; i < nums.size(); ++i) {
        int num_1 = nums[i];
        int num_2 = target - num_1;
        auto search = map.find(num_2);

        // Case found
        if(search != map.end()) {
            result = {search->second, i};
            break;
        }
        // Case not found
        else {
            map.insert({num_1, i});
        }
    }
    return result;
}

int main()
{
    vector<int> test = {1,2,3,4,5};
    vector<int> result = {0,1};
    assert(twoSum(test, 3) == result);

    return 0;
}