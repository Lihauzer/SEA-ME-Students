#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include "Contact.hpp"
#include <vector>
#include <stdlib.h>

class Phone_book
{
private:
    int id = 1;
    std::vector<Contact> phone_book;
public:
    Phone_book(){};
    ~Phone_book(){};
    void add_contact()
    {
        int i = 0;
        Contact tmp_contact;
        while(!i)
        {
            tmp_contact.setContact(this->id);
            i = check_phone(tmp_contact.getPhone());
        }
        this->phone_book.push_back(tmp_contact);
        this->id++;
        cout << "";
    };
    int check_phone(string str)
    {
        for(size_t i = 0; i < phone_book.size(); i++)
        {
            if (this->phone_book[i].getPhone() == str)
            {
                cout << "ERROR this phone number is already in contacts, try again!" << endl;
                return 0;
            }
        }
        return 1;
    };

    int check_index(string str, int j)
    {
        if (str == "" || str == "0")
            cout << "ERROR it couldn't empty or '0'!" << endl;
        for (size_t i = 0; i < str.size(); i++)
        {
            if(str[i] > 57 || str[i] < 48)
            {
                if (j == 0)
                    cout << "ERROR index!" << endl;
                return 1;
            }
        }
        return 0;
    }
    void print_book()
    {
        for(size_t i = 0; i< this->phone_book.size(); i++)
            this->phone_book[i].print_contact();
    };

    void add_bookmark(int i)
    {
        if (this->phone_book[i].getBookmark() == true)
            cout << endl << "Contact is alredy to bookmarks for." << endl;
        else
        {
            cout << endl << "Added contact to bookmarks for index: " << i + 1 << endl;
            this->phone_book[i].setBookmark();
        }
    };

    int ft_satoi(string input)
    {
        int tmp_index = 0;

        for(size_t j = 0; j < input.size(); j++)
            tmp_index = tmp_index*10 + (input[j] - 48);
        return (tmp_index);
    };
    void search()
    {
        string input = "";
        int flag = 0;
        int tmp_id = 0;

        print_book();
        while(1)
        {
            cout << "Please, enter index: ";
            getline(cin, input);
            if (!input.compare("exit"))
                return ;
            if (check_index(input, 0))
                continue ;
            tmp_id = ft_satoi(input);
            for (size_t j = 0; j < this->phone_book.size(); j++)
            {
                if (phone_book[j].getIndex() == tmp_id)
                {
                    if (flag == 0)
                    {
                    cout<< endl << "SEARCH INFORMATION: " << endl << endl;
                    this->phone_book[j].print_contact();
                    }
                    cout << endl;
                    cout << "             COMMANDS: " << endl;
                    cout << " ___________________________ " << endl;
                    cout << "|  back | search | bookmark |" << endl;
                    cout << " --------------------------- " << endl<<endl;
                    cout << "Please, enter command: ";
                    getline(cin, input);
                    if (!input.compare("exit"))
                        return ;
                    if (input == "")
                    {
                        cout << "ERROR command!" << endl;
                        continue ;
                    }
                    else if (!input.compare("search"))
                    {
                        search();
                        return ;
                    }

                    else if (!input.compare("back"))
                        return ;
                    else if (!input.compare("bookmark"))
                    {
                        add_bookmark(j);
                        j = -1;
                        flag = 1;
                        continue ;
                    }
                    break;
                }
            }
            cout << "This index not found!" << endl;
        }
    };

    void list_bookmark()
    {
        int flag = 0;
        cout<< endl << "BOOKMARK CONTACTS: " << endl << endl;
        for (size_t i =0; i < phone_book.size(); i++)
        {
            if (phone_book[i].getBookmark() == true)
            {
                this->phone_book[i].print_contact();
                flag = 1;
            }
        }
        if (flag == 0)
            cout<< "BOOKMARK IS EMPTY" << endl << endl;
    };

    void ft_change_id()
    {
        this->id--;
        for (size_t i = 0; i < this->phone_book.size(); i++)
            this->phone_book[i].setId(i + 1);
    }

    void delete_contact()
    {
        string input = "";
        print_book();
        cout << endl << endl << "You want to delete the contact" << endl;
        while(1)
        {
            cout << "Enter the phone number or ID: ";
            getline(cin, input);
            if (!input.compare("exit"))
                return ;
            for(size_t i = 0; i < phone_book.size(); i++)
            {
                if (!check_index(input, 1) && phone_book[i].getIndex() == ft_satoi(input))
                {
                    cout<< endl << "Delete the contact ID: " << phone_book[i].getIndex() << endl;
                    phone_book.erase (phone_book.begin()+i);
                    ft_change_id();
                    return ;
                }
                else if (phone_book[i].getPhone() == input)
                {
                    phone_book.erase (phone_book.begin()+i);
                    cout<< endl << "Delete the contact ID: " << phone_book[i].getIndex() << endl;
                    ft_change_id();
                    return ;
                }
            }
            cout << endl << "The contact don't find, try again;" << endl;
        }
    };
};
#endif // PHONE_BOOK_H
