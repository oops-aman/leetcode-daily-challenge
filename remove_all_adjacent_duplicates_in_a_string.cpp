class Solution {
public:
    string removeDuplicates(string S) {
        stack<int> st;
        for(int i = (S.size()-1); i>=0; i--){
            if(!st.empty() && S[i] == st.top())
                st.pop();
            else
                st.push(S[i]);
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};