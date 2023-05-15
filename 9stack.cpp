//New data structure --> STACK
//Stores a list of items in which an item can be added to or removed from the list only at one end
//Element can be only added and removed from one end only
//Based on LIFO principle
//Operations 
//push,pop,top,empty

// #include<iostream>
// using namespace std;
// //Implementation of stack using array
// class stack
// {
//     int* arr;
//     int top;
//     public:
//     stack()
//     {
//         arr=new int[n];
//         top=-1;
//     }
//     void push(int x)
//     {
//         if (top==n-1)
//         {
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;

//     }
//     void pop()
//     {
//         if (top==-1)
//         {
//             cout<<"No element to pop"<<endl;
//             return;
     
//        }
//        top--;
//     }
//     int Top()
//     {
//         if (top==-1)
//         {
//             cout<<"No element in stack"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }

//     bool empty()
//     {
//         return top==-1;
//     }
// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     cout<<st.Top()<<endl;
//     // st.pop();
//     // cout<<st.pop()
//     return 0;
// }



//**********************************pinky*************************************************************
// #include<iostream>
// using namespace std;
// #define n 100
// class stack{
//     int*arr;
//     int top;
//     public:
//     stack(){
//         arr=new int[n];
//         top=-1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"stack is oveflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"no element to pop"<<endl;
//             return;
//         }
        
        
        
        
//         top--;



//     }
//     int Top(){
//         if(top==-1){
//             cout<<"stack is empty"<<endl;
//             return 0;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;

//     }

// };
// int main(){
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<"stack is empty now so the value is: "<<st.empty()<<endl;
//     return 0;
// }





//************************reversing the stack ****************************************************
// // #include<iostream>
// // #include<stack>
// // using namespace std;
// // void insertatbottom(stack<int> &st,int ele){

// //     if(st.empty()){
// //         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertatbottom(st,ele);

//     st.push(topele);
// }
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);
//     insertatbottom(st,ele);
// }
// int main(){
//     stack<int>st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     reverse(st);
//     while(!st.empty()){
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }







// prefix infix postfix

precedence:

1->()
2-> ^
3-> * , /
4-> + ,-
prefix:
operand operator operand
example->  4*2+3
// + ani - madhe apen left to right jato
// same for * and / left to right
// ^ ha fkt right to left jato
//prefix notation:
also called polish notation 
pahilyanda yeto operator operand operand 
example->   +*423


postfix :
operand operand operator
examopple:
4*2+3
postfix: 