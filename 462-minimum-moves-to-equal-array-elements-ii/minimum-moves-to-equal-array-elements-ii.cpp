class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1, total_moves = 0;

        while (left < right) {
            total_moves += nums[right] - nums[left];
            left++;
            right--;
        }
        return total_moves;
    }
};