class Solution {
  public:
    // Function to find largest subtree sum.
    long int ans=INT_MIN;
    int get(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        long int l=get(root->left);
        long int r=get(root->right);
        long int tot=l+r+root->data;
        ans=max(ans,tot);
        return tot;
    }
    int findLargestSubtreeSum(Node* root)
    {
        get(root);
        return ans;
    }
};
