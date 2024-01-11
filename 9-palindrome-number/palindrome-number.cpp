class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string rrot=s;
        reverse(rrot.begin(),rrot.end());
        if (rrot==s){
            return true;
        }
        else {
            return false;
        }
    
    }
};