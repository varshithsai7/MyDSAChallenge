#include<iostream>
#include<vector>
using namespace std;

bool issafe(vector<vector<char>>&b,int row,int col,int dig){
    for(int j=0;j<9;j++){
        if(b[row][j]==dig){
            return false;
        }
    }
    // horizontal

    // vertical
    for(int i=0;i<9;i++){
        if(b[i][col]==dig){
            return false;
        }
    }

    // starting row and col
    // sr=r/3  * 3 
    // sc=c/3 * 3
    int srow=(row/3) * 3;
    int scol=(col/3) * 3;
    for(int i=srow;i<srow+3;i++){
        for(int j=scol;j<scol+3;j++){
            if(b[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}


bool helper(vector<vector<char>>&b,int row,int col){

    if (row==9){
        return true;
    }
    int nextrow=row,nextcol=col+1;
    if(nextcol == 9){
        nextrow=row+1;
        nextcol=0;
    }
    if (b[row][col]!='.'){
        return helper(b,nextrow,nextcol);
    }

    // place digit
    for(char dig='1';dig<='9';dig++){
        if(issafe(b,row,col,dig)){
            b[row][col]=dig;
            if(helper(b,nextrow,nextcol)){
                return true;
            }
            b[row][col]='.';
        }
    }

    return false;
}

int main(){
    vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
    };

    cout<<helper(board,0,0)<<endl;
    if (helper(board, 0, 0)) {
        cout << "Solved Sudoku:\n";
        for (auto row : board) {
            for (char ch : row) cout << ch << " ";
            cout << endl;
        }
    } else {
        cout << "No solution exists.\n";
    }
    return 0;
}