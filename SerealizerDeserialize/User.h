#pragma once
#include <string>
#include <ctime> 

using namespace std;

class User
{
public:
	string name;
	string surname;
	time_t birthday;

    User(string _name, string _surname, time_t _birthday);

	void setUser(User _user);
	void viewUser();
    string parseToJson();
    void saveToFile(string fileName);
};
