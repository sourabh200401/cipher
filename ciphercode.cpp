#include <iostream>
#include <string>
using namespace std;

// Function to encrypt a message
string encrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {  // Check if character is a letter
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base + shift) % 26 + base);
        } else {
            result += c; // Keep non-alphabet characters as is
        }
    }
    return result;
}

// Function to decrypt a message
string decrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += char((c - base - shift + 26) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    int choice;
    string message;
    int shift;

    while (true) {
        cout << "\n--- Encryption/Decryption Menu ---\n";
        cout << "1. Encrypt Message\n";
        cout << "2. Decrypt Message\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Clear input buffer for getline
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter message to encrypt: ";
                getline(cin, message);
                cout << "Enter shift value (key): ";
                cin >> shift;
                cout << "Encrypted message: " << encrypt(message, shift) << endl;
                break;

            case 2:
                cout << "Enter message to decrypt: ";
                getline(cin, message);
                cout << "Enter shift value (key): ";
                cin >> shift;
                cout << "Decrypted message: " << decrypt(message, shift) << endl;
                break;

            case 3:
                cout << "Exiting program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
        cin.ignore(); // Clear buffer before next loop
    }
}
