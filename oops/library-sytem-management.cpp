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

    void viewBook(){
        cout <<"\n--------------------------------\n";
        cout <<"Book id:" << this->bookId << endl;
        cout <<"Book Title:"<< this->title << endl;
        cout <<"Book Author:" <<this->author << endl; 
        cout <<"Availability:" << (isIssued ? " Not Available" : "Available") << endl; 
    }

    int getbookId(){
        return this->bookId;
    }
    int getbookstatus(){
        return this->isIssued;
    }
    
};

class issuebook : public Book
{   protected:
    string name,date;
    public:
    issuebook(){
        this->name="";
        this->date="";
    }
    void issuedbook(string name,string date){
        this->name="name";
        this->date="date";
        this->isIssued=true;
        cout <<"Book Successfully Issued:" << endl;

    }
    void returnbook(){
        this->isIssued=false;
        cout << "book successsfully returned:" << endl;
    }
};

int main()
{
    int choice, slot = 0;
    issuebook library[5];

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
            for(int i = 0;i < slot ; i++){
            library[i].viewBook();
            };
            break;
           
        }
        case 3:
        {   
            int bookId;
            bool flag;
            string name,date;
            cout <<"Enter Book id of the book you want to issue:";
            cin >>bookId;

            for(int i = 0; i < slot ; i++){
                if(bookId == library[i].getbookId()){
                    flag = true;
                    cin.ignore();
                    
                    if( library[i].getbookstatus() == false){
                    cout <<"Enter The Name:";
                    getline(cin,name);
                    cout <<"Enter The Date:";
                    getline(cin,date);
                    library[i].issuedbook(name,date);


                    }
                    else{
                        cout <<"oops,Book is Not Available" << endl;
                    }
                };

                if(flag =false){
                    cout <<"Enter proper Book id:" << endl;
                }
            }

            break;
        }
        case 4:
        {
            int bookid;
            cout <<"Enter book id ";
            cin >> bookid;
            bool flag;

            for(int i = 0;i < slot ; i ++){
                bool flag= true;
                if(bookid == library[i].getbookId()){
                    if(library[i].getbookstatus() == true){
                        library[i].returnbook();

                    }
                    else {
                        cout <<"its not issued:" << endl;
                    }

                }

            }
            if(flag = false){
                cout <<"enter proper book id :" << endl;
            }

            break;
        }
        case 0:
        {
            cout <<"visit again thanks:" << endl;
            break;
        }

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}