class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
      
      priority_queue <int> pq;
      for( int x : nums ) pq.push(x);
      
      int ans = 0;
      while( !pq.empty()){
        
        int big = pq.top();
        pq.pop();
        
        while( !pq.empty() and big-pq.top() <= k )
          pq.pop();
        
        ans++;
      }
      
      return ans;
       
    }
};