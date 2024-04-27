#pragma once
#include<Employee.h>

class Admin : public Employee
{
    public:
        Admin():Employee() {}
        Admin(string name,string password, int id,double salary):Employee( name, password, id,salary){ }


        virtual ~Admin() {}


};

