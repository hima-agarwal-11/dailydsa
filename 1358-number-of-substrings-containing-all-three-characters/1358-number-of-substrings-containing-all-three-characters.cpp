class Solution {
public:
    int numberOfSubstrings(string s) {

        int lastscene[3]={-1,-1,-1};
        int cnt=0;
        for(int i = 0;i<s.length();i++){
            lastscene[s[i]-'a']=i;
            if(lastscene[0]!=-1 && 
               lastscene[1]!=-1 && 
               lastscene[2]!=-1){
            cnt=cnt+(1+min(lastscene[0], min(lastscene[1],lastscene[2])));
        }
        }return cnt ;
    }
};

