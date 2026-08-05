class Solution {
public:
    int arrangeCoins(int n) {
        int start = 0;
        int end = n;
        while(start<=end){
            long mid = (start+end)/2;
            long k = mid*(mid+1)/2;
            if(k==n){
                return mid;
            }
            else if(k>n){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return end;
    }
};