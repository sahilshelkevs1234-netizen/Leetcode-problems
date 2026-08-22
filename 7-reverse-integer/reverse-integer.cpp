class Solution {
public:
int reverse(int n){
   long int recerr=0;

    while(n!=0){
        int dig=n%10;
        if(recerr>INT_MAX/10|| recerr<INT_MIN/10)return 0;
      recerr=recerr * 10+ dig;
      n=n/10;
    }
    return recerr;
}
};
