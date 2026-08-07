class Solution {
public:
    int findComplement(int num) {
        long long int ans = 1, n = num;
        while(n){
            ans*=2;
            n=n>>1; //equals dividing by 2
        }
        ans--;
        return num^ans;
    }
};