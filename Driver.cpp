#include<iostream>
#include<string>
#include<map>
using namespace std;


class Driver : public Account{
    private:
        string role = "driver";
    public :
        void displayUserInterface(){
            if(role.compare(user_roles.find(username)->second) == 0){
                cout<<"DRIVER INTERFACE";
            }
        }

};
