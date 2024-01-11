class Solution {
public:
    bool isPowerOfTwo(int n) {
       long  int rezultati = 1;
       
        while(rezultati <= n){
         rezultati*=2;
           if(rezultati ==n||n==1){
                return true;
            }
        }
        return false;

    }
};