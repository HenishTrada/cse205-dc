class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int row =matrix.size();
        int col = matrix[0].size();
        int l=0, r=col-1, t=0, b=row-1;
        int i=0;
        while(t<=b && l<=r){

      for(i=l; i<=r;i++){
               res.push_back(matrix[t][i]);
            }
       t++;
    
           
       for(i=t; i<=b;i++){
               res.push_back(matrix[i][r]);
            }
       r--;

        
       
       if(t <= b){
          for(i=r; i>=l;i--){
               res.push_back(matrix[b][i]);
            }
       }
       b--;
       

       
       if(l <= r){
          for(i=b; i>=t;i--){
               res.push_back(matrix[i][l]);
            }
       }
       l++;
       
       }

    return res;
}
};