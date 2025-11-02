# 🏦 Bankmate

[![License](https://img.shields.io/badge/License-Apache--2.0-blue.svg)](LICENSE)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)
![Status](https://img.shields.io/badge/Status-Active-success)
![Contributions](https://img.shields.io/badge/Contributions-Welcome-brightgreen)
![GitHub stars](https://img.shields.io/github/stars/roshhellwett/Bamkmate?style=social)

A simple yet effective **Command-Line Banking System** written in **C**.  
It lets users **deposit**, **withdraw**, and **check their balance**, while showcasing concepts like **functions**, **loops**, and **switch-case logic** — perfect for beginners learning structured programming.

---

## 📊 Overview

| Feature | Description |
|----------|-------------|
| 💰 Deposit | Add funds to your account |
| 💸 Withdraw | Safely withdraw balance |
| 🧾 Display Balance | Check your remaining balance |
| 🔁 Repeat Option | Continue or exit anytime |
| ⚙️ Modular Design | Built using separate functions for clarity |

---

## 🧠 Concepts Used
- Functions and parameters  
- Conditional statements (`if-else`)  
- Loops (`do-while`)  
- Switch-case statements  
- Input/Output handling (`scanf`, `printf`)

---

## 🧩 Example Output
```bash
WELCOME TO BANKING SYSTEM
AUTHOR - ROSHAN

:--CLI BANKING SYSTEM--:
1. DEPOSIT
2. WITHDRAW
3. DISPLAY BALANCE
CHOOSE BETWEEN (1-3) :- 1

:--DEPOSIT SECTION--:
ENTER THE AMOUNT
500
:--BALANCE SECTION--:
REMAINING BALANCE :10500.00

# Clone this repository
git clone https://github.com/roshhellwett/cli-banking-system.git

# Navigate to project folder
cd cli-banking-system

# Compile the code
gcc banking_system.c -o banking_system

# Run the program
./banking_system
