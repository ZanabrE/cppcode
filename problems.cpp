//This program will implement all all of the problems.
//Functions will be used for each problem.
//Ernesto L Zanabria Saturday, April 9, 2022.

#include <iostream>
using namespace std;

void problem1(){
    //Creating variables to hold data.
    double SALES_TAX = 0.0625;
    double totalSALESTAX;
    int notePad = 10;
    int fileOrganizer = 15;
    int eraser = 3;
    int totalItems;
    int totalCost;

    //Calculations
    //Calculating the total cost of the items.
    totalItems = notePad + fileOrganizer + eraser;

    //Calculating the sales tax of the items.
    totalSALESTAX = totalItems * SALES_TAX;

    //Clacualting the final sales price.
    totalCost = totalItems + totalSALESTAX;

    //Displaying the head it of the problem 1.
    cout << "---------------------------------------------\n";
    cout << "       This is Problem 1 Function" << "\n";
    cout << "---------------------------------------------\n";

    //Displaying the cost of the items.
    cout << "The cost of the Notepad is: $" << notePad << "\n";
    cout << "The cost of the File Organizer is: $" << fileOrganizer << "\n";
    cout << "The cost of the eraser is: $" << eraser << "\n";
    cout << "---------------------------------------------\n";

    //Displaying the sales taxes.
    cout << "The total cost of the items are: $" << totalItems << "\n";
    cout << "The sales tax for these items are: $" << totalSALESTAX << "\n";
    cout << "The total cost of the items are: $" << totalCost << "\n";
    cout << "---------------------------------------------------------\n";

}

void problem2(){
    //NOTE: Get the users input first then the calculations, pattern must be follow.
    //Creating variables to hold data.
    int gallons;
    int miles;
    double MPG;

    //Displaying the head it of the problem 2.
    cout << "---------------------------------------------------------\n";
    cout << "       This is Problem 2 Function" << "\n";
    cout << "---------------------------------------------------------\n";

    //Getting the user input of gallons of gasoline that the car can hold.
    cout << "Please enter the gallons of gasoline that your car can hold: \n";
    cin >> gallons;

    //Getting the user input of the miles that will be used for the trip.
    cout << "Please enter the miles that will be use for the trip: \n";
    cin >> miles;

    //Calculations miles per gallon.
    //In this code I am using static_cast to convert int miles to double.
    MPG =  static_cast<double>(miles) / gallons;

    //Displaying the MPG results.
    cout << "---------------------------------------------------------\n";
    cout << "You will be driving " << MPG << " miles per gallon.\n";
    cout << "---------------------------------------------------------\n";

}

void problem3(){
    //Variables to hold data.
    int product;
    int sales;
    double COMMISSION = 0.3;
    double product_Revenue;
    double total_Commission;
    double amount_Profit;

    //Displaying the head it of the problem 3.
    cout << "---------------------------------------------------------\n";
    cout << "       This is Problem 3 Function" << "\n";
    cout << "---------------------------------------------------------\n";

    //Getting the user input for the product cost and sold.
    cout << "The product cost: $";
    cin >> product; 
    cout << "The product amount sold is: ";
    cin >> sales;

    //Calculations for revenue, commission, and profit.
    product_Revenue = product + sales;
    total_Commission = product_Revenue * COMMISSION;
    amount_Profit = product_Revenue - total_Commission;

    cout << "---------------------------------------------------------\n";
    //Display the financial table.
    cout << "The total revenue made from the sale of your product is: $" << product_Revenue << "\n";
    cout << "The amount of money Apple will collect from you in commissions is: $" << total_Commission << "\n";
    cout << "The amount of profit that you made is: $" << amount_Profit << "\n";
    cout << "---------------------------------------------------------\n";

}

void problem4(){
    //Variables to hold data.
    double oldCPU;
    double newCPU;
    double taskPerWeek;
    double taskTime = .17;
    double timeOldCPU;
    double timeNewCPU;
    double timeSaved;
    double timeYear;

    //Displaying the head it of the problem 4.
    cout << "---------------------------------------------------------\n";
    cout << "       This is Problem 4 Function" << "\n";
    cout << "---------------------------------------------------------\n";

    //Getting the user input.
    cout << "Enter the time for the task to be complete on your old CPU: ";
    cin >> oldCPU;
    cout << "Enter the time for the task to be complete on you new CPU: ";
    cin >> newCPU;
    cout << "Enter the day of the the week that this task will be perform: ";
    cin >> taskPerWeek;

    //Calculations for the old CPU.
    timeOldCPU = oldCPU * 60;
    //Calculations for the new CPU.
    timeNewCPU = newCPU * 60;
    //Calculations for the time saved.
    timeSaved = (newCPU * 60) * taskTime;
    //Calculations for the week task.
    timeYear = (oldCPU - newCPU) * 60 * 52;

    cout << "---------------------------------------------------------\n";
    //Displaying the information.
    cout << "The amount of time saved each week using the new CPU: " << timeSaved << "\n";
    cout << "The total number of hours of CPU time using the old CPU: " << timeOldCPU << "\n";
    cout << "The total number of hours of CPU time using the new CPU: " << timeNewCPU << "\n";
    cout << "The difference in time between your old CPU and the new CPU for the year is: " << timeYear << "minutes\n";


}

int main(){
    problem1();
    problem2();
    problem3();
    problem4();

    return 0;
}