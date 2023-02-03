class Solution {
public:
    
    double binaryExpo(double a,int b)
    {
    if (b == 0) return 1 * 1ll;
    double res = binaryExpo(a, b / 2);
    double x = (res * res);
     if (b & 1) return (a * x);
     return x;
    }
    double myPow(double x, int n) {
        double x1 = 1.00;
        if(n < 0) return x1 / binaryExpo(x, n);
        return binaryExpo(x, n);
    }
};