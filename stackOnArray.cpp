/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
#define MAX 4

class stack1
{
    int top;
    public:int st[MAX];
    stack1()
    {
        top=-1;
    }
    int push();
    int pop();
    int display();
};

int stack1::push()
{
    int e;
  if (top>MAX-1)
    {
     cout <<"stack overflow";
    }
  else
    {
     cout<<"enter Item Value:";
      cin>>e;
      top++;
      st[top] = e;
}
return top;
}

int stack1::pop()
{
    if(top<0)
    {
        cout<<"Stack under flow";
    }
    else
    {
        cout<<"Poping element:";
        cout<<st[top];
        top=top-1;
    }
}

int stack1::display()
{
        if(top<0)
    {
        cout<<"Stack under flow";
    }
    else
    {
        for(int j=0;j<=top;j++)
        {
            cout<<st[j];
            cout<<",";
        }
    }
}

int main()
{
    int c;
    struct stack1 s; 
cout << "Hello World";
cout<<"Enter choice 1. push 2. Pop 3.display 4.Close";
cin>>c;
while(c<=3)
{
switch(c)
{
    case 1: 
    s.push ();
    cout<<"Enter choice 1. push 2. Pop 3.display 4.Close";
    cin>>c;
    break;
    case 2: 
    s.pop ();
    cout<<"Enter choice 1. push 2. Pop 3.display 4.Close";
    cin>>c;
    break;
    case 3: 
    s.display ();
    cout<<"Enter choice 1. push 2. Pop 3.display 4.Close";
    cin>>c;
    break;
    case 4: 
    break;
}
}
    return 0;
}

