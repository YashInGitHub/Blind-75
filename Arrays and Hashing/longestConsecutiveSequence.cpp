#include <bits/stdc++.h>
using namespace std;

/*
    128. Longest Consecutive Sequence

    Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
    You must write an algorithm that runs in O(n) time.


    Example 1:
    Input: nums = [100,4,200,1,3,2]
    Output: 4
    Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

    Example 2:
    Input: nums = [0,3,7,2,5,8,4,6,0,1]
    Output: 9
*/

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    sort(nums.begin(), nums.end());

    if(nums.size() == 0){
        cout << 0;
    }

    int count = 1, long_count = 1, previous = nums[0];

    for(int i = 0 ; i < nums.size() ; i++){
        if((nums[i] - 1) == previous){
            previous = nums[i];
            count++;
        }

        else if(nums[i] != previous){
            previous = nums[i];
            count = 1;
        }

        long_count = max(long_count, count);
    }
    cout << long_count;
}