#include <bits/stdc++.h>
using namespace std;

/*
    242. Valid Anagram

    Given two strings s and t, return true if t is an anagram of s, and false otherwise.

    An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
    typically using all the original letters exactly once.

    Example 1:
    Input: s = "anagram", t = "nagaram"
    Output: true
    
    Example 2:
    Input: s = "rat", t = "car"
    Output: false   
*/

int main(){
    string s = "anagram";
    string t = "nagaram";

    bool flag = true;

    if(s.size() != t.size()){
        flag = false;
        exit(0);
    }

    int map[26] = {0};

    for(int i = 0 ; i < s.size() ; i++){
        int index = s[i] - 'a';
        map[index]++;
    }

    for(int j = 0 ; j < t.size() ; j++){
        int index = t[j] - 'a';
        map[index]--;
    }
        
    for(int k = 0 ; k < 26 ; k++){
        if(map[k] != 0){
           flag = false;
            break;
        }
    }

    cout << flag;
}