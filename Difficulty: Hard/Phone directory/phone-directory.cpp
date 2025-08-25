
class TrieNode {
public:
    TrieNode* children[26];
    bool isTerminal;
    
    TrieNode() {
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};
class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (!node->children[index]) {
                node->children[index] = new TrieNode();
            }
            node = node->children[index];
        }
        node->isTerminal = true;
    }

    void findMatches(TrieNode* node, string prefix, vector<string>& result) {
        if (node->isTerminal) {
            result.push_back(prefix);
        }
        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                findMatches(node->children[i], prefix + (char)('a' + i), result);
            }
        }
    }
};
class Solution {
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s) {
        Trie t;
        set<string> uniqueContacts;
        for (int i = 0; i < n; i++) {
            uniqueContacts.insert(contact[i]);
        }
        for (const string& str : uniqueContacts) {
            t.insert(str);
        }

        vector<vector<string>> ans;
        TrieNode* node = t.root;
        string prefix = "";
        bool empty = false;

        for (char ch : s) {
            if (empty) {
                ans.push_back({"0"});
                continue;
            }
            
            prefix.push_back(ch);
            int index = ch - 'a';
            if (!node->children[index]) {
                empty = true;
                ans.push_back({"0"});
                continue;
            }

            node = node->children[index];
            vector<string> matches;
            t.findMatches(node, prefix, matches);
            sort(matches.begin(), matches.end());
            ans.push_back(matches);
        }

        return ans;
    }
};