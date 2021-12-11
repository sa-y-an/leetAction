class Solution {
public:
    
    int m=1000000007;
    long long int lcm(int a,int b)
    {
        return (a*b)/__gcd(a,b);
    }
    
    
    int nthMagicalNumber(int n, int a, int b) {
        
       long long int low=1;
        long long int high=1e17;
        while(low<=high)
        {
            long long int mid=(low+high)/2;
            long long int k=(mid/a)+(mid/b)-(mid/lcm(a,b));
            if(k>n)
                high=mid-1;
            if(k<n)
                low=mid+1;
            if(k==n)
            {
                if(mid%a==0||mid%b==0)
                    return mid%m;
                else
                    return (max((mid-(mid%a)),mid-(mid%b)))%m;
            }
        }
        return -1;

        
    }
};