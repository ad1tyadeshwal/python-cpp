#include <iostream>
using namespace std;

struct user {
    string email;
    string password;
};

int main() {
    user users[] = {
        {"aadi@gmail.com", "1234567890"},
        {"aditya@gmail.com", "asdfghjkl"}
    };

    cout << "=========================================\n";
    cout << "============== LOGIN PAGE ===============\n";
    cout << "=========================================\n";

    string email;
    cout << "Enter your email: ";
    cin >> email;
    string password;
    cout << "Enter your password: ";
    cin >> password;

    bool loginSuccess = false;

    for (int i = 0; i < 2; i++) {
        if (users[i].email == email && users[i].password == password) {
            loginSuccess = true;
            break;
        }
    }

    if (loginSuccess) {
        cout << "Login successful ✅" << endl;
    } else {
        cout << "Login unsuccessful ❌" << endl;
    }

    return 0;
}
