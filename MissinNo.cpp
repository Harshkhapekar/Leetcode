class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n= nums.size();
     int exp_sum=0 , act_sum=0;
     for(int i=0 ; i<n ; i++){
        act_sum += nums[i];
     }
     exp_sum = n*(n+1)/2;
     int diff = exp_sum - act_sum;
     return diff;
    }
};
