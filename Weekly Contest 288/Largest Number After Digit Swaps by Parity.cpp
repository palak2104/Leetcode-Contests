class Solution {
public:
    int largestInteger(int num) {
        string str=to_string(num);
        vector<int>even;
        vector<int>odd;
        for(auto it:str){
            int temp=it-'0';
            if(temp%2==0) even.push_back(temp);
            else odd.push_back(temp);
        }
        sort(even.begin(),even.end()); reverse(even.begin(),even.end());
        sort(odd.begin(),odd.end()); reverse(odd.begin(),odd.end());
        string res="";
        int e=0,o=0;
        for(auto it:str){
            int temp=it-'0';
            if(temp%2==0){
             string x=to_string(even[e++]); 
             res+=x;
            }
            else{
                string x=to_string(odd[o++]);
                res+=x;
            }
        }
        num=stoi(res);
        //cout<<res;
        return num;
    }
};
