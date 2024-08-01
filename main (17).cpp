#include <iostream>

using namespace std;

int main() {
double savings = 1000;
char repeat = 'n';
int option;
double transaction;
//bool ValidInput = false;
double lastfive [5] = {0,0,0,0,0};
  int count = 0;

do{
  
cout << "1. Check Balance: \n" << "2. Deposit Money: \n" << "3. Withdraw Money:" << endl << "4. View Last 5 Transactions: \n" << "5. Exit. \n";

cout << "Enter your option: ";

cin >> option;

if (1 <= option && option <=5){
  
switch (option){
  case 1:
    cout << savings << endl;
    lastfive[count];
      break;
 
  case 2:
    cout << "How much would you like to deposit?: " << endl;
    cin >> transaction;
    savings = savings + transaction;
    cout << "The amount of money in your account is: " << savings << " dollars. \n";
    lastfive[count];
     break;
  
  case 3:
    cout << "How much would you like to withdraw?" << endl;
    cin >> transaction;
    savings = savings - transaction;
    cout << savings;
    break;

  case 4: 
    cout << "Your last 5 transactions were: ";
  
  case 5:
    cout << "Thank you for using our services! Have a not-so-bad day :) " << endl;
    break;

  default: 
    cout << "Invalid Input. Please try again." << endl;
      } 
}else{
  cout << "Invalid input, enter smth else stupid" << endl;
}
}while (repeat == 'y');
// end of if statement


  
return 0;
}