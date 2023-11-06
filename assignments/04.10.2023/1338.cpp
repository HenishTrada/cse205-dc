class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int size = arr.size();
        int currsize = size;
        int count = 0;

        map<int, int> mp;
        for (auto i : arr) {
            mp[i]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first}); 
        }

        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();

            int ele = p.second;
            int freq = p.first;

            count = count + 1;

            currsize = currsize - freq;

            if (currsize <= (size / 2)) {
                return count ;  // Corrected the return statement
            }
        }

        return count;
    }
};
