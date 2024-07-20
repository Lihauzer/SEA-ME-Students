#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include <vector>
#include <stdlib.h>
#include "Contact.hpp"

using namespace std;

class Phone_book
{
private:
    int id = 1;
    std::vector<Contact> phone_book;
public:
    Phone_book(){};
    ~Phone_book(){};
    void add_contact();
    int check_phone(string str);
    int check_index(string str, int j);
    void print_book();
    void add_bookmark(int i);
    int ft_satoi(string input);
    void search();
    void list_bookmark();
    void ft_change_id();
    void delete_contact();
};
#endif