#include <bits/stdc++.h>
using namespace std;

/*
    49. Group Anagrams

    Given array of strings, group anagrams together (same letters diff order)
    Ex. strs = ["eat","tea","tan","ate","nat","bat"] -> [["bat"],["nat","tan"],["ate","eat","tea"]]

    Count chars, for each string use total char counts (naturally sorted) as key

    Time: O(n x l) -> n = length of strs, l = max length of a string in strs
    Space: O(n x l)
*/

int main(){

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    unordered_map<string, vector<string>> map;

        for(auto x : strs){
            string s = x;
            sort(s.begin(), s.end());
            map[s].push_back(x);
        }

        vector<vector<string>> ans;
        for(auto x : map){
            ans.push_back(x.second);
        }
        cout << "[ ";
        for(auto x : ans){
            cout << "[ ";
            for(auto y : x){
                cout << y << " ";
            }
            cout << "] ";
        }
        cout << " ]";
}