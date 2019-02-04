#include<iostream>
#include<string>
#include<map>
using namespace std;

class User : public Account{
    private:
        string role = "user";
    public :
         void displayUserInterface(){
            if(role.compare(user_roles.find(username)->second) == 0){
                cout<<"USER INTERFACE";
            }
        }

};
