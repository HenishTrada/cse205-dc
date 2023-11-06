class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;

        for(int i=0;i<9;i++){
            for(int j=0; j<9; j++){
                char ch = board[i][j];
                if(ch == '.') continue;

                int box = (i/3)*3 + (j/3);
                
                    string row_check = to_string(ch)+ " in row" + to_string(i);
                    string col_check = to_string(ch)+ " in col" + to_string(j);
                    string box_check = to_string(ch)+ " in box" + to_string(box);
                    
                   if (st.find(row_check) != st.end() || st.find(col_check) != st.end() || st.find(box_check) != st.end()) {
                        return false;
                    }

                    st.insert(row_check);
                    st.insert(col_check);
                    st.insert(box_check);
                
            }
        }
        return true;
    }
};