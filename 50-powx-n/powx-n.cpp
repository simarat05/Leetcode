class Solution {
private:
    double calcpower(double x, long long n) {
        if(n == 0)
        {
            return 1.0;
        }
        
        double halfpower = calcpower(x, n/2);
        
        if(n % 2 == 0)
        {
            return halfpower * halfpower;
        }
        else 
        {
            return halfpower * halfpower * x;
        }
    }
    
public:
    double myPow(double x, int n) {
        long long power = n;
        
        if(power < 0)
        {
            power = -power;
        }

        double result = calcpower(x, power); 
        
        if(n < 0)
        {
            return 1.0 / result;
        }
        
        return result;
    }
};