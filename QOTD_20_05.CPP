class Solution {
  public:
    bool isStraightHand(int n, int groupSize, vector<int> &hand) 
    {
        map <int,int> mp;
        
        for (auto it: hand)
        {
            mp[it]++;
        }
        
        int prev;
        
        while(!mp.empty())
        {
            prev = mp.begin()->first;
            
            for (int i=prev; i<prev+groupSize; i++)
            {
                if (mp.find(i)==mp.end())
                    return false;
                
                if (mp[i]==1)
                    mp.erase(i);
                else
                    mp[i]--;
            }
        }
        return true;
        
        
        // code here
    }
};
