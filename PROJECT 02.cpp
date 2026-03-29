#include <iostream>
#include <string>
using namespace std;

int main() {
    string Username;
    string Password;

    cout << "=== CREATE ACCOUNT ===\n";
    cout << "Create username: ";
    cin >> Username;

    cout << "Create password: ";
    cin >> Password;

    cout << "\nAccount created successfully!\n";

    string username, password;
    int attempts = 0;

    cout << "\n=== SECURE LOGIN SYSTEM ===\n";

    while (attempts <= 5) {
        cout << "\nEnter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == Username && password == Password) {
            cout << "Login successful! Welcome!\n";
            return 0;
        } else {
            cout << "Invalid username or password!\n";
            attempts++;
        }
    }

    cout << "Too many failed attempts. Access denied.\n";

    return 0;
}
