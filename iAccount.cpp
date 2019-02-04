#include<iostream>
#include<string>
#include<map>
using namespace std;

class iAccount{
    protected:
        string username, password, role;
        map<string, string> users;
        map<string, string> user_roles;
    public:
        virtual void initializeUsers()=0;
        virtual void getUsernamePassword()=0;
        virtual bool validateLoginInfo()=0;
};
