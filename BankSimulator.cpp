#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char answer = 'n';
    int choice;
    double balance = 1000, deposit, withdraw;

    cout << "\033[35m\nWelcome To Laura's Bank Simulator :D\n\033[0m";
    do
    {
        cout << "\nBank Account Menu\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance\n";
        cout << "4. Exit\n";
         if (!(cin >> choice)) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Invalid input! Please enter a number.\n";
         continue;
        }

        switch (choice)
        {
        case 1:
            cout << "How much would you like to deposit? ";
            cin >> deposit;
            balance += deposit;
            cout << "\nYou have deposited " << deposit << "$. Balance: " << balance << "$\n";
            break;

        case 2:
            cout << "How much would you like to withdraw? ";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "You dont have enough money to withdraw \n";
            }
            else
            {
                balance -= withdraw;
                cout << "\nYou have withdrawed " << withdraw << "$. Balance: " << balance << "$\n";
            }
            break;

        case 3:
            cout << "\nYour balance is: " << balance << "$\n";
            break;

        case 4:
            cout << "You sure you wanna Exit? (y/n) \n";
            cin >> answer;
            break;

        default:
            cout << "Error!\n";
        }

    } while (answer == 'n' || answer == 'N');

    return 0;
}