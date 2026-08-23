class Solution {
public:
    int maximumGap(vector<int>& nums) {
      int sum=0;
      if(nums.size()<2)return 0;
      sort(nums.begin(),nums.end());
      for(size_t i=0;i<nums.size()-1;++i){
        sum = max(sum,nums[i+1]-nums[i]);
      }

  return sum;
    }
};