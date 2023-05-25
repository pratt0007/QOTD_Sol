class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        long long sum=0;
        for(auto it:arr)
        sum+=it;
        int i=N;
        while(true)
        {
            if(sum%(long long)i==0)
            break;
            i--;
        }
        return i;
        // code here
    }
};
