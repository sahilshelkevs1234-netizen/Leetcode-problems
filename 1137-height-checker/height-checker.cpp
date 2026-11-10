class Solution {
public:
    int heightChecker(vector<int>& h) {
        int i=0;vector<int> arr;int count =0;
        while(i<h.size()){
            arr.push_back(h[i]);
          i++;
        }

    i=0;

        sort(arr.begin(),arr.end());

        while(i<arr.size()){
            if(h[i]==arr[i]){
                i++;
            }
            else{
                count++;
                i++;
            }
        }
        return count;
        
    }
};