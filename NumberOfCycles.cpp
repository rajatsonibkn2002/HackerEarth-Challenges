//Problem Link: https://www.hackerearth.com/challenges/competitive/may-circuits-20/algorithm/cycle-count-0644f309/
/*
  Author: Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    long long int q, n, i;
    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>n;
        cout<<((n-1)*n) + 1<<endl;
    }
}
