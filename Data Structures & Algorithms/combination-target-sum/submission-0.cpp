class Solution {
   public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx,
               int target) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (idx == nums.size() || target < 0) return;

        // Include current element
        temp.push_back(nums[idx]);
        solve(nums, temp, ans, idx, target - nums[idx]);

        // Backtrack
        temp.pop_back();

        // Exclude current element
        solve(nums, temp, ans, idx + 1, target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums, temp, ans, 0, target);

        return ans;
    }
};