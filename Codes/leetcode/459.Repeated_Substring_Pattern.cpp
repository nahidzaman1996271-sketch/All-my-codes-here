class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string b = doubled.substr(1,doubled.size()-2);
        bool out = b.find(s) != string::npos;
        return out ? true : false;
    }
};