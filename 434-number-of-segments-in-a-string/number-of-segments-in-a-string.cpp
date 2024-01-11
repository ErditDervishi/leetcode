class Solution {
public:
    int countSegments(string s) {
        int n = s.size();
        int fjala =0;

     
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
           
            if (i == 0 || s[i - 1] == ' ') {
                
                fjala++;
            }
        }
    }


        return fjala;
    }
};