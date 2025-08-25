class TrieNode {
public:
    map<char, TrieNode*> children;
    int count;

    TrieNode() {
        count = 0;
    }
};
class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* curr = root;
        for (char ch : word) {
            if (curr->children.find(ch) == curr->children.end()) {
                curr->children[ch] = new TrieNode();
            }
            curr = curr->children[ch];
            curr->count++;
        }
    }

    string findPrefix(string word) {
        TrieNode* curr = root;
        string prefix = "";
        for (char ch : word) {
            curr = curr->children[ch];
            prefix += ch;
            if (curr->count == 1) {
                return prefix;
            }
        }
        return prefix;
    }
};

class Solution {
public:
    vector<string> findPrefixes(string arr[], int n) {
        Trie t;
        for (int i = 0; i < n; i++) {
            t.insert(arr[i]);
        }
        
        vector<string> result;
        for (int i = 0; i < n; i++) {
            result.push_back(t.findPrefix(arr[i]));
        }
        return result;
    }
};