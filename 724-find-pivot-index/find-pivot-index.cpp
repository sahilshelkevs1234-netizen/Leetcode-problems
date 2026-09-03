class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
         for(int i=0;i<nums.size();i++){
           right+=nums[i];
            
        }
        for(int i=0;i<nums.size();i++){
            left+=nums[i];
            if(left==right){
                return i;
            }
            else{
                right-=nums[i];
            }
        }
        return -1;
    }
};