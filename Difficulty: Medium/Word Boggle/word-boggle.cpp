class Solution {
  public:
    bool dfs(vector<vector<char> >& board, vector<string>& dictionary, int i, int j,
    string word,int index)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='%')
        {
            return false;
        }
        if(index==word.size()-1)
        {
            return board[i][j]==word[index];
        }
        
        if(word[index]!=board[i][j])
        {
            return false;
        }
        char original=board[i][j];
        board[i][j]='%';
        bool option1=dfs(board,dictionary,i+1,j,word,index+1);
        bool option2=dfs(board,dictionary,i-1,j,word,index+1);
        bool option3=dfs(board,dictionary,i+1,j+1,word,index+1);
        bool option4=dfs(board,dictionary,i+1,j-1,word,index+1);
        bool option5=dfs(board,dictionary,i-1,j+1,word,index+1);
        bool option6=dfs(board,dictionary,i-1,j-1,word,index+1);
        bool option7=dfs(board,dictionary,i,j+1,word,index+1);
        bool option8=dfs(board,dictionary,i,j-1,word,index+1);
        board[i][j]=original;
        return option1||option2||option3||option4||option5||option6||option7||option8;
    }
    vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
        // Code here
        vector<string>ans;
        
        for(int i=0 ; i<board.size() ; i++)
        {
            for( int j=0 ; j<board[0].size() ; j++)
            {
                for(auto word:dictionary)
                {
                    if(word[0]==board[i][j])
                    {
                        if(dfs(board,dictionary,i,j,word,0))
                        {
                            if(find(ans.begin(),ans.end(),word)==ans.end())
                                ans.push_back(word);
                        }
                    }
                }
            }
        }
        return ans;
    }
};