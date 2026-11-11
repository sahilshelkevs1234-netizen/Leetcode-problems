class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i=0;int n=nums.size()-1;int stor=0;
        if(nums.size()>0){
     stor=nums[i];
        }
        else{
            return ans;
        }
        while(stor!=nums[n]){
        
            if(stor==nums[i]){
                stor=stor+1;
                i++;
                continue;
                
            }
            else{

                ans.push_back(stor);
                stor=stor+1;
            
            }
    
        }
        return ans;
    }
};