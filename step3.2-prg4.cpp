class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxi = a[0];
        int sum = 0;
        for(auto it : a){
            sum+=it;
            maxi = max(maxi,sum);
            if(sum<0) sum = 0; 
        }
        return maxi;
    }
};
