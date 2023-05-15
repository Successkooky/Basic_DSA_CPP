#include<iostream>
using namespace std;
# define n=100
class stack
{
    int* arr;
    int top;// to see which ids the top element

    public:
    stack()
    {
        arr=new int [n];
        top=-1;
    }

    void push(int x)
    {
        if (top==n-1)
        {
            cout<<"Stack overflow"
        }
    }
}




int main(){
 
 return 0;
}