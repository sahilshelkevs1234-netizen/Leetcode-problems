class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    ;int n=nums.size();
    

        sort(nums.begin(), nums.end());

       int sum2=nums[0]*nums[1]*nums[n-1];
        int   sum1=nums[n-1]*nums[n-2]*nums[n-3];
        return max(sum1,sum2);
    }
};