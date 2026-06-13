class Solution {
 double mypow(double x,long long n){
        if(n==0){
            return 1;
        }
        double half = mypow(x,n/2);
        if(n%2==0){
            return half*half;
        }
        else{
            return half*half*x;
        }
    }
public:
    double myPow(double x, int n) {
        double   ans;
        long long num=n;
        if(n>0){
           ans = mypow(x,n);
        }
        else{
            num = -num;
             
           
              ans = 1/(mypow(x,num));
            
        }
        return ans;
    }
};