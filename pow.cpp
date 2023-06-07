// lc
class Solution {
public:
    double myPow(double x, int n) {
    double ans = 1.0;
    long long nn = n;
    if(nn<0) nn = -1 * nn;
    while(nn){
        if(nn%2){
            ans *= x;
            nn--;
        }else{
            x*=x;
            nn/=2;
        }
    }
    if(n<0) ans = (double)1.0 / (double)ans;
    return ans;
    }
};

//cn
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res = 1;
    while(n>0){
        if(n&1) res= (res * 1ll * x)%m;
        x = (x * 1ll * x)%m;
        n >>=1;
    }
	return res;
}