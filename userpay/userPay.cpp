//This program calculates the user's pay.
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    
    //Get the number of hours worked.
    cout <<"How many hours did you work?";
    cin >> hours;
    
    //Get the hourly pay rate.
    cout << "How much did you get pay for hour?";
    cin >> rate;
    
    //Calculate.
    pay = hours * rate;
    
    //Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}
