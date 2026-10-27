class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int str =1;
       int end=1;
      int ans=nums[0];
       for (int i=1;i<nums.size();i++) {
         if(nums[i]!=ans){
            nums[end]=nums[i];
            end++;
            ans=nums[i];
         }
       }
       return end;
    }

};