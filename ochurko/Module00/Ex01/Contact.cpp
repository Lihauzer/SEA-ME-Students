#include "Contact.hpp"

void Contact::setContact(int i)
{
    this->id = i;
    string input = "";
    this->name = this->ft_input("Enter Name: ");
    this->phone = this->ft_input("Enter Phone: ");
    this->nik_name = this->ft_input("Enter Nik-name: ");
}

string Contact::ft_input(string str)
{
    bool i = true;
    string input = "";
    while(i)
    {
        cout << str;
        getline(cin, input);
        if (input == "")
        {
            cout << "ERROR string is not empty!" << endl;
            continue ;
        }
        i = false;
    }
    return input;
}

void Contact::print_contact()
{
    cout << this->id << ". Name:" << this->name << " Phone: ";
    cout << this->phone << " Nik-name: " << this->nik_name << endl;
}