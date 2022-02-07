#include <iostream>
#include <string>
#include <map>
#include <limits>
#include <stdlib.h>

    using namespace std;
map<int, double> accounts = {
    {1234567, 500.0},
    {1234568 , 500.0},
    {1234569 , 500.0},
    {12345670 , 500.0},
    {12345671 , 500.0},
    {12345672 , 500.0},
    {12345673 , 500.0},
    };

    int accountnumber;

    int currentAcc;

    int accountnumber2;

    int currentTransferAcc;

    bool valid = false; 




template<typename T>

int inputcheck(T input)
{
  while (true)
  {
cin >> input;

if(input == accountnumber || accountnumber2)
{
      for (auto i = accounts.begin(); i != accounts.end(); i++)
    {
       if (input == (*i).first)
        {
            valid = true;
            currentTransferAcc = input;

        }
        if (input == 0)
        {
            exit(0);
        }
    }
    if (input != accountnumber || accountnumber2)
    {
        if(!cin)
        {
      cout << "Wrong Input. Enter again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
        }
    }
    if (!(cin) || valid != true)
    {
      cout << "Wrong Input. Enter again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

}
    else break;
}
  }


int return_extra_variables()
{
    currentAcc = accountnumber;
    return currentAcc;
}


int return_extra_variables_for_transfer()
{
    currentTransferAcc = accountnumber2;
    return currentTransferAcc;
}



void menu()
{
    std::cout << "----------------Menu-----------------" << std::endl;
    std::cout << "1. Balance " << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Transfer money" << std::endl;
    std::cout << "5. Sign out" << std::endl;
    std::cout << "6. End" << std::endl;
}


    bool CheckTransferAccountValidation()
    {

    std::cout << "What is the number of the account you trying to transfer money? (Type 0 to stop)\n";

    int inputcheck(accountnumber2);

 for (auto i = accounts.begin(); i != accounts.end(); i++)
    {
       if (accountnumber2 == (*i).first)
        {
            valid = true;
            currentTransferAcc = accountnumber2;

        }
        if (accountnumber2 == 0)
        {
            exit(3);
        }
    }
        if (valid != true)
    {   
        system("CLS");

        std::cout << "The account's number is invalid.\n" << std::endl;
        
        std::cout << "Please try again.\n" << std::endl;

    CheckTransferAccountValidation();

    }
return_extra_variables_for_transfer();

    return valid;
    }


    bool CheckAccountValidation()
    {

    std::cout << "What is the account's number? (Type 0 to stop)\n";

    inputcheck(accountnumber);
 for (auto i = accounts.begin(); i != accounts.end(); i++)
    {
       if (accountnumber2 == (*i).first)
        {
            valid = true;
            currentTransferAcc = accountnumber2;

        }
        if (accountnumber2 == 0)
        {
            exit(3);
        }
    }
        if (valid != true)
    {   
        system("CLS");

        std::cout << "The account's number is invalid.\n" << std::endl;
        
        std::cout << "Please try again.\n" << std::endl;

    CheckTransferAccountValidation();
    }

    return_extra_variables();

    return valid;
    }
   

int work()
{
    int ammount;

     menu();

std::cout << "Choose your option:\n";

int option;

inputcheck(option);

system("cls");

switch (option) {

    case 1:
    std::cout << "Your balance is " << accounts[currentAcc] << "." << std::endl;
    break;

    case 2:
    std::cout << "How much money do you want to deposit?\n";
    inputcheck(ammount);
    accounts[currentAcc] = accounts[currentAcc] + ammount;
    std::cout << "Deposit done.\n" << std::endl;
    break;

    case 3:
    std::cout << "How much money you want to withdraw?\n";
   inputcheck(ammount);
    accounts[currentAcc] = accounts[currentAcc] - ammount;
    std::cout << "Withdraw done." << std::endl;
    break;

    case 4:
    CheckTransferAccountValidation();
    std::cout << "The account is valid." << "\n How much money do you wan to transfer?\n" << std::endl;
inputcheck(ammount);
    accounts[currentAcc] = accounts[currentAcc] - ammount;
    accounts[currentTransferAcc] = accounts[currentTransferAcc] + ammount;
    break;

    case 5:
    valid = false;
     CheckAccountValidation(); 
if(valid != true)
{
    return 0;
}
valid = false;
 std::cout << "Your account's number is valid.\n" << std::endl;
    break;

    case 6:
    return 0;

}
    work();
    return 0;
}


int main()
{
 
CheckAccountValidation();
if(valid != true)
{
    return 0;
}
valid = false;
 std::cout << "Your account's number is valid.\n" << std::endl;
 work();
 return 0;
}
    
    