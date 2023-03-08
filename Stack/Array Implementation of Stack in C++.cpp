 
#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool empty()
    {
        return top==-1;
    }
    
};
int main() {
   mystack s(5);
   s.push(1);
   s.push(5);
   s.push(9);
   cout<<s.size()<<endl;
   cout<<s.peek()<<endl;
  cout<<s.pop()<<endl;
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
   s.push(4);
   cout<<s.peek()<<endl;
   
   
    return 0;
}


/// by handlink basic edge test case


 
#include <bits/stdc++.h>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"stack full"<<endl;
        }
        else
        {
        top++;
        arr[top]=x;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"empty stack"<<endl;
        }
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool empty()
    {
        return top==-1;
    }
    
};
int main() {
   mystack s(2);
//   s.push(1);
//   s.push(3);
//   s.push(3);
 s.pop();
 s.peek();
  
   
    return 0;
}

