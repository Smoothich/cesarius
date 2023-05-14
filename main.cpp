#include <iostream>
#include <string>

using namespace std;

string encrypt(string plaintext, int shift) {
    string ciphertext = "";

    // Loop through each character in the plaintext string
    for (int i = 0; i < plaintext.length(); i++) {
        // Get the ASCII value of the current character
        int ascii = (int) plaintext[i];

        // Shift the ASCII value by the given amount
        ascii = (ascii + shift) % 256;

        // Add the new character to the ciphertext string
        ciphertext += (char) ascii;
    }

    return ciphertext;
}

int main() {
    // Get the plaintext and shift amount from the user
    string plaintext;
    int shift;

    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    cout << "Enter the shift amount: ";
    cin >> shift;

    // Encrypt the plaintext with the given shift amount
    string ciphertext = encrypt(plaintext, shift);

    // Output the ciphertext to the console
    cout << "Ciphertext: " << ciphertext << endl;

    return 0;
}
