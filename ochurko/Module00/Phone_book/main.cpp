#include "Phone_book.hpp"

using namespace std;

void display_phone_up()
{
    cout << endl;
    cout << "                  COMMANDS: " << endl;
    cout << " _________________________________________ " << endl;
    cout << "| add | search | remove | bookmark | exit |" << endl;
    cout << " ----------------------------------------- " << endl<<endl;
}



int main()
{
    string input = "";
    cout << endl << "📞 Welcome to Your PhoneBook 📖" << endl;
    Phone_book new_book;
    while(1)
    {
        display_phone_up();
        cout << "Please, enter command: ";
        getline(cin, input);
        if (input == "exit")
            return 0;
        else if (input == "add")
            new_book.add_contact();
        else if (input == "search")
            new_book.search();
        else if (input == "remove")
            new_book.delete_contact();
        else if (input == "bookmark")
            new_book.list_bookmark();
        else
            cout<< endl << "ERROR ENTER, TRY AGAIN!!!" << endl << endl;
        continue ;
    }
    return 0;
}
