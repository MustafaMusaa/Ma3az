#pragma once
#include<Person.h>
#include<iterator>
#include<vector>

using namespace std;



class Client:public Person
{
    private:
        double balance;
    public:
        Client():Person() {
            this->balance=0.0;
        }
        Client(string name,string password, int id,double balance):Person( name, password, id){

        }

        void setBalance(double balance){
            if(Validation::validBalance(balance)){
                this->balance=balance;
            }
        }
        double getBalance(){
            return this->balance;
        }
        void display(){
            Person::display();
            cout<<"Balance :"<<getBalance()<<endl;

        }
        void deposit(double amount){
                this-> balance += amount;
        }

        void withdraw(double amount){
                this-> balance -= amount;
        }

        void transferTo(double amount, Client& recipient){
            withdraw(amount);
            recipient.deposit(amount);
        }
        void  checkBalance(){
            cout << "The Balance is :"<< balance<< endl;
        }



        virtual ~Client() {}

    protected:

};
