#define ll long long

const ll MOD = 1e9 + 7;
class Solution {
public:
    int concatenatedBinary(int n) {
        ll ret = 0;
        for(ll i=1; i<=n; i++) {
            ret <<= 32 - __builtin_clz(i);
            ret |= i;
            ret %= MOD;
        }
        return ret;
    }
};
