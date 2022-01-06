class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    int nthUglyNumber(int n) {
        
        int ugly[n];
        int i2=0,i3=0,i5=0;
        int next2=2, next3=3, next5=5;
        ugly[0]=1;
        for(int i=1; i<n; i++)
        {
            ugly[i] = min(next2, min(next3, next5));
            if(ugly[i] == next2)
            {
                i2++;
                next2=2*ugly[i2];
            }
            if(ugly[i] == next3)
            {
                i3++;
                next3=3*ugly[i3];
            }
            if(ugly[i] == next5)
            {
                i5++;
                next5=5*ugly[i5];
            }
        }
        return ugly[n-1];
    }

};