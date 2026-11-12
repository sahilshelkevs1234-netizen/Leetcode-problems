
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }

        int i = 1;
        int count1 = 1;
        int count2 = 1;
        int stor = nums[0];
        int prev1 = 1;
        int prev2 = 1;

        // Increasing subarray
        while(i < nums.size()){

            if(stor < nums[i]){
                count1++;
                stor = nums[i];
            }
            else{
                count1 = 1;
                stor = nums[i];
            }

            prev1 = max(prev1, count1);
            i++;
        }

        // Decreasing subarray
        i = 1;
        stor = nums[0];

        while(i < nums.size()){

            if(stor > nums[i]){
                count2++;
                stor = nums[i];
            }
            else{
                count2 = 1;
                stor = nums[i];
            }

            prev2 = max(prev2, count2);
            i++;
        }

        return max(prev1, prev2);
    }
};
