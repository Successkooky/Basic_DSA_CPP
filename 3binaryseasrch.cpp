//Binary search
//To search element in an array first of all it should be sorted
//not start from starting 
/*
We will start from middle if it is greater than it we move forward
and if lesser we search backward by applying the same methodoly of finding middle no


key=27
{8,10,12,21,27,34,42}
1) find middle element
2)compare key =middle that is 21
3) 27 is greater ...so will take subarray above 21
4)start element is 27 and end is 42 and mid is 34 but 27 is less than 34
5)now start is 27 it will get compared and return found

*/ 

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
    }
    return -1;
}

int main(){
 
 int n;
 cout<<"Enter no of elements you want in array"<<endl;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cout<<"Enter element at index"<<i<<endl;
    cin>>arr[i];
 }
 int key;
 cout<<"Enter the key elemnet u want to find "<<endl;
 cin>>key;
 

 cout<<binarysearch(arr,n,key)<<endl;
return 0;
}
//time complexity is O(log n base 2)