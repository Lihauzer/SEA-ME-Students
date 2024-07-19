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
    void setContact(int i);
    void setId(int i){this->id = i;};
    void setBookmark(){this->bookmark = true;};
    bool getBookmark(){return this->bookmark;};
    string ft_input(string str);
    string getPhone(){return this->phone;};
    int getIndex(){return this->id;};
    void getContact(){};
    void print_contact();
};

#endif
