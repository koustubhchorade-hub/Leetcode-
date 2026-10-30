class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26]={0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            int index=s[i]-'a';
            count[index]++;
        }

        for(int i=0; i<t.length(); i++){
            int index=t[i]-'a';
            if(count[index]==0){
                return false;
            }
            count[index]--;
        }
        return true;
    }
};