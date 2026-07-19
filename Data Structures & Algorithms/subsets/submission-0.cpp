class Solution {
public:
    void solve(vector<int>& nums, vector<int>& subset, vector<vector<int>>& ans, int idx){
        if(idx == nums.size()){
            ans.push_back(subset);
            return;
        }
        
        subset.push_back(nums[idx]);
        solve(nums, subset, ans, idx+1);
        subset.pop_back();
        solve(nums, subset, ans, idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        solve(nums, subset, ans, 0);
        return ans;
    }
};
