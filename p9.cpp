// ------------------------------------------------------------- p9 ---------------------------------------------------------------------

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
 void take_input(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
 }

 void print_output(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<endl;
     }
 }

 int sum(int arr[],int n)
 {
     int total=0;
     for(int i=0;i<n;i++)
     {
         total+=arr[i];
     }
     return total;
 }

 void all_chil_choc(int arr[],int n,int c)
 {
     for(int i=0;i<n;i++)
     {
         arr[i]=c;
     }
 }
 void add_choc(int arr[],int n)
 {
     //int sum=0;
     for(int i=0;i<n;i++)
     {
         arr[i]=arr[i]+1;
         //sum=sum+(arr[i]*arr[i]);
     }
    // return sum;
 }
 int min_calorie(int arr[],int n)
 {
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum=sum+(arr[i]*arr[i]);
     }
     return sum;
 }

 int main()
 {
     int t,n,k;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         int arr[n],arr1[k];
         take_input(arr,n);
         int total=sum(arr,n);
         int choc_for_each=total/k;
         all_chil_choc(arr1,k,choc_for_each);
         int choc_rem=total%k;
         if(choc_rem>0)
         {
             add_choc(arr1,choc_rem);
         }
         cout<<min_calorie(arr1,k)<<endl;
     }
 }
