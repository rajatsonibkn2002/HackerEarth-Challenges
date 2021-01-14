//Problem Link: https://www.hackerearth.com/challenges/competitive/october-circuits-20/algorithm/letter-most-fb72d803/
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std; 

int main() 
{ 
	int count[ASCII_SIZE] = {0}; 
    int length;
    cin>>length;
    char str[length];
    cin>>str;
	
	int len = strlen(str); 
	int max = 0; 

	for (int i = 0; i < len; i++) { 
		count[str[i]]++; 
		if (max < count[str[i]]) { 
			max = count[str[i]]; 
		} 
	} 

    cout<<max;
} 


