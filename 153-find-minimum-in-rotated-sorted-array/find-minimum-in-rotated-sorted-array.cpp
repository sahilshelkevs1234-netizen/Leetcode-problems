class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=1;
        int n=nums.size();
        int end =nums[0];
         int mid =i+(end-i)/2;
        while (i<n){
           if(nums[i]<end){
             end=nums[i];
           }
           else{
            i++;
           }
        }
        return end;
    }
};