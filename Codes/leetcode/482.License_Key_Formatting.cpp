class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count=0;
        string result="";
        for(int i=s.length()-1;i>=0;i--){
            if(count!=k){
                if((int)(s[i]>=97 and (int)s[i]<=122)){
                    s[i]=(char)((int)s[i]-32);
                    result.insert(0,1,s[i]);
                    count++;
                }
                else if(s[i]!='-'){
                    result.insert(0,1,s[i]);
                    count++;
                }
            }
            else{
                count=0;
                result.insert(0,1,'-');
                i++;
            }
        }
        for(int i=0;i<result.length();i++){
            if(result[i]=='-'){
                result.erase(result.begin()+i);
                i--;
            }
            else{
                break;
            }
        }
        return result;
    }
};