#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
    int bookId;
    string title;
    string author;
    bool isIssued;

public:
    Book()
    {
        this->bookId = 0;
        this->title = "";
        this->author = "";
        this->isIssued = false;
    };
    void addBook(int bookId, string title, string author)
    {
        this->bookId = bookId;
        this->title = title;
        this->author = author;
    }
};

class Issuedbook : public Book
{
};

int main()
{
    int choice, slot = 0;
    Issuedbook library[5];

    do
    {
        cout << "Enter 1 for Add Book......." << endl;
        cout << "Enter 2 for View All Book......." << endl;
        cout << "Enter 3 for Issue Book......." << endl;
        cout << "Enter 4 for Return Book......." << endl;
        cout << "Enter 0 for Exit......." << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int bookId;
            string title, author;

            cout << "Enter Bood Id:";
            cin >> bookId;

            cin.ignore();

            cout << "Enter Book name:";
            getline(cin, title);

            cout << "Enter author name:";
            getline(cin, author);

            library[slot].addBook(bookId,title,author);
            slot++; 

            

            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 0:
        {
            break;
        }

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}