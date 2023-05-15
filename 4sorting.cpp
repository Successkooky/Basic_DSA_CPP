//  Selection Sorting

/*
Find the minimum element in unsorted array and swap it 
with element at the beginning of the unsorted array
12,45,23,51,19,8
8,45,23,51,19,12
8,12,23,51,19,45
8,12,19,51,23,45
8,12,19,23,51,45
8,12,19,23,45,53

two for loops 
i==0 to n-1 that is 12 to 19
j==1 to n   that is 45 to 8
Keep comparing
*/

#include<iostream>
using namespace std;
int main(){
 
 int n;
 cout<<"Enter no of elements in an array"<<endl;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cout<<"Plz input no in array at index"<< i <<endl;
    cin>>arr[i];

 }
 
 for (int i = 0; i < n-1; i++)
 {
    for (int j = i+1; j < n; j++)
    {
        if (arr[j]<arr[i])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    
 }
 
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<endl;


 return 0;
}