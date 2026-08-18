class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = -1;
        if(n==k){
            for(auto num : nums) maxi = max(maxi,num);
            return maxi;
        }
        int ans = -1;
        unordered_map<int,int>mp;
        for(int i=0; i<=n-k; i++){
            for(int j=i; j<i+k && j<n; j++){
                mp[nums[j]]++;
            }
        }

        for(auto it : mp){
            if(it.second == 1) {
                ans = max(ans,it.first);
            }
        }

        return ans;
    }
};