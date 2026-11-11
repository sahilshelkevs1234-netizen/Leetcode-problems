class Solution {
public:
   
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;vector<int> arr;
        int i=0;
        while(nums.size()>i){
            m[nums[i]]++;
            i++;
        }
       i=0;
        for(auto it : m){
            if(it.second>1){
             arr.push_back(it.first);
            }
        }
        return arr;
    }
};