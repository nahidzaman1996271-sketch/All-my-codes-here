class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for (char c : s) m[c]++;

        int res = 0;
        bool hasOdd = false;

        for (auto& x : m) {
            res += (x.second / 2) * 2;   // largest even part of this count
            if (x.second % 2 == 1) hasOdd = true;
        }

        if (hasOdd) res += 1;            // one odd char can sit in the middle
        return res;
    }
};