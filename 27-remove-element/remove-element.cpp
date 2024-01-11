class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int numri = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[numri] = nums[i];
                numri++;
            }
        }
        return numri;
    }
};