class Solution {
public:
    int minimumSum(int num) {
       vector<int>temp;
        while(num!=0){
            temp.push_back(num%10);
            num/=10;
        }
        sort(temp.begin(),temp.end());
        int a=temp[0];
        int b=temp[1];
        a=a*10+temp[2];
        b=b*10+temp[3];
        return a+b;
    }
};
