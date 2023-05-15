//Array-->Data structure to store a lsit of similar data types

//syntax

// int array[4]={10,20,30,40};
//int -->4 bytes and 4 element in it so total 16 bytes memory required
#include<iostream>
#include<climits>
using namespace std;
int main(){
 
//Simple array declaration
//  int array[4]={10,20,30,34};
//  cout<<array[3]<<endl;



//simply taking input fom user and printing it 

// int n ;
// cin>>n;
// int array[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>array[i];
// }
// for (int i = 0; i < n; i++)
// {
//     cout<<array[i]<<endl;
// }

// cout<<array[3]<<endl;

//Taking input from user and printing max and min element of the array



int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}



int maxNo=INT_MIN;
int minNo=INT_MAX;
// for (int i = 0; i < n; i++)
// {
//     if(arr[i]>maxNo)
//     {
//         maxNo=arr[i];
//     }

//     if(arr[i]<minNo)
//     {
//         minNo=arr[i];
//     }
// }

for (int i = 0; i < n; i++)
{
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
}

cout<<maxNo<<endl;
cout<<minNo<<endl;

return 0;
}