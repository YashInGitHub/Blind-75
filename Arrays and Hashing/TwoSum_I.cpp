#include <bits/stdc++.h>
using namespace std;

/*
    1. Two Sum

    Given int array & target, return indices of 2 nums that add to target
    Ex. nums = [2,7,11,15] & target = 9 -> [0,1], 2 + 7 = 9

    At each num, calculate complement, if exists in hash map then return

    Time: O(n)
    Space: O(n)

    Example 1:
    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

    Example 2:
    Input: nums = [3,2,4], target = 6
    Output: [1,2]

    Example 3:
    Input: nums = [3,3], target = 6
    Output: [0,1]
*/

int main(){

    vector<int> nums = {3,2,4};
    int target = 6;

    bool flag = true;

    unordered_map<int, int>map;
    int n = nums.size();

    for(int i = 0 ; i < n ; i++){
        map[nums[i]] = i;
    }

    for(int i = 0 ; i < n ; i++){
        int num = target - nums[i];

        if(map.count(num) && map[num] != i){
            cout << "{ " << i << ", " << map[num] << " }";
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "{}";
    }

}