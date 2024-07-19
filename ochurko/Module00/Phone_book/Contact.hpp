#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

using namespace std;

class Contact
{
private:
    int id;
    string name;
    string phone;
    string  nik_name;
    bool    bookmark = false;
public:
    Contact(){};
    ~Contact(){};
    void setContact(int i)
    {
        this->id = i;
        string input = "";
        this->name = this->ft_input("Enter Name: ");
        this->phone = this->ft_input("Enter Phone: ");
        this->nik_name = this->ft_input("Enter Nik-name: ");
    };
    void setId(int i){this->id = i;};
    void setBookmark(){this->bookmark = true;};
    bool getBookmark(){return this->bookmark;};
    string ft_input(string str)
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
    };
    string getPhone(){return this->phone;};
    int getIndex(){return this->id;};
    void getContact(){};
    void print_contact()
    {
        cout << this->id << ". Name:" << this->name << " Phone: ";
        cout << this->phone << " Nik-name: " << this->nik_name << endl;
    }

};
#endif // CONTACT_HPP
