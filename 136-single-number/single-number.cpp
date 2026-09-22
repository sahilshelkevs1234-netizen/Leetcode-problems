class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int i=0;
       int j=1;
       sort(nums.begin(),nums.end());
       if(nums.size()<2){
         return nums[i];

       }
       while(i<nums.size()){
        if(nums[i]==nums[i+1]){
           i+=2;

        }
        else{
         return nums[i];
        }
       } 
       return 0;
    }
};