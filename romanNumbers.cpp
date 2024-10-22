//This program will convert Roman numbers.
#include <iostream>

using namespace std;

int main() {
    //Variables.
    int number;

    //Display the header and instructions for the user input.
    cout << "---------------------------------------------------------------------------\n";
    cout << "                         Roman Numeral Converter\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "Please enter a number between 1 to 10 to be converted to Roman number: \n";
    cin >> number;

    //If statement for input validation.
    if(number < 1 || number > 10){
        cout << "The number needs to be between 1 to 10\n";
        cout << "Please enter a number again: \n";
        cin >> number;
    }

    //Switch statement to display the Roman numeral.
    switch (number)
    {
        case 1:
            cout << "Number " << number << " and the Roman number is I.\n";
            break;
        
        case 2:
            cout << "Number " << number << " and the Roman number is II.\n";
            break;
        
        case 3:
            cout << "Number " << number << " and the Roman number is III.\n";
            break;
        
        case 4:
            cout << "Number " << number << " and the Roman number is IV.\n";
            break;
        
        case 5:
            cout << "Number " << number << " and the Roman number is V.\n";
            break;
        
        case 6:
            cout << "Number " << number << " and the Roman number is VI.\n";
            break;

        case 7:
            cout << "Number " << number << " and the Roman number is VII.\n";
            break;
        
        case 8:
            cout << "Number " << number << " and the Roman number is VIII.\n";
            break;

        case 9:
            cout << "Number " << number << " and the Roman number is IX.\n";
            break;
        
        case 10:
            cout << "Number " << number << " and the Roman number is X.\n";
            break;

        default:
            break;
    }

    return 0;
}