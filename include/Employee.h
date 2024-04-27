#pragma once
#include<Person.h>

class Employee:public Person
{
    private:
        double salary;

    public:
    Employee():Person() {
        this->salary = 0.0;
    }
    Employee(string name,string password, int id,double salary):Person( name, password, id){
        setSalary(salary);
    }
    //setter
    void setSalary(double salary) {
        if(Validation::validSalary(salary)){
          this->salary=salary;
        }

    }
    //Getter
    double getSalary() {
        return salary;
    }
    void display() {
        Person::display();
        cout << "The Salary : " << getSalary() << endl;
    }

        virtual ~Employee() {}


};

