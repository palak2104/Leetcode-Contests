class Solution {
public:
    int maximumProduct(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:arr) pq.push(it);
        long long res=1;
        while(k--){
            int x=pq.top();
            pq.pop();
            x+=1;
            pq.push(x);
        }
        int mod=1e9+7;
        while(pq.size()!=0){
            int x=pq.top();
            res=(res*x)%mod;
            pq.pop();
        }
        return res;
    }
};
