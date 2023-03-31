#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;

// Backtracking search
bool search(int index, int i, int j, vector<vector<char>> &board, string word)
{
    // If all characters have been found, return true
    if (index == word.size())
    {
        return true;
    }
    // If out of bounds, return false
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
    {
        return false;
    }

    // Initialize ans to false
    bool ans = false;
    // If the current character matches, mark it and search in all directions
    if (word[index] == board[i][j])
    {
        board[i][j] = '*';

        ans = search(index + 1, i + 1, j, board, word) ||
              search(index + 1, i, j + 1, board, word) ||
              search(index + 1, i - 1, j, board, word) ||
              search(index + 1, i, j - 1, board, word);

        // Mark the character as unvisited
        board[i][j] = word[index];
    }

    // Return ans
    return ans;
}

// Iterative search
bool searchIterative(int index, int i, int j, vector<vector<char>> &board, string word)
{
    // Get the dimensions of the board
    int m = board[0].size();
    int n = board.size();

    // Create a stack to hold the indices to visit
    stack<pair<int, int>> st;
    st.push({i, j});

    // While the stack is not empty
    while (!st.empty())
    {
        // Get the current indices
        pair<int, int> curr = st.top();
        st.pop();
        i = curr.first;
        j = curr.second;

        // If all characters have been found, return true
        if (index == word.size())
        {
            return true;
        }
        // If out of bounds, continue to the next iteration
        if (i < 0 || j < 0 || i >= n || j >= m)
        {
            continue;
        }
        // If the current character doesn't match, continue to the next iteration
        if (word[index] != board[i][j])
        {
            continue;
        }

        // Mark the character as visited and push the adjacent indices to the stack
        board[i][j] = '*';
        st.push({i + 1, j});
        st.push({i, j + 1});
        st.push({i - 1, j});
        st.push({i, j - 1});
        index++;
    }

    // If all characters have not been found, return false
    return false;
}

bool exist(vector<vector<char>> &board, string word)
{
    int m = board[0].size();
    int n = board.size();
    int index = 0;
    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (word[index] == board[i][j])
            {
                // search using Backtracking
                // if (search(index, i, j, board, word))
                // {
                //     return true;
                // }

                // search using Iterative
                if (searchIterative(index, i, j, board, word))
                {
                    return true;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<char>> board = {
        {'O', 'C', 'H', 'I', 'N', 'A', 'B', 'A', 'S', 'A', 'T', 'W', 'X'},
        {'C', 'X', 'P', 'O', 'L', 'N', 'T', 'A', 'G', 'N', 'Q', 'I', 'S'},
        {'S', 'K', 'C', 'F', 'D', 'S', 'A', 'G', 'P', 'W', 'U', 'V', 'P'},
        {'F', 'X', 'H', 'O', 'U', 'F', 'M', 'J', 'O', 'K', 'G', 'L', 'A'},
        {'B', 'Z', 'I', 'A', 'B', 'H', 'L', 'L', 'A', 'R', 'F', 'M', 'I'},
        {'R', 'A', 'L', 'E', 'A', 'F', 'K', 'T', 'U', 'P', 'O', 'C', 'N'},
        {'A', 'C', 'E', 'Z', 'I', 'G', 'Q', 'S', 'A', 'V', 'A', 'A', 'E'},
        {'Z', 'A', 'X', 'E', 'B', 'A', 'I', 'I', 'R', 'A', 'Q', 'N', 'U'},
        {'I', 'Y', 'H', 'G', 'W', 'I', 'S', 'T', 'A', 'C', 'T', 'A', 'R'},
        {'L', 'P', 'P', 'U', 'A', 'Z', 'H', 'A', 'D', 'V', 'Y', 'D', 'P'},
        {'T', 'O', 'K', 'H', 'O', 'X', 'L', 'L', 'Q', 'O', 'M', 'A', 'S'},
        {'F', 'R', 'A', 'N', 'C', 'E', 'T', 'Y', 'J', 'Y', 'A', 'Y', 'A'},
        {'Z', 'U', 'A', 'M', 'N', 'I', 'R', 'O', 'M', 'K', 'J', 'X', 'L'},
    };

    cout << endl;
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            cout << board[i][j] << " | ";
        }
        cout << endl;
    }
    cout << "---------------------------------------------------" << endl;
    cout << endl;

    string word;
    cout << "Enter Word that you want to search in Grid" << endl;
    cin >> word;

    // cout << exist(board, word) << endl;
    return 0;
}