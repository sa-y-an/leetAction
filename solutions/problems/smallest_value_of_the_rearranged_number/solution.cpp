#define ll long long

class Solution {
public:
    long long smallestNumber(long long num) {
       long long freq[10] = {0};

          // Checking Number is positive or Negative
        bool is_pos = (num>0);

          // Getting the absolute value of num
        num = abs(num);

        // count frequency of each digit in the number
        while (num)
        {
            ll d = num % 10; // extract last digit
            freq[d]++; // increment counting
            num = num / 10; //remove last digit
        }

        ll result = 0;

          // If it is positive Number then it should be smallest
          if(is_pos)
        {
          // Set the Leftmost digit to minimum except 0
          for (ll i = 1 ; i <= 9 ; i++)
          {
              if (freq[i])
              {
                  result = i;
                  freq[i]--;
                  break;
              }
          }

          // arrange all remaining digits
          // in ascending order
          for (ll i = 0 ; i <= 9 ; i++)
              while (freq[i]--)
                  result = result * 10 + i;
        }
        else  // If negative then number should be Largest
        {
          // Set the Leftmost digit to maximum
          for (ll i = 9 ; i >= 1 ; i--)
          {
             if (freq[i])
             {
                result = i;
                freq[i]--;
                break;
             }
          }

          // arrange all remaining digits
          // in descending order
          for (ll i = 9 ; i >=0 ; i--)
             while (freq[i]--)
                result = result * 10 + i;

          // Negative number should be returned here
          result = -result;
        }
        return result;
    }
};