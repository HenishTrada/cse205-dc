class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        unordered_map<int,int> mp;

        for(int i= nums2.size()-1;i>=0 ;i--){
            
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            int res = st.empty()? -1: st.top();
            mp.insert({nums2[i], res});
            st.push(nums2[i]);
        }

        vector<int> ans;

        for(auto x : nums1){
            ans.push_back(mp[x]);
        }

        return ans;
    }
};