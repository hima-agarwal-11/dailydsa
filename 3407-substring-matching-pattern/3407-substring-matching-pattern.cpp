class Solution {
public:
    bool hasMatch(string s, string p) {
        int pos=p.find('*');
        string before=p.substr(0,pos);
        string after=p.substr(pos+1);
        int first = s.find(before);
        if(first==string::npos)
        return false;
        int second=s.find(after, first+before.size());
        return second!=string::npos;
    }
};
