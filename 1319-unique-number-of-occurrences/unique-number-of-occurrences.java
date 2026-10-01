class Solution {
    public boolean uniqueOccurrences(int[] arr) {
         TreeMap<Integer, Integer> ma = new TreeMap<>();
         if(arr.length ==0){
            return false;
         }
         for(int i=0;i<arr.length;i++){
             ma.put(arr[i], ma.getOrDefault(arr[i], 0) + 1);
         }
         TreeMap<Integer,Integer>ma1=new TreeMap<>();
         for(TreeMap.Entry<Integer,Integer>e:ma.entrySet()){
                if(ma1.containsKey(e.getValue())) return false;
                ma1.put(e.getValue(),1);
         }

         return true;
    }
}