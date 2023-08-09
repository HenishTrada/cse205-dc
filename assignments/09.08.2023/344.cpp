class Solution {
public:
void reverse(int a, int b, vector<char>& s ){
         if(a>b){
             return;
         }
         swap(s[a],s[b]);
         a++;
         b--;
         reverse(a, b, s);
        
     }   

    void reverseString(vector<char>& s) {
     
     reverse(0, s.size()-1, s);
    }
};