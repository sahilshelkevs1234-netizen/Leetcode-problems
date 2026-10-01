class Solution {
    public int longestConsecutive(int[] nums) {
        TreeMap<Integer, Integer> Remap = new TreeMap<>();
        for(int i=0;i<nums.length;i++){
            Remap.put(nums[i],1);

        }
        if(nums.length==0){
            return 0;
        }
        int pre=-1000000000;
        int cnt=1;
        int ans=1;
        for(TreeMap.Entry<Integer,Integer> e: Remap.entrySet()){
            if(pre+1==e.getKey()){
                cnt++;
            }
            else{
                ans=Math.max(ans,cnt);
                cnt=1;
            }
            pre=e.getKey();

            }
            ans=Math.max(ans,cnt);
            return ans;
    }

}