class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        string res = "";
        int minLen = INT_MAX;
        int i=0,j=0;
        int cnt1= 0;

        while(j < n){
            if(s[j] == '1') cnt1++;
            while(cnt1 > k){
                if(s[i] == '1') cnt1--;
                i++;
            }
            while (cnt1 == k && s[i] == '0') {
                i++;
            }
            if(cnt1 == k){
                int currLen = j-i+1;
                string currStr = s.substr(i,j-i+1);
                if(currLen < minLen){
                    minLen = min(minLen, currLen);
                    res = currStr;
                }
                else if(currLen == minLen){
                    res = min(res, currStr);
                }
            }
            j++;
        }

        return res;
    }
};