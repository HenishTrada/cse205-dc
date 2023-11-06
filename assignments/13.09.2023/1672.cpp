class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        int n = accounts.size();

        for(int i=0; i<n ; i++){
            int cnt = 0;

            for(int j=0; j<accounts[i].size(); j++){
                cnt += accounts[i][j];
            }
            maxi = max( cnt, maxi);
        }
        return maxi;
    }
};