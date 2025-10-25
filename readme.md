🔐 C++ Message Encryptor & Decryptor

A simple C++ console program that allows users to encrypt and decrypt messages using a Caesar Cipher algorithm.
The program uses a switch-case to choose between operations and a while loop to keep running until the user exits.

📜 Features

🔁 Encrypt and decrypt messages easily

🔡 Works with both uppercase and lowercase letters

🔢 Custom shift key for encryption/decryption

🔄 Uses switch-case and while loop for continuous menu-based operations

🚪 Exit option to terminate safely

How It Works

This program uses a Caesar Cipher, which shifts each letter by a user-defined key (number).
For example, with a shift of 2:

A → C, B → D, Z → B
Decryption simply reverses this shift.

⚙️ Installation & Usage
1. Clone the repository
git clone https://github.com/sourabh200401/cipher/ciphercode.git
cd ciphercode

2. Compile the program
g++ ciphercode.cpp -o ciphercode

3. Run the program
./ciphercode

📖 Example Output
--- Encryption/Decryption Menu ---
1. Encrypt Message
2. Decrypt Message
3. Exit
Enter your choice: 1
Enter message to encrypt: hello world
Enter shift value (key): 3
Encrypted message: khoor zruog

🧠 Concepts Used

Caesar Cipher Algorithm

Switch-case statements

While loops

String manipulation

Character handling (ASCII and alphabet shifts)

🧑‍💻 Author

Sourabh Dey
📍 Badarpur, Assam
💼 BCA Student | Interested in Software Development & Cybersecurity
