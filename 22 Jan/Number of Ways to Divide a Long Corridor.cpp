class Solution {
    bool counts(string str){
        int count=0;
        for(auto it:str)
        if(it=='S') count++;
        if(count>=2) return true;
        return false;
    }
    void func(int i,int &count,int n,string corridor){
        if(i==n)
        return;
        string str1=corridor.substr(0,i+1);
        string str2=corridor.substr(i+1,n-i-1);
        cout<<str1<<" "<<str2<<endl;
        if(counts(str1) && counts(str2)){
        count++;   
        }
        
        //cout<<counts(str1)<<" "<<counts(str2)<<endl;
        func(i+1,count,n,corridor);
    }
public:
    int numberOfWays(string corridor) {
        int n=corridor.length();
        int count=0;
        int temp=0;
        for(auto it:corridor)
        if(it=='S') temp++;
        if(temp==2) return 1;
        func(0,count,n,corridor);
        return count;
    }
};
