#include <iostream>
int main()
{
    int atm_pin, correct_pin, total_balance, op;
    int entered_amount;
    total_balance = 10000;
    correct_pin = 2345;
    std::cout << "*******************************************************************" << std::endl;
    std::cout << "WELCOME TO ATM" << std::endl;
    std::cout << "enter your atm pin" << std::endl;
    std::cin >> atm_pin;
    if (atm_pin == correct_pin)
    {
        std::cout << "choose your option" << std::endl
                  << "1-check account balance" << std::endl
                  << "2-widthdral" << std::endl
                  << "3-credit amount" << std::endl
                  << "4-exit" << std::endl;
        std::cin >> op;
        switch (op)
        {
        case 1:
            std::cout << "your total available account balance is : " << total_balance << std::endl;
            break;
        case 2:
        {
            std::cout << "enter amount to be widthdrawed :";
            std::cin >> entered_amount;
            if (entered_amount > total_balance)
            {
                std::cout << "requested amount is not available in your account" << std::endl;
            }
            else {
                total_balance = total_balance-entered_amount;
                std::cout<<"amount of "<< entered_amount  <<"is widthdrawed successfully. your remaining balance is " << total_balance << std::endl;
            }
        }
        break;
        case 3:{
            std::cout<<"enter amount to be credited into your account: ";
            std::cin>>entered_amount;
            total_balance = total_balance + entered_amount;
            std::cout<< "amount of "<< entered_amount << "is successfully credited. your total balance is: "<<total_balance << std::endl;
        }
        break;
        case 4: std::cout<<"you have exited successfully. THANK YOU" << std::endl;
              break;
        default : std::cout<<"invalid option" << std::endl;

        }
    }
    else
    {
        std::cout << "you have entered wrong pin. please try again later" << std::endl;
    }
    std :: cout<<"************************************************************************************";
    return 0;
}