#pragma once
#include <iostream>
#include<string>
#include<Validation.h>

using namespace std;



class Person
{
    protected:
            string name;
            string password ;
            int id ;
    public:
        Person() {
            this->id=0;
        }
        Person(string name,string password, int id){
            setName(name);
            setPassword(password);
            setId(id);

        }
        void setName(string name){
            if(Validation::validName(name)){
                this->name=name;
            }

        }
        void setPassword(string password){
            if(Validation::validPassword(password)){
                this->password=password;
            }

        }
        void setId(int id){
            this->id=id;
        }
        string getName(){
            return this->name;
        }
        string getPassword(){
            return this->password;
        }
        int getId(){
            return this->id;
        }
        void display(){
            cout<<"Name     :"<<getName()<<endl;
            cout<<"Password :"<<getPassword() <<endl;
            cout<<"ID       :"<<getId() <<endl;

        }
        virtual ~Person() {}


};

