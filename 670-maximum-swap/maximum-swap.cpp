
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        vector<int> last(10, -1);
        
        // Record the last position of each digit 0-9
        for (int i = 0; i < s.length(); ++i) {
            last[s[i] - '0'] = i;
        }
        
        // Find the first digit that can be swapped with a larger digit appearing later
        for (int i = 0; i < s.length(); ++i) {
            for (int d = 9; d > s[i] - '0'; --d) {
                if (last[d] > i) {
                    std::swap(s[i], s[last[d]]);
                    return std::stoi(s);
                }
            }
        }
        
        return num;
    }
};