class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(int i=0; i<operations.size(); i++){

            if(operations[i] == "+"){
                int top1 = st.top();
                st.pop();
                int newtop = top1 + st.top();
                st.push(top1);
                st.push(newtop);
            }
            else if( operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(2*st.top());
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        int ans =0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;

    }
};