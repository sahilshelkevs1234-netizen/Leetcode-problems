class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;int j=arr.size()-1;
        k%=n;
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;j--;
        }
        
       i=0;
       j=k-1;
        while(i<j){
          int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
            

        }
        
        i=k;
        j=n-1;
        while(i<j){
             int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
            i++;
        }
        // for(int val : arr){
        //     cout << val <<" ";
        // }
   
    }
};