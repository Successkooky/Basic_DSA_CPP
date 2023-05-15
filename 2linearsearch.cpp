//Searching in array

//Linear Search

//we have to find an element by setting it to key traversing a loop and give the index no where the element is present
//if the element is not in the array return -1
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
    
}

int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cout<<"Input the array elements"<<endl;
    cin>>arr[i];
 }
 
 int key;
 cout<<"Plz input the element u want to find in the array";
 cin>>key;
 cout<<"the element is at the index"<<linearsearch(arr,n,key)<<endl;
 return 0;
}
//time complexity O(n)



