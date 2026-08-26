class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        if(a.size() < b.size()) return b.size();
        return a.size();
    }
};