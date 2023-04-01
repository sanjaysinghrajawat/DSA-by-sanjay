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

    return ans;
}

bool linearSearch(string word, vector<vector<char>> &board)
{
    int m = board[0].size();
    int n = board.size();
    int iter = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            iter++;
            int k = 0;
            while (k < word.size() && board[i][j + k] == word[k])
                k++;
            if (k == word.size())
            {
                cout << "Iteration = " << iter << endl;
                return true;
            }

            k = 0;
            while (k < word.size() && board[i + k][j] == word[k])
                k++;
            if (k == word.size())
            {
                cout << "Iteration = " << iter << endl;
                return true;
            }

            k = 0;
            while (k < word.size() && i + k < n && j + k < m && board[i + k][j + k] == word[k])
                k++;
            if (k == word.size())
            {
                cout << "Iteration = " << iter << endl;
                return true;
            }

            k = 0;
            while (k < word.size() && i + k < n && j - k >= 0 && board[i + k][j - k] == word[k])
                k++;
            if (k == word.size())
            {
                cout << "Iteration = " << iter << endl;
                return true;
            }
        }
    }
    cout << "Iteration = " << iter << endl;
    return false;
}

vector<int> exist(vector<vector<char>> &board, string word)
{
    int m = board[0].size();
    int n = board.size();
    int index = 0;
    vector<int> ans;
    int iter = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            iter++;
            if (word[index] == board[i][j])
            {
                // search using Backtracking
                if (search(index, i, j, board, word))
                {
                    // return true;
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
    }
    cout << "Iteration = " << iter << endl;
    return ans;
}

int main()
{
    int points = 0;

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
    cout << endl;

    cout << "----- WORD PUZZLE -----" << endl;
    cout << "* Find Country Name" << endl
         << endl;
    cout << "Total 12 Country Name Present" << endl;
    cout << endl;

    cout << "1. Backtracking" << endl;
    cout << "2. Linear Search" << endl;
    int choice;
    cin >> choice;

    string word;
    while (1)
    {
        if (choice == 1)
        {
            cout << endl;
            cout << "Enter Word that you want to search in Grid (type 'done' to EXIT)" << endl;
            cin >> word;
            if (word == "done" || word == "DONE")
            {
                break;
            }

            vector<int> ans = exist(board, word);

            if (ans.empty())
            {
                cout << endl
                     << "** Not found **" << endl;
            }
            else
            {
                ++points;
                cout << endl;
                cout << "--> Index of Row and Column respectivly ";
                for (int i : ans)
                {
                    cout << i << " ";
                }
                cout << endl;
                cout << "Points : " << points << endl;
            }
        }
        else if (choice == 2)
        {
            cout << endl;
            cout << "Enter Word that you want to search in Grid (type 'done' to EXIT)" << endl;
            cin >> word;
            if (word == "done" || word == "DONE")
            {
                break;
            }
            bool found = linearSearch(word, board);
            if (found)
            {
                cout << "Present" << endl;
            }
            else
            {
                cout << "Absent" << endl;
            }
        }
        else
        {
            cout << "Enter Valid Input" << endl;
            break;
        }
    }

    cout << "-- Country Name --" << endl;
    cout << "1. SPAIN" << endl;
    cout << "2. ITALY" << endl;
    cout << "3. BRAZIL" << endl;
    cout << "4. DUBAI" << endl;
    cout << "5. CANADA" << endl;
    cout << "6. CHILE" << endl;
    cout << "7. IRAQ" << endl;
    cout << "8. CHINA" << endl;
    cout << "9. FRANCE" << endl;
    cout << "10. KUWATT" << endl;
    cout << "11. RUSSIA" << endl;
    cout << "12. JAPAN" << endl;

    return 0;
}