class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;

        for(int i =0 ; i<nums.size(); i++){
            pq.push({nums[i], i});
        }

        vector<pair<int,int>> v;
         while(k--){
            v.push_back({pq.top().first, pq.top().second});
            pq.pop();
            }

        sort(v.begin(), v.end(), [&](auto& a, auto& b){
            return a.second < b.second;
        });
        
        vector<int> ans1;
        for(int i=0; i< v.size() ; i++){
            ans1.push_back(v[i].first);
        }
        return ans1;
    }
};