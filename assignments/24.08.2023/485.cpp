class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // vector<int> ans;
        int digits=0;
        int max=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) digits++;
            else{
                // ans.push_back(digits);
                // digits=0;
                
                digits=0;
            }
            if(digits> max) max = digits;
        }
       
        return max;
    }
};