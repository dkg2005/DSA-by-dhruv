class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int res =0;
        int temp = 0;
        unordered_map<int, int>mp;
        mp[0] = 1;
        for(int i=0; i<n; i++){
            temp += nums[i];
            if(mp.find(temp-k) != mp.end()) res += mp[temp-k];
            mp[temp]++;
        }

        return res;
    }
};