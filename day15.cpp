#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

void drawBoard(int p1, int p2) {
    int board[30];
    for (int i = 0; i < 30; i++)
        board[i] = i + 1;

    cout << "\n=========== LUDO BOARD ===========\n\n";

    for (int i = 0; i < 30; i++) {
        bool printed = false;

        if (i + 1 == p1) {
            cout << "[P1]";
            printed = true;
        }
        if (i + 1 == p2) {
            cout << "[P2]";
            printed = true;
        }

        if (!printed)
            cout << "[" << setw(2) << i + 1 << "]";

        if ((i + 1) % 5 == 0)
            cout << endl;
    }

    cout << "\n=================================\n";
}

int main() {
    srand(time(0));

    int p1 = 0, p2 = 0;
    const int END = 30;

    cout << "===== SIMPLE LUDO WITH BOARD =====\n";
    cout << "Reach position 30 to win!\n\n";

    while (true) {
        drawBoard(p1, p2);

        // Player 1
        cout << "\nPlayer 1 turn (press Enter)";
        cin.ignore();
        int dice = rollDice();
        cout << "Dice: " << dice << endl;

        if (p1 + dice <= END)
            p1 += dice;

        if (p1 == END) {
            drawBoard(p1, p2);
            cout << "\n🎉 Player 1 Wins!\n";
            break;
        }

        drawBoard(p1, p2);

        // Player 2
        cout << "\nPlayer 2 turn (press Enter)";
        cin.ignore();
        dice = rollDice();
        cout << "Dice: " << dice << endl;

        if (p2 + dice <= END)
            p2 += dice;

        if (p2 == END) {
            drawBoard(p1, p2);
            cout << "\n🎉 Player 2 Wins!\n";
            break;
        }
    }

    return 0;
}

