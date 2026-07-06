class Solution {
public:
    int countSegments(string s) {
        int cnt=0;
        int n = s.size();
        for(int i = 0 ;i<n;i++){
            if (s[i]!=' '&& (i==0 || s[i-1]==' '))
            cnt++;
        }return cnt;
    }
};
