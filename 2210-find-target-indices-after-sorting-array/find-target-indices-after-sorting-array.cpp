class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> arr;
       
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if(nums[i]==target){
             arr.push_back(i);
             i++;
            }
            else{
                i++;
            }
        }
        return arr;
    }
};