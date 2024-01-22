//2)Palindrome Number
/*Given an integer x, return true if x is a palindrome, and false otherwise.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long b=0;
        int y=x;
        while(x!=0){
            b=(b*10)+(x%10);
            x=x/10;
        }
        return (y==b);
         
    }
};
