#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
    private:
        int accountNumber;
        string accountHolder;
        float accountBalance;
    public:
        BankAccount(int accNum, string accHolder, float accBalance){
            accountNumber = accNum;
            accountHolder = accHolder;
            accountBalance = accBalance;
        }

        inline void displayBalance(){
            cout<<accountBalance<<" This is " <<accountHolder<<"'s current Balance\n";
        }

        friend void transferAmount(float amount,BankAccount receiver,BankAccount giver);
};

void transferAmount(float amount,BankAccount receiver,BankAccount giver){
    if (amount <=0 )
    {
        cout<<"Valid amount should be greater than 0\n";
        return;
   }
    if (amount > giver.accountBalance)
    {
        cout<<"Insuffecient Funds of "<<giver.accountHolder<<"\n";
        return;
    }

    receiver.accountBalance+=amount;
    giver.accountBalance-=amount;
    
}

int main(){
    BankAccount account1(1234,"Trijal",9800);
    BankAccount account2(123,"khade",17344.01);

    account1.displayBalance();
    account2.displayBalance();


    transferAmount(-0.01,account1,account2);
    transferAmount(10000.02,account1,account2);
    transferAmount(0.01,account1,account2);

    account1.displayBalance();
    account2.displayBalance();
    return 0;
}