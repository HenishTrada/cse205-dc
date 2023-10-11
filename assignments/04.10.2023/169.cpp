class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        for(auto x : nums){
            cout<<x;
        }
        return nums[nums.size()/2];
    }
};