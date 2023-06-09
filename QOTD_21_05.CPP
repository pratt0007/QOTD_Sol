class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        long long int nn = 0;
        for(int i = 0; i < n; i++)
        {
            nn = nn + abs(chairs[i] - passengers[i]);
        }
        return nn;
    }
};
