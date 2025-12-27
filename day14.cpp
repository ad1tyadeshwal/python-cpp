#include <iostream>
#include <limits>
using namespace std;

char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

const char HUMAN = 'X';
const char AI = 'O';

// Draw the board
void drawBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Check win
bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Check draw
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Minimax algorithm
int minimax(bool isAI) {
    if (checkWin(AI)) return 1;
    if (checkWin(HUMAN)) return -1;
    if (isDraw()) return 0;

    if (isAI) {
        int bestScore = -1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = AI;
                    bestScore = max(bestScore, minimax(false));
                    board[i][j] = ' ';
                }
            }
        }
        return bestScore;
    } else {
        int bestScore = 1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = HUMAN;
                    bestScore = min(bestScore, minimax(true));
                    board[i][j] = ' ';
                }
            }
        }
        return bestScore;
    }
}

// AI move
void aiMove() {
    int bestScore = -1000;
    int moveRow = -1, moveCol = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = AI;
                int score = minimax(false);
                board[i][j] = ' ';

                if (score > bestScore) {
                    bestScore = score;
                    moveRow = i;
                    moveCol = j;
                }
            }
        }
    }

    board[moveRow][moveCol] = AI;
}

// Human move
void humanMove() {
    int move;
    while (true) {
        cout << "Enter position (1-9): ";
        cin >> move;
        move--;

        int row = move / 3;
        int col = move % 3;

        if (move >= 0 && move < 9 && board[row][col] == ' ') {
            board[row][col] = HUMAN;
            break;
        } else {
            cout << "Invalid move. Try again.\n";
        }
    }
}

int main() {
    cout << "TIC TAC TOE - YOU (X) vs AI (O)\n";

    while (true) {
        drawBoard();
        humanMove();

        if (checkWin(HUMAN)) {
            drawBoard();
            cout << "🎉 You win!\n";
            break;
        }
        if (isDraw()) {
            drawBoard();
            cout << "It's a draw!\n";
            break;
        }

        aiMove();

        if (checkWin(AI)) {
            drawBoard();
            cout << "🤖 AI wins!\n";
            break;
        }
        if (isDraw()) {
            drawBoard();
            cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
