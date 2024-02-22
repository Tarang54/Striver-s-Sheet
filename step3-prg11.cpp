int longestSubarrayWithSumK(vector<int> v, long long k) {
    long long sum = 0;
    int i=0,max=0,c=0;
    while(i<v.size()){
        int j=i;
        while(sum+v[j]<=k && j<v.size()){
            sum+=v[j];
            j++;
        }
        if(sum == k){
            if((j-i)>max) max=j-i;
        }
        sum=0;
        i++;
    }
    return max;
}
