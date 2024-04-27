#pragma once
#include <iostream>
#include<string>

using namespace std;

class Validation
{
    public:
        Validation() {}
        static bool validName(string name){
            for(int i;name.length()>i;i++){
                if(!isalpha(name[i])||name.length()<5||name.length()>20)return false;
            }
            return true;
        }
        static bool validPassword(string password){
            for(int i;password.length()>i;i++){
                if(password.length()<8||password.length()>20)return false;
            }
            return true;
        }
        static bool validBalance(double balance){
            if(balance<1500){
                return false;
            }
                return true;
        }
        static bool validSalary(double salary){
            if(salary<5000){
                return false;
            }
                return true;
        }

        virtual ~Validation() {}


};
