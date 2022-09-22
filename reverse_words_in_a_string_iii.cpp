class Solution {
public:
    string reverseWords(string s) {
        string res = "", temp = "";
        int n = s.size();
        for(int i = 0; i <= n; i++) {
            if(i == n) {
                reverse(temp.begin(), temp.end());
                res += temp;
            } else if(s[i] == ' ' or i == n) {
                reverse(temp.begin(), temp.end());
                res += temp + ' ';
                
                temp = "";
            } else {
                temp += s[i];
            }
        }
        return res;
    }
};