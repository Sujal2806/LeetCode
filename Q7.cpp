//7) Reverse Integer

/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(long long int x) {
        
        int s=1;
        if(x<0){
            s=-1;
            x=x*(-1);
        }
        long long int y=0;
        while(x!=0){
            y=y*10+(x%10);
            x=x/10;
            if(y<INT_MIN || y>INT_MAX){
            return 0;
        }
        }
        
        return y*s;

    }
};
