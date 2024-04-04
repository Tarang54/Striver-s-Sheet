#define ll long long
class Solution {
public:
    int p = 1e9 + 7;
    ll power(long long x, long long y){
        long long res = 1;
        x = x % p;
        if(x == 0) return 0;
        while(y>0){
            if(y&1) res = (res*x) % p;
            y = y>>1;
            x = (x*x) % p;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        ll count_4s = n/2;
        ll count_5s = n-n/2;
        ll ans = ((power(4LL,count_4s) % p * power(5LL,count_5s) % p) % p);
        return (int)ans;
    }
};
