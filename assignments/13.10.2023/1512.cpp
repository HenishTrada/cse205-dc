class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       
        vector<int> v(101, 0);
        for(auto i : nums) v[i]++;
        
        int ans = 0;
        for(auto i : v){
            if(i > 1) ans += i*(i-1)/2;
        }

        return ans;
    }
};