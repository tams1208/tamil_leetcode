class Solution {
public:
    bool isThree(int n)
{
 int counter = 0;
        for(int i = n; 0 < i; i--)
        {
            if(n % i == 0)
                counter++;
            if(counter > 3)
                return false;
        }
    if(counter == 3)
        return true;
    else
        return false;
    }
};