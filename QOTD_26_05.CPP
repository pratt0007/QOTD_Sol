class Solution{
 public:
//     int f(int ind, vector<int>&v,int target){
//         if(ind==0) return 1;
//         if(ind<0|| target<0) return 0;
        
        
        
//         int not_pick = 0 + f(ind-1,v,target);
//         int pick = INT_MIN;
//         if(v[ind]<= target){
//             int pick = v[ind] + f(ind-1,v,target-v[ind]);
//         }
        
//         return (pick + not_pick);
//     }
//     int numOfWays(int n, int x)
//     {
//         int counter,ans;
//         for(int i = 0 ; i<n;i++){
//             if(pow(i,x)>n){
//                 counter = i;
//                 break;
//             }
//         vector<int> v(counter);
            
//         for(int i = 0 ; i<counter; i++){
//             v[i] = pow(counter,x);
//         }
//         return f(counter-1,v,n);
        
//         }
//         // code here
//     }
// };

int solve(int n, int x, int curr, vector<vector<int>>& dp){
        if(n == 0) return 1;
        if(n < 0 || pow(curr, x) > n) return 0;
        if(dp[n][curr] != -1) return dp[n][curr];
        return dp[n][curr] = (solve(n-pow(curr, x), x, curr+1, dp) + solve(n, x, curr+1, dp)) % 1000000007;
    }
    int numOfWays(int n, int x)
    {
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solve(n, x, 1, dp);
}
};
