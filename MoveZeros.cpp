class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j=0;
        for(int i=0 ;i<n;i++){
            if(nums[i] != 0){
                swap(nums[j] , nums[i]);
                j++;
            }
        }
        return nums;
        
    }
};
