class Solution {
public:
    int minimumCost(vector<int>& cost) {
      int sum=0;
      sort(cost.begin(),cost.end());
      int n=cost.size();
      for(int i=n-1;i>=2;i-=3){
         sum+=(cost[i]+cost[i-1]); 
      }
      int temp=n%3;
        for(int i=0;i<temp;i++)
            sum+=cost[i];
     return sum;
    }
};
