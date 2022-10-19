class Solution {
public:
    static bool comp(pair<int,string> &a,pair<int,string> &b) {
        if(a.first!=b.first) return a.first>b.first;
        else return a.second<b.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        for(int i = 0; i < words.size(); i++) {
            m[words[i]]++;
        }

        vector<pair<int, string>> v;
        for(auto &i: m) {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), comp);
        vector<string> ans;
        for(int i = 0; i < v.size(); i++) {
            if(k) {
                ans.push_back(v[i].second);
                k--;
            }
        }
        return ans;
    }
};