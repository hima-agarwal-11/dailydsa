class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>ans1;
        vector<char>ans2;
        for(int i = 0 ;i<s.length();i++){
            if(s[i]=='#' ){
                if(!ans1.empty())
                ans1.pop_back();
            }
            else{
                ans1.push_back(s[i]);
            }
        }
        for(int i = 0 ;i<t.length();i++){
            if(t[i]=='#')
            {
                if(!ans2.empty())
                ans2.pop_back();
            }
            else{
                ans2.push_back(t[i]);
            }
        }
return ans1==ans2;
    }
};