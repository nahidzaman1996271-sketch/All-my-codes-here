class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool isSegment = false;

        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                if(!isSegment){
                    count++;
                    isSegment = true;
                }
            }else{
                isSegment = false;
            }
        }
        return count;
    }
};