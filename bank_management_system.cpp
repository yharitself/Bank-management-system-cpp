#include <iostream>
#include <cmath>
using namespace std;

class Bank
{
protected:
    float amount;
    float with;

public:
    void withdrawal()
    {
        cout << "your this month withdrawal amount is " << with << endl;
    }
    void setdata(float b, float c)
    {
        amount = b;
        with = c;
    }
    void displaybal()
    {
        cout << "your balance is" << amount << endl;
        
    }
};
class loan_department : public Bank
{
public:
    void check_loan_offer(void)
    {
        float x = with + amount;

        if (x < 150000)
        {
            cout << "sorry you are not eligible for loan purpose" << endl;
        }
        else
        {
            cout << "congratulations! you are eligible" << endl;
        }
    }
};
class fd_department : public loan_department
{
public:
    void calculate_fd_amount(void)
    {
        float y = (float)amount * pow(1.1f, 10);
        cout << "your amount after 10 years in fd will be" << y << endl;
    }
};
int main()
{
    int a;
    fd_department fdobj;
    fdobj.setdata(2100, 3000);
    do{
        cout<<"          BANK MENU         "<<endl;
    cout << "enter an option to choose" << endl;
    cout << "1.check balance" << endl;
    cout << "2.check withdrawal amount" << endl;
    cout << "3.interested in checking loan offer" << endl;
    cout << "4.want to apply for 'fd' with interest rate of 10%per annum" << endl;
    cout << "5.exit" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        fdobj.displaybal();
        break;
    case 2:
        fdobj.withdrawal();
        break;
    case 3:
        fdobj.check_loan_offer();
        break;

    case 4:
        fdobj.calculate_fd_amount();
        break;

    case 5:
        cout << "thank you! visit again";
        return 0;
    }
       }  while(a!=5);
     

    return 0;
}

