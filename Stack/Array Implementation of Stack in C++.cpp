 
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
