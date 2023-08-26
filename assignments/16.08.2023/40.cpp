class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans, vector<int> temp, int index ){
       
        if(index == candidates.size()) {
             if(0== target){
                 ans.push_back(temp);
        }

         return;
        }
        if(0 > target) return;

        temp.push_back(candidates[index]);
        solve(candidates,target- candidates[index], ans, temp,index+1);

        temp.pop_back();

        while(index+1< candidates.size() && candidates[index] == candidates[index+1])index++;
        solve(candidates, target, ans, temp,index+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        solve(candidates,target,ans, temp, 0);
        return ans;
    }
};