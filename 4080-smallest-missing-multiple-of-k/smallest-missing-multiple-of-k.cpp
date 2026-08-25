class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int res = k;
        unordered_set<int>st(nums.begin(), nums.end());

        while(st.count(res)) res += k;
        return res;
    }
};