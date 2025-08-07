class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int count =0;
        int maxlength = 0;
        int i=0;
        while (i !=n){
            if(nums[i]==1){
                count ++;
                maxlength = max(maxlength , count);
                
            }else {
                count =0;
            }    
            i++;
        }
        return maxlength;
    }
};
