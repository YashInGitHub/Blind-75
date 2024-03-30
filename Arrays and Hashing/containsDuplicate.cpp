#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

/*
    217. Contains Duplicate
    
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false

    If the number has been seen previously, then it has a duplicate. Otherwise, insert it into the hash set.

    Time: O(n)
    Space: O(n)

    Example 1:
    Input: nums = [1,2,3,1]
    Output: true
    
    Example 2:
    Input: nums = [1,2,3,4]
    Output: false

    Example 3:
    Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true
*/


int main(){
    vector<int> nums = {1,2,3,4};
    unordered_set<int> s;

    string flag = "false";
        
    for (int i = 0; i < nums.size(); i++) {
        if (s.find(nums[i]) != s.end()) {
            flag = "true";
            break;
        }
        s.insert(nums[i]);
    }
        
    cout << flag;
    
}