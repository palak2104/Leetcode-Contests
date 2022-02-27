class Solution {
    bool  is_sufficient(long long n,int trips,vector<int>&arr,long long mid){
    long long tot_trips=0;
    for(int i=0;i<n;i++){
       tot_trips+=mid/arr[i];
     
    }
    return (tot_trips>=trips);
}
public:
    long long minimumTime(vector<int>& arr, int trips) {
        long long n=arr.size();
        long long low=1;
        long long high=1e14;
        long long ans=0;
    while(low<=high){
        long long mid=(low+high)/2;
        if(is_sufficient(n,trips,arr,mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
};
