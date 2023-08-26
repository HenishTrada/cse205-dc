class Solution {
public:
void ans(vector<int>& nums, vector<vector<int>>& result, int i ){
    if(i >= nums.size()){ 
        result.push_back(nums);
        return;
    }
    for(int j = i; j<nums.size(); j++){
        swap(nums[i], nums[j]);
        ans(nums, result, i+1);
        swap(nums[i], nums[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        int i=0;
        ans(nums, result, i);
        return result;
    }
};