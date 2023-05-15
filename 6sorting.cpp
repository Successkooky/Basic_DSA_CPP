//Insertion sort

// Insert an element from unsorted array to its Correct position In soted array

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
 
 for(int i=1;i<n;i++)
 {
    int current =arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
  arr[j+1]=current;
 }
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";

}cout<<endl;

 return 0;
}