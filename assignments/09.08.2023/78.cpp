class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sub_result;
        subsets(nums, 0, sub_result, result);
        return result;
    }
private:
    void subsets(vector<int>& nums, int i, vector<int>& sub_result, vector<vector<int>>& result) {
        result.push_back(sub_result);
        for (int j = i; j < nums.size(); j++) {
            sub_result.push_back(nums[j]);
            subsets(nums, j + 1, sub_result, result);
            sub_result.pop_back();
        }
    }
};