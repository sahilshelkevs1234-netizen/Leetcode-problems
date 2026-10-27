class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int e = nums.size() ;

        sort(nums.begin(), nums.end());

        int best = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < e - 2; i++) {
            int n = i + 1;
            int k = e - 1;
            while (n < k) {
                int ans = nums[i] + nums[n] + nums[k];
                if (abs(ans - target) < abs(best - target)) {
                    best = ans;
                } else if (ans == target) {
                    return ans;
                }
                if (ans > target) {
                    k--;
                } else {
                    n++;
                }
            }
        }
        return best;
    }
};