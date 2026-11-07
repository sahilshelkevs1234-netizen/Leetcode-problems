class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;int j=0;int sum=0;int pair=0;
         int stor =nums[j];
        while(i<nums.size()){
           
            if(j==i){
                i++;
                continue;

            }
            else{
                 pair=min(nums[j],nums[i]);
                sum+=pair;
                i++;
                stor=nums[i];j=i;
            }
        }
        return sum;
    }
};