class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto x : mp){
            pq.push({x.second, x.first});
        }

        string ans ="";
        while(!pq.empty()){
            int freq = pq.top().first;
            while(freq--){
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};