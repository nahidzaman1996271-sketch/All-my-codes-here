class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        int r = 0;
        while(l < s.size()){
            bool found = false;
            while (r < t.size()) {
                if(s[l] == t[r]){
                    found = true;
                    r++;
                    break;
                }
                r++;
            }
            if(!found){
                return false;
            }
            l++;
        }
        return true;
    }
};