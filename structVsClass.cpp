#include<iostream>
using namespace std;

struct CDAccount 
{
    double balance;
    void getData(){
        cout << "Enter your balance: $";
        cin >> balance;
    }
};

class CDAccount1{
    public : 
        double balance;
        void addBonus(int);
        void getData(){
            cout << "Enter your balance(class): $";
            cin >> balance;
        };
};

int main(int argc, char const *argv[])
{
    CDAccount myAccount;
    CDAccount1 myAccount1;
    myAccount.getData();
    cout << "Your balance is " << myAccount.balance << " $\n";

    myAccount1.getData();
    myAccount1.addBonus(100);
    cout << "\nYour balance is " << myAccount1.balance << " $\n";
    return 0;
}

void CDAccount1 :: addBonus( int bonus){
    balance = balance + bonus;
    cout << "Bonus 100$ added to your account";
}