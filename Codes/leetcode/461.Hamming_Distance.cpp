class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorres = x ^ y;
        int out = 0;
        while(xorres){
            out += xorres & 1;
            xorres >>= 1;
        }
        return out;
    }
};