class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
  int totalgas=0;
     int totalcost=0;
      int str=0;
      int costs=0;
      int n=gas.size();
     
for(int val: gas){
    totalgas+=val;
}
for(int val : cost){
    totalcost+=val;
}
if(totalgas<totalcost)return -1;
    for(int i=0;i<n;i++) {
     costs += (gas[i] -cost[i]);
     if(costs<0){
        str =i+1;
        costs=0;
     }
     
    }
    return str;
    }
};