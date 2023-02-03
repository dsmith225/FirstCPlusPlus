#include <iostream>
#include <limits>

using namespace std;

void menu(){
  cout<<"Menu"<< endl;
  cout<<"Balance"<< endl;
  cout<<"Deposit"<< endl;
  cout<<"Withdraw"<< endl;
}


int main() {
  int option;
  double balance = 500;
  menu();
  cout<<"Option:";
  cin >> option;
  if (cin.fail() || option < 1 || option > 3) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input, please enter a number between 1 and 3." << endl;
    return 0;
  }
  switch(option){
    case 1: cout<<"Balance is: "<< balance << "$" << endl; break;   
    case 2: cout<<"Deposit amount" ;
    double depositAmount;
    cin >> depositAmount;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input, please enter a valid number." << endl;
      return 0;
    }
    balance += depositAmount; break;
    case 3: cout<<"Withdraw  amount" ;
    double withdrawAmount;
    cin >> withdrawAmount;
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input, please enter a valid number." << endl;
      return 0;
    }
    if(withdrawAmount<=balance)
      balance -= withdrawAmount;
    else
      cout <<"NO"<< endl;
      break;
  }
    
}
