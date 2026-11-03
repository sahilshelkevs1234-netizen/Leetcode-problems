class Solution {
public:
    int minMoves(vector<int>& nums) {
        int i=0;
        int max=nums[i];int ans=0;int requir=0;
        while(nums.size()>i){
            if(max<nums[i]){
                max=nums[i];i++;
            }
            else{
            i++;
            }
        }
        for(int j=0;j<nums.size();j++){
          requir=max-nums[j];
          ans+=requir;
        }
        return ans;
    }
};