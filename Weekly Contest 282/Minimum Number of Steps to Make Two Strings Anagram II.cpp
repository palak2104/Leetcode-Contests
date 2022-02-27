class Solution {
public:
    int minSteps(string s, string t) {
        int count=0;
        int a=s.length();
        int b=t.length();
        unordered_map<char,int>m;
        for(auto it:s) m[it]++;
        for(auto it:t){
            if(m[it]>0){
            count++;
            m[it]--;
            }
        }
        return a+b-2*count;
    }
};
