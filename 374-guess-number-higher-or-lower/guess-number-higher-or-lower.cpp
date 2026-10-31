/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int st=0;
        int e=n;
         int mid=e+(st-e)/2;
         int ans=guess(mid);
        while(st<=e){
             int mid=e+(st-e)/2;
         int ans=guess(mid);
         
            if(ans==-1){
                e=mid-1;
               

            }
             if(ans==1){
                st=mid+1;
                
  
            }
            else if(ans==0){
                return mid ;
            }
        }
        return 0;
    }
};