class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxi(n);
        int mini = nums[n-1];
        int idx = INT_MAX;
        maxi[0] = nums[0];
        for(int i=1; i<n; i++){
            maxi[i] = max(maxi[i-1], nums[i]);
        }
        for(int i=n-1; i>=0; i--){
            mini = min(mini, nums[i]);
            int instablityScore = maxi[i] - mini;
            if(instablityScore <= k) idx = min(idx, i);
        }
        return idx == INT_MAX ? -1 : idx;
    }
};