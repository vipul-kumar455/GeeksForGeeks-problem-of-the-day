//Function to push all the elements into the stack.
stack<int> _push(int a[],int n)
{
   // your code here
   stack<int>s;
   s.push(a[0]);
    for(int i=1;i<n;i++)
    {
        s.push(min(s.top(),a[i]));
    }
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    
     while(!s.empty())
     {
         cout<<s.top()<<" ";
         s.pop();
         
     }
   
}
