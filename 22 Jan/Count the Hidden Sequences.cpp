class Solution {
public:
    int numberOfArrays(vector<int>& arr, int lower, int upper) {
      int sum=0;
      int mini=0,maxi=0;
      for(auto it:arr){
          sum+=it;
          mini=min(mini,sum);
          maxi=max(maxi,sum);
      }
    int lb=lower-mini;
    int ub=upper-maxi;
    int temp=ub-lb+1;
    if(temp>0) return temp;
    else return 0;
    }
};
