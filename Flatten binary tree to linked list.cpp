class Solution
{
    public:
 

    void flatten(Node *&root)

    {
       if(root == NULL) return;

        cout<<root->key<<" ";

        flatten(root->left);

        flatten(root->right);

      root = NULL;

    }
};
