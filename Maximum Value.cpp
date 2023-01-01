
class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        //code here
        vector<int>v;
        if(!node)
        return v;
        int mx;
       // v.push_back(node->data);
        queue<Node *>q;
        q.push(node);
       // q.push(NULL);
        while(q.size())
    {
        mx=-1e9;
        int n=q.size();
        for(int i=0;i<n;i++)
        {
          node=q.front();
          q.pop();
          mx=max(mx,node->data);
            if(node->left)
            
                q.push(node->left);
            
            if(node->right)
            
                q.push(node->right);
            
        }
          v.push_back(mx);
        }
       
        
        
    
      
        
        
        return v;
        
    }
};
