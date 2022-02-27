class Solution {
      bool func(string a,string b){
          int n=0;
          int m=0;
          while(m!=b.length()){
             if(a[n]!=b[m]) return false; 
             n++;
             m++;
          }
          return true;
      }
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto it:words){
            if(func(it,pref))
            count++;
        }
        return count;
    }
};
