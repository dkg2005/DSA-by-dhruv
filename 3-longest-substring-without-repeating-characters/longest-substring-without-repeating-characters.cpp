class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;
        unordered_set<int>st;
        int i = 0, j = 0;
        while(j < n){
            if(st.count(s[j]) == 0) st.insert(s[j]);
            else{
                while(st.count(s[j])){ // try to reduce from the i side
                    st.erase(s[i]);
                    i++;
                }
                st.insert(s[j]);
            }
            maxLen = max(maxLen, j-i+1); 
            j++;
        }


        return maxLen;
    }
};