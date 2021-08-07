// https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=md-arrays&batchId=144#

#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
        
        /*
        we are checking for every index that can be equilibirium or not
        so we need leftSUm and rightSum from that index i 
        */
        int i;
        long long sumFromRight = 0, sumFromLeft = 0;
        
        for(i = n-1; i >= 0; i--)
            sumFromRight += a[i];
        
        for( i = 0; i < n; i++ )
        {
            sumFromRight -= a[i];
            
            if( sumFromLeft == sumFromRight )
                return i+1; //position is asked not idex
            
            sumFromLeft += a[i];
            
        }
        return -1;
        
}
int main()
{
    long long arr[] = {1,3,5,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int position = equilibriumPoint(arr,n);
    cout<<"position  = "<<position<<" is euuibilirium point"<<endl;
    return 0;
}