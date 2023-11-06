class Solution {
public:
    vector<string> getWord(string s){
        vector<string> ans;
        string word ="";

        for(auto i : s){
            if(i == ' '){
                ans.push_back(word);
                word = "";
            }
            else{
                word += i;
            }
        }
        ans.push_back(word);
        return ans;
    }
    bool wordPattern(string pattern, string s) {
        vector<string> word = getWord(s);
        if(word.size() != pattern.length()) return false;

        set<char> s1;
        set<string> s2;
        for(auto i : pattern) s1.insert(i);
        for(auto i : word) s2.insert(i);
        if(s1.size() != s2.size()) return false;

        map<char,string> mp;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i]) == mp.end()){
                mp[pattern[i]]=word[i];
            }else if(mp[pattern[i]] != word[i]){
                return false;
            }
        }
        return true;
    }
};