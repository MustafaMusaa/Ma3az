#pragma once
#include <iostream>
#include<string>
#include<Person.h>
#include<Client.h>
#include<Employee.h>
#include<Admin.h>
#include <fstream>

using namespace std;

int main()
{
    fstream myfile;
    myfile.open("client.txt", ios::out);
    if (myfile.is_open()){
        myfile << "Mohamed\n";
        myfile << "Mustafa\n";
        myfile.close();
    }
    Person m("asasasas","12121323",1);
//    m.setId(1);
//    m.setName("asasasas");
//    m.setPassword("12121323");
    m.display();
    Client c;
    c.setBalance(1600);
    c.checkBalance();

    cout<<"=====================\n";
    cout<<"=====================\n";

//    Employee e;
//    e.setId(2);
//    e.setPassword("sjkshskx");
//    e.setName("sskdhsjkd");
//    e.setSalary(7000);
//    e.display();

    cout<<"=====================\n";
    Admin e;
     e.setPassword("sjkshskx");
    e.setName("sskdhsjkd");
    e.setSalary(7000);
    e.display();

    cout << "Hello world!" << endl;
    return 0;
}
