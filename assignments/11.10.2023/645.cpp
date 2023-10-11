class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash (n+1, 0);

        for(auto i : nums) hash[i]++;

        int missing, extra;
        for(int i=0; i<=n; i++){
            if(hash[i] == 0) missing = i;
            if(hash[i] == 2) extra = i;
        }

        return {extra, missing};
    }
};