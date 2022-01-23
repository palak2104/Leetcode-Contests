class Solution {
public:
    int numberOfArrays(vector<int>& d, int lower, int upper) {
        long long sum = 0;
long long mx =0 , mn = d[0];

for(auto &i : d) {
sum += i;
mx = max(mx , sum);
mn = min(mn , sum);
}

int ans = 0;

for(int i = lower ; i <= upper ; i++) {
if(i + mx <= upper && i + mn >= lower) {
ans++;
}
}
return ans;
}
};
