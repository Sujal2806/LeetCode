class Solution {
public:
    bool canChange(string start, string target) {
        if(start.size()!=target.size()) return false;
        int i=0,j=0;
        int s=start.size();
        while(i<s || j<s){
            while(i<s && start[i]=='_'){
                i++;
            }
            while(j<s && target[j]=='_'){
                j++;
                                            
            }
            if(i==s || j==s){
                return i==s && j==s;
            }


            if(start[i]!=target[j] || start[i]=='L' && i<j || start[i]=='R' && i>j){
                return false;
            }
                i++;
                j++;
            
            
        }
        return true;
    }
};