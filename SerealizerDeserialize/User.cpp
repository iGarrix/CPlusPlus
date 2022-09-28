#include "User.h"
#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using namespace std;
using namespace nlohmann;

User::User(string _name, string _surname, time_t _birthday)
{
    this->name = _name;
    this->surname = _surname;
    this->birthday = _birthday;
}

void User::viewUser()
{
	cout << "NAME: " << this->name << "\n";
	cout << "SURNAME: " << this->surname << "\n";
	cout << "BIRTHDAY: " << this->birthday << "\n";
}

void User::setUser(User _user)
{
	this->name = _user.name;
	this->surname = _user.surname;
	this->birthday = _user.birthday;
}

string User::parseToJson()
{
    json parseJson{};
    parseJson["name"] = this->name;
    parseJson["surname"] = this->surname;
    parseJson["birthday"] = this->birthday;

    return parseJson.dump();   
}

void User::saveToFile(string fileName)
{
    ofstream fw(fileName + ".json", ofstream::out);
    if (fw.is_open())
    {
        string parse = this->parseToJson();
        fw << parse;
        fw.close();
    }
    else cout << "Problem with opening file";
}
