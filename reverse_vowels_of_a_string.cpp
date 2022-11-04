class Solution {
public:
    bool isVowel(char c) {
        char ch = tolower(c);
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            return true;

        return false;
    }
    string reverseVowels(string s) {
        int l = 0, h = s.size() - 1;
        while(l < h) {
            if(isVowel(s[l]) and isVowel(s[h])) {
                swap(s[l], s[h]);
                l++, h--;
            }
            if(!isVowel(s[l])) l++;
            if(!isVowel(s[h])) h--;
        }

        return s;
    }
};