class Solution {
  public:
    long long countBits(long long n) {
        long long ans=0,m=n;
        long p=0,i,a=0;
          while(m>2)
          {
              long long x=floor(log2(m));
              a=pow(2,x-1)*x;
              p=1+m-pow(2,x);
              ans+=a+p;
              m=m-pow(2,x);
          }
        return ans+m;
    }
};