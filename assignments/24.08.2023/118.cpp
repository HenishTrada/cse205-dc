class Solution {
    
public:
int solve(int n, int r){
    int num = 1;
    for(int i=1; i<=r; i++){
        num *= n-i+1;
        num /= i;
    }
    return num;
}

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=0; i< numRows; i++){
            vector<int> temp;
            for(int j=0; j<=i; j++){
                if(j==0) temp.push_back(1);
                else if(j==i) temp.push_back(1);
                else{
                    temp.push_back(solve(i,j));
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};