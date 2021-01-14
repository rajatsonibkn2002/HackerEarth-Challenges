//Problem Link: https://www.hackerearth.com/challenges/competitive/may-circuits-20/algorithm/powerful-of-factorial-cb263e5b/
/*
  Author: Rajat Soni
*/

#include <iostream>
#include <cmath>
using namespace std;
int fact(int n)
{
    int i, m = 1;
    if(n==0)
        return 1;
    else
    {
        for(i=1; i<=n; i++)
        {
            m = m*i;
        }
        return m;
    }
}
int main()
{
    unsigned long long int x, n;
    int power;
    cin>>x>>n;
    	if(n>4)
    	{
        	cout<<1;
    	}
    	else
    	{
        	power = fact(n);
        	power = power%10;
            x = x%10;
        	n = pow(x, power);
        	cout<<(n%10);
    	}
}
