class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
          map<int, int> mp;
        vector<int> ans;

        for(int i=0; i<arr1.size(); i++) mp[arr1[i]]++;

        for(int i=0; i<arr2.size(); i++){
            while(mp[arr2[i]] != 0){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        vector<int> remain;

        for(auto i : mp){
            if(i.second != 0){
                while(i.second > 0){
                    remain.push_back(i.first);
                    i.second--;
                }
            }
        }

        sort(remain.begin(), remain.end());

        for(auto i : remain) ans.push_back(i);

        return ans;
    }
};