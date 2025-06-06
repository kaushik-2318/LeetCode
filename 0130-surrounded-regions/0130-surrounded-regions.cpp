class Solution {
public:
void dfs(vector<vector<char>> &board, int i, int j)
{
    int m = board.size();
    int n = board[0].size();

    if (i < 0 || j < 0 || i >= m || j >= n)
        return;

    if (board[i][j] == 'X' || board[i][j] == 'A')
        return;

    board[i][j] = 'A';

    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
}

void solve(vector<vector<char>> &board)
{
    int m = board.size();
    int n = board[0].size();

    int i = 0, j = 0;
    for (j = 0; j < n; j++)
        if (board[i][j] == 'O')
            dfs(board, i, j);

    i = 0, j = 0;
    for (i = 0; i < m; i++)
        if (board[i][j] == 'O')
            dfs(board, i, j);

    i = m - 1, j = 0;
    for (j = 0; j < n; j++)
        if (board[i][j] == 'O')
            dfs(board, i, j);

    i = 0, j = n - 1;
    for (i = 0; i < m; i++)
        if (board[i][j] == 'O')
            dfs(board, i, j);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] != 'A')
                board[i][j] = 'X';
            if (board[i][j] == 'A')
                board[i][j] = 'O';
        }
    }
}
};