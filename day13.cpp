#include<iostream>
using namespace std;
#include<cstdlib>

void clearscreen()
{
    system("clear");
}

string board [3][10]={
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "},

};

void printboard(){

    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<< endl;
    cout << "🦄\t " << board[0][0] << "\t" << "🦄\t" << board[0][1] << "\t" << "🦄\t" << board[0][2] << "\t🦄" <<endl;
    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<<"\n\n";

    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<<endl;
    cout << "🦄\t " << board[1][0] << "\t" << "🦄\t" << board[1][1] << "\t" << "🦄\t" << board[1][2] << "\t🦄" <<endl;
    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<<"\n\n";

    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<<endl;
    cout << "🦄\t " << board[2][0] << "\t" << "🦄\t" << board[2][1] << "\t" << "🦄\t" << board[2][2] << "\t🦄" <<endl;
    cout << "🦄\t \t" << "🦄\t \t" << "🦄\t \t🦄"<<"\n\n";

};

bool checkwin(string player){
    for (int i = 0; i<3; i++)
     if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;


if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;
    
    return false;

};

int main(){
    int pos;
    string currentPlayer = "🍀";

    for(int moves=0; moves <9; moves++){
        clearscreen();
        printboard();

        cout << currentPlayer <<"'s turns: ";
        cin  >> pos;
        pos--;

        int row= pos/3;
        int col= pos%3;

         if (pos >= 0 && pos < 9 && board[row][col] == " ") {
            board[row][col] = currentPlayer;
            moves++;

            
            if (checkwin(currentPlayer)) {
                clearscreen();
                printboard();
                cout << "🎉 Player " << currentPlayer << " wins! 🎉\n";
                return 0;
            };

            currentPlayer = currentPlayer=="🍀" ? "☘️": "🍀";

            
        } else {
            cout << "Invalid move! Try again.\n";
        }
    }

    clearscreen();
    printboard();
    cout << "😄 It's a draw!\n";

    return 0;
}













