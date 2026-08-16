class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = 0;
        int n = timeSeries.size();

        for(int i=1; i<n; i++){
            sum += min(timeSeries[i]-timeSeries[i-1], duration);
        }

        return sum+duration;
    }
};