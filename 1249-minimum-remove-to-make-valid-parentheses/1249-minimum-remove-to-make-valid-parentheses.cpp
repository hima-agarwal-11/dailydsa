class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        unordered_set<int> remove;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } 
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    remove.insert(i);
                }
            }
        }
        while (!st.empty()) {
            remove.insert(st.top());
            st.pop();
        }
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (remove.find(i) == remove.end()) {
                result += s[i];
            }
        }
        return result;
    }
};