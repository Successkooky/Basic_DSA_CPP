//Bubble sort
//Repeatedly swap two adjacent elements if they are in wrong order
//if L>R then it is in wrong order
//if we have n elements in array we need to do n-1 iterations to sort the array
//1st iteration we go till n-1 element
//2nt iteration we go till n-2 element
//3rd iteration we go till n-3 element.
 
 //ith iteration is i-1
//1) Here if we have six element after 5 iterations we will get our sorted array
//2) We only Check in unsorted array so
//1st iteration we go till n-1 element
//2nt iteration we go till n-2 element
//3rd iteration we go till n-3 element.
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
 int counter=1; //for iteration count
 while(counter<n)
 {
    for(int i=0;i<n-counter;i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    
    }
    counter++;
 }  
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
    
 }cout<<endl;
 
   return 0;
  }