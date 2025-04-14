#include <iostream>
#include <string>

using namespace std;

class Bank
{
private:
    int balance;

public:
    string name;
    long int acno;
    string city;
    string ac_type;

    void setData(int balance, string name, long int acno, string city, string ac_type)
    {
        this->balance = balance;
        this->name = name;
        this->acno = acno;
        this->city = city;
        this->ac_type = ac_type;
    }

    void getData()
    {
        cout << "Name:" << this->name << endl;
        cout << "acno:" << this->acno << endl;
        cout << "Balance:" << this->balance << endl;
        cout << "City:" << this->city << endl;
        cout << "ac_type:" << this->ac_type << endl;
    }

    void Addbalance(int money)
    {
        this->balance = this->balance + money;
        cout << "New Balance is:" << this->balance << endl;
    }

    void Widthrawl(int money)
    {
        if (money > this->balance)
        {
            cout << "Not enogh Balance:";
        }
        else
        {
            this->balance = this->balance - money;
        }
        cout << "New Balance is:" << this->balance << endl;
    }

    void fd(int amount, int time)
    {
        if (amount > this->balance)
        {
            cout << "Amount you have selected is above the available balance." << endl;
        }
        else
        {
            float interestRate;
    
            // Determine interest rate based on time in months
            if (time < 6)
            {
                interestRate = 3.5;
            }
            else if (time >= 6 && time <= 9)
            {
                interestRate = 5.0;
            }
            else if (time > 9 && time <= 12)
            {
                interestRate = 7.0;
            }
            else // time > 12
            {
                interestRate = 8.5;
            }
    
            // Calculate interest
            float interest = (amount * interestRate * time) / (100.0 *12)  ; // Adjust for per month
            cout << "Interest Rate Applied: " << interestRate << "%" << endl;
            cout << "Your Interest is: " << interest << endl;
            cout << "New Balance After Interest: " << this->balance + interest << endl;
        }
        this->balance=this->balance-amount;
        cout <<"Available balance:"<<this->balance;
    }
    

    static string bankname;
};

string Bank :: bankname = "Hdfcbank";

int main()
{

    int choice2, in_acc;
    int balance;
    string name;
    long int acno;
    string city;
    string ac_type;
    int num, i, choice;
    cout << "Enter number of account you want to open:";
    cin >> num;

    Bank b[num];

    for (i = 0; i < num; i++)
    {

        cout << "Enter  " << i + 1 << "  Customer Data:" << endl;
        cin.ignore();

        cout << "Enter Account Holder Name" << endl;
        getline(cin, name);

        cout << "Enter bank acno" << endl;
        cin >> acno;

        cout << "Enter bank balance amount" << endl;
        cin >> balance;

        cout << "Enter city" << endl;
        cin >> city;

        cout << "Enter 1: For Savings Enter 2: For Current" << endl;
        cin >> choice;

        if (choice == 1)
        {
            ac_type = "Savings";
        }
        else if (choice == 2)
        {
            ac_type = "Current";
        }
        else
        {
            cout << "Invalid Choice Default to Savings Account:";
            ac_type = "Savings";
        }

        b[i].setData(balance, name, acno, city, ac_type);
    }

    for (i = 0; i < num; i++)
    {
        cout << "\n------------------------" << endl;
        b[i].getData();
        cout << "Bank Name:" << Bank::bankname << endl;
        cout << "------------------------" << endl;
    }

    do
    {
        cout << "Enter 1 to Add Money in Account:" << endl;
        cout << "Enter 2 to Withdraw Money From Account:" << endl;
        cout << "Enter 3 to Open FD:" << endl;
        cout << "Enter 4 to Show Updated Balance:" << endl;
        cout << "Enter 5 to Exit:" << endl;
        cin >> choice2;

        switch (choice2)
        {
            case 1:
            {
                int acc_no, money;
                cout << "Enter Account number in which you want to Add Money:";
                cin >> acc_no;
                cout << "Enter Amount:";
                cin >> money;
                for (int i = 0; i < num; i++)
                {
                    if (b[i].acno == acc_no)
                    {
                        b[i].Addbalance(money);
                    }
                    else{
                        cout <<"Please Enter correct Ac no:";
                        break;
                    }
                }
                break;
            }

            case 2:
            {
                int acc_no, money;
                cout << "Enter Account number From Which you want to Withdrwa Money";
                cin >> acc_no;
                cout << "Enter Amount";
                cin >> money;

                for (int i = 0; i < num; i++)
                {
                    if (b[i].acno == acc_no)
                    {
                        b[i].Widthrawl(money);
                    }
                    else{
                        cout <<"Please Enter proper A/c no:" << endl;
                        break;
                    }
                }
                break;
            }

            case 3:
            {
                int amount,time,acc_no;
                cout <<"Enter A/c no for FD Opening:" << endl;
                cin >>acc_no;
                cout <<"Enter Amount for which you want to make FD:";
                cin >>amount;
                cout <<"Enter Time For Which you want to make FD in Months:";
                cin >> time;
                for(int i = 0;i < num ; i++){
                    if(b[i].acno==acc_no){
                        b[i].fd(amount , time);
                    }
                    else{
                        cout <<"Please Enter proper A/c no:" << endl;
                        break;
                    }
                }
                
            }
            case 5:
                cout << "Visit Again" << endl;
                break;

            default:
                break;
        }

    } while (choice2 != 5);

    return 0;
}