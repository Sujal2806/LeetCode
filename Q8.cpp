//8)String to Integer(atoi)
/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
    
        long long int r = 0;
        int si = 1;
        size_t i = 0;

        // Skip leading whitespace characters
        while (i < s.length() && isspace(s[i])) {
            i++;
        }

        // Check for optional sign
        if (s[i] == '-' || s[i] == '+') {
            si = (s[i++] == '-') ? -1 : 1;
        }

        // Process digits
        while (i < s.length() && isdigit(s[i])) {
            // Check for overflow before updating r
            if (r * 10 * si < INT_MIN || r * 10 * si > INT_MAX) {
                return (si == 1) ? INT_MAX : INT_MIN;
            }

            r = r * 10 + (s[i++] - '0');
        }
        if(r*si<INT_MIN){
          return INT_MIN;
        }
        if(r*si>INT_MAX){
          return INT_MAX;
        }
        return r * si;
    }
};
