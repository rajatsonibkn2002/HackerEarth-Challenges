//Problem Link : https://www.hackerearth.com/challenges/competitive/april-circuits-20/algorithm/lets-shift-2-36d90caa/
/*
  Author: Rajat Soni
*/

#include <iostream>  
#include <cmath>
using namespace std;  
int main()  
{  
    int a[16], n, i, t, m, j, ans, count, g;
    char c;
    cin>>t;
    for(j=0; j<t; j++)
    {
        cin>>n>>m>>c;  
        for(i=15; i>=0; i--)    
        {    
            a[i]=n%2;    
            n= n/2;  
        }
        count=0;
        if(c==76)
        {
            ans=0;
            while(count!=16)
            {
                ans = ans + (a[m%16]*pow(2, (15-count)));
                m++;
                count++;
            }
        }
        if(c==82)
        {
            ans=0;
            g=16-m;
            while(count!=16)
            {
                ans = ans + (a[g%16]*pow(2, (15-count)));
                g++;
                count++;
            }
        }
        cout<<ans<<endl;
    }
}
