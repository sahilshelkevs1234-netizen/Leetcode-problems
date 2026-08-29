class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int str=1;
        int end= n-2;
        if(n==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }

        while(str<=end){
            int mid=str+(end-str)/2;

            if(nums[mid-1] <nums[mid]&& nums[mid+1]<nums[mid]){
                return mid;
            }
            else if(nums[mid]>nums[mid+1]){
             end =mid-1;

            }
            else {
                str=mid+1;
            }
        }
        return -1;
    }
};