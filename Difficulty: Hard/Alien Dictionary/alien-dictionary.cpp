class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        int n = words.size();
        
        vector<int> seen(26, 0);
        
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                seen[words[i][j] - 'a'] = 1;
            }
        }
        
        vector<int>adj[26];
        vector<int> indegree(26, 0);
        
        for(int i = 1; i < n; i++){
            string firstWord = words[i - 1];
            string secondWord = words[i];
            
            int ptr1 = 0, ptr2 = 0;
            
            while(ptr1 < firstWord.size() && ptr2 < secondWord.size()){
                if(firstWord[ptr1] != secondWord[ptr2]){
                    break;
                }
                ptr1++;
                ptr2++;
            }
            
            if(ptr1 != firstWord.size() && ptr2 == secondWord.size()) return "";
            
            if(ptr1 != firstWord.size() && ptr2 != secondWord.size()) {
                adj[firstWord[ptr1] - 'a'].push_back(secondWord[ptr2] - 'a');
                indegree[secondWord[ptr2] - 'a']++;
            }
        }
        
        queue<int>q;
        string ans = "";
        
        for(int i = 0; i < 26; i++){
            if(indegree[i] == 0 && seen[i] != 0) {
                q.push(i);
                ans += ('a' + i);
            }
        }
        
        while(!q.empty()){
            auto node = q.front(); q.pop();
           
            for(int ngh : adj[node]){
                indegree[ngh]--;
                
                if(indegree[ngh] == 0){
                    q.push(ngh);
                    ans += ('a' + ngh);
                }
            }
        }
        
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            if (seen[i]) cnt++;
        }

        if (ans.size() != cnt) return "";

        return ans;
        
    }
};