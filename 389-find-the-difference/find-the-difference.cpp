class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0;
         sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        while(i< s.length() ||t.length()) {
            if(s[i]==t[i]){
                i++;
            }
            else{
                break;
            }

        }
     return t[i];
    }
};