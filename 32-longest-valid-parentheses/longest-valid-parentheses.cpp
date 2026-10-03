class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();

        int ans = 0;

        //[l..r->]
        int l = 0, diff = 0;
        for(int r = 0; r < n; ++r) {

            diff += (s[r] == '(' ? 1 : -1);

            if(!diff) ans = max(ans, r - l + 1);
            else if(diff < 0) {
                diff = 0;
                l = r + 1;
            }
        }

        //[<-r..l]
        l = n - 1, diff = 0;
        for(int r = n - 1; r >= 0; --r) {
            
            diff += (s[r] == ')' ? 1 : -1);

            if(!diff) ans = max(ans, l - r + 1);
            else if(diff < 0) {
                diff = 0;
                l = r - 1;
            }
        }

        return ans;
    }
};