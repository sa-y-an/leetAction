class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }


    bool isPossible(vector<int> &pages, int studentsCnt, int limit){

        int n = pages.size(),
            idx = 0,
            loopRan = 0;
        
        while( idx < n ){
            int page = 0;
            int prev = idx;
            while( idx < n and page + pages[idx] <= limit )	page += pages[idx++];
            if ( idx == prev ) return false;
            loopRan++;
        }

        return loopRan <= studentsCnt;

    }
    
    
    int shipWithinDays(vector<int>& pages, int students) {
        
        int high = accumulate(pages.begin(), pages.end(),0);
        int low = pages[0];
        int res = -1;
        while( low <= high ){
            int mid = low + (high-low)/2;
            if( isPossible(pages,students,mid) ){
                res = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }

        }
        return res;

        
    }
};