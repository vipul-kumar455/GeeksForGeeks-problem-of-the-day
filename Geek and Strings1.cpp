class Solution{
public:
     class Node {
        public:
        bool flag;
        vector<Node*> children;
        int prefix;
        
        Node() {
            flag = false;
            prefix = 0;
            children = vector<Node*>(26, NULL);
        }
        
        bool contains(char ch) {
            return children[ch - 'a'] != NULL;
        }
        
        Node* get(char ch) {
            return children[ch - 'a'];
        }
        
        void put(char ch, Node* newNode) {
            children[ch - 'a'] = newNode;
        }
    };
    
    class Trie {
    public:
        Node* root;
        
        Trie() {
            root = new Node();
        }
        
        void insert(string &word) {
            Node* node = root;
            for(char ch: word) {
                if(node->contains(ch) == false) {
                    node->put(ch, new Node());
                }
                node = node->get(ch);
                node->prefix += 1;
            }
            node->flag = true;
        }
        
        int prefix(string &word) {
            Node* node = root;
            for(char ch: word) {
                if(node->contains(ch) == false) {
                    return 0;
                }
                node = node->get(ch);
            }
            return node->prefix;
        }
    };

    vector<int> prefixCount(int N, int Q, string li[], string query[]) {
        // code here
        vector<int> res;
        Trie trie;
        for(int i = 0; i < N; i++) trie.insert(li[i]);
        for(int i = 0; i < Q; i++) res.push_back(trie.prefix(query[i]));
        return res;
    }
};
