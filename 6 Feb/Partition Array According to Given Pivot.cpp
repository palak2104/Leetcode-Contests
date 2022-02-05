class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        vector<int>a;
        for(auto it:arr)
        if(it<pivot)
        a.push_back(it);
        for(auto it:arr)
        if(it==pivot)
        a.push_back(it);
        for(auto it:arr)
        if(it>pivot)
        a.push_back(it);
        return a;
    }
};
