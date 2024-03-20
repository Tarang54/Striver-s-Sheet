#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, long long k){
    // Write your code here
    map<long long, int> pre;
    long long sum = 0;
    int len = 0;
    for(int i = 0; i<a.size(); i++){
        sum+=a[i];
      if (sum == k) {
        len = max(len, i + 1);
      }
      long long rem = sum - k;
      if(pre.find(rem) != pre.end()){
          int temp = i - pre[rem];
          len = max(len,temp);
      }
      if(pre.find(sum) == pre.end()){
          pre[sum] = i;
      }
    }
    return len;
}
