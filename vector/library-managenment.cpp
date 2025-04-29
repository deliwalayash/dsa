#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book
{
private:
    int Bookid;
    string name;
    string author_name;
    bool isIssued = true;

public:
    Book() {}
    Book(int id, string name, string author_name)
    {
        this->Bookid = id;
        this->name = name;
        this->author_name = author_name;
    }
    void getdata()
    {
        cout << "\n--------------------------------\n";
        cout << "Book id :" << this->Bookid << endl;
        cout << "Name :" << this->name << endl;
        cout << "Author :" << this->author_name << endl;
        cout << "Availability:" << (isIssued ? "Available" : "Not Available");
        cout << "\n--------------------------------\n";
    }

    void issuebook()
    {
        this->isIssued = false;
        cout << "Book Issued Successfully:" << endl;
    }

    void returnbook()
    {
        this->isIssued = true;
        cout << "Book Returned Successfully:" << endl;
    }

    int getbookid()
    {
        return this->Bookid;
    }

    int getisIssued()
    {
        return this->isIssued;
    }
};
int main()
{

    vector<Book> library;
    int choice;

    do
    {

        cout << "Enter 1 for addBook : " << endl;
        cout << "Enter 2 for viewBook :" << endl;
        cout << "Enter 3 for issueBook :" << endl;
        cout << "Enter 4 for returnBook :" << endl;
        cout << "Enter 0 for Exit:" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id;
            string name, author;
            cout << "Enter id:" ;
            cin >> id;

            cin.ignore();

            cout << "Enter Name:";
            getline(cin, name);

            cout << "Enter author:";
            getline(cin, author);

            library.emplace_back(id, name, author);
            break;
        }
        case 2:
        {
            int i;
            int n = library.size();
            for (i = 0; i < n; i++)
            {
                library[i].getdata();
            }
            break;
        }

        case 3:
        {
            int id, i;
            bool flag = false;
            string name, date;
            cout << "Enter Book id You want to issue:";
            cin >> id;
            int n = library.size();
            for (i = 0; i < n; i++)
            {
                if (id == library[i].getbookid())
                {
                    flag = true;
                    cin.ignore();
                    if (library[i].getisIssued() == true)
                    {
                        cout << "Enter Name:";
                        getline(cin, name);
                        cout << "Enter Date:";
                        getline(cin, date);
                        library[i].issuebook();
                    }
                    else
                    {
                        cout << "Book is Not Available:" << endl;
                    }
                }
                if (flag = false)
                {
                    cout << "Enter Proper Book id:";
                }
            }
            break;
        }
        case 4:
        {

            int id, i;
            cout << "Enter book id you want to return : ";
            cin >> id;

            int n = library.size();

            bool flag = false;
            for (i = 0; i < n; i++)
            {
                if (id == library[i].getbookid())
                {
                   flag = true;
                   if (library[i].getisIssued() == false)
                   {
                        library[i].returnbook();
                   }
                   else{
                    cout << "Book alredy in stock";
                   }
                }
                if (flag = false)
                {
                    cout << "Enter book id";
                }
                
                
            }

            break;
        }

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
