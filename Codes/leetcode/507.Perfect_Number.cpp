class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v1;
        for(int i=1; i<=num/2; i++){
            if(num % i == 0){
                v1.push_back(i);
            }
        }
        int sum=0;
        for(int x : v1){
            sum = sum + x;
        }

        return sum == num;
    }
};