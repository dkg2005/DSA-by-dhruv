class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for(int i=0; i<n; i++) nums[i] = abs(nums[i]);
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++) res += nums[i]*nums[i];
        if(n % 2 == 1){
            res += nums[n/2] * nums[n/2];
            for(int i=n/2+1; i<n; i++) res -= nums[i]*nums[i];
        }
        else{
            for(int i=n/2; i<n; i++) res -= nums[i]*nums[i];
        }
        return res;
    }
};