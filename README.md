# DigitalWalletManagement-Using-CPP

## Overview
This project implements a basic simulation of a digital wallet system using C++. The program allows users to create multiple accounts, deposit money into them, and perform transactions between accounts. It also displays the final account balances in ascending order based on the account balance.

## Features
- **Account Creation**: Users can create multiple accounts by specifying an account ID and an initial deposit amount.
- **Transactions**: Users can perform transactions by transferring funds from one account to another. The system ensures that transactions are only processed if the sender has sufficient funds.
- **Sorting and Display**: After processing all transactions, the accounts are sorted based on their balances in ascending order, and the final state of each account is displayed.

## How It Works
1. **Account Setup**: 
   - The user first specifies the number of accounts (`n`) they want to create.
   - For each account, the user provides an account ID and the initial deposit amount.

2. **Processing Transactions**:
   - The user specifies the number of transactions (`q`) they want to perform.
   - For each transaction, the user provides:
     - The sender's account ID (`from`)
     - The receiver's account ID (`to`)
     - The amount to be transferred (`amount`)
   - The program checks if the sender has sufficient funds to complete the transaction. If so, the transfer is successful, and the balances of both accounts are updated accordingly. If not, the transaction fails.

3. **Sorting and Output**:
   - After all transactions are processed, the program sorts the accounts based on their balance in ascending order.
   - The sorted list of accounts, along with their final balances, is displayed.

## Example
```plaintext
Input:
3
1001 500
1002 1000
1003 750
3
1001 1002 200
1003 1002 500
1001 1003 100

Output:
Success
Success
Failure

1001 300
1003 250
1002 1700
```

## Dependencies
- The program uses standard C++ libraries (`<bits/stdc++.h>` for convenience).

## How to Run
1. Compile the code using a C++ compiler:
   ```
   g++ -o digital_wallet digital_wallet.cpp
   ```
2. Run the compiled program:
   ```
   ./digital_wallet
   ```
3. Follow the on-screen prompts to input the number of accounts, the initial deposit for each account, the number of transactions, and the details of each transaction.
