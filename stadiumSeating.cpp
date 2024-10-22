//This program will calculate beisball tickets sold.
//This program will use the fixed point notation
//and the header to use is #include <iomanip>.
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Variables to hold the data.
    const double classA = 15.00,
                 classB = 12.00,
                 classC = 9.00;

    int ticketSoldA,
        ticketSoldB,
        ticketSoldC;

    float totalTicketSoldA,
          totalTicketSoldB,
          totalTicketSoldC,
          totalIncome;

    cout << "-----------------------------------------------------------\n";
    cout << "             Stadium Seating Pricing Tickets\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Tickets for Class A cost $15\n";
    cout << "Tickets for Class B cost $12\n";
    cout << "Tickets for Class C cost $9\n";
    cout << "-----------------------------------------------------------\n";

    //Getting the user input for class a, b, and c.
    cout << "How many tickets would you like for class A?\n";
    cin >> ticketSoldA;
    cout << "how many tickets would you like for class B?\n";
    cin >> ticketSoldB;
    cout << "How many tickets would you like for class C?\n";
    cin >> ticketSoldC;

    //Calculations for class A.
    totalTicketSoldA = ticketSoldA * classA;
    //Calcualtions for class B.
    totalTicketSoldB = ticketSoldB * classB;
    //Calculations for class C.
    totalTicketSoldC = ticketSoldC * classC; 
    //Claculations for the income generate.
    totalIncome = totalTicketSoldA + totalTicketSoldB + totalTicketSoldC;

    //Displaying the information for the tickets sold.
    cout << "-----------------------------------------------------------\n";
    cout << setprecision(2) << fixed;
    cout << ticketSoldA << " tickets were sold for Class A at $";
    cout << setw(2) << classA;
    cout << " = $" << totalTicketSoldA << endl;
    cout << ticketSoldB << " tickets were sold for Class B at $";
    cout << setw(2) << classB;
    cout << " = $" << totalTicketSoldB << endl;
    cout << ticketSoldC << " tickets were sold for Class C at $";
    cout << setw(2) << classC;
    cout << " = $" << totalTicketSoldC << endl;
    cout << "-----------------------------------------------------------\n";
    cout << "The total amount of income generate is $" << totalIncome;

    return 0;
}