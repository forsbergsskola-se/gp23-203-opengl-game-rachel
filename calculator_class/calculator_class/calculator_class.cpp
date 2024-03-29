#include <iostream>

using namespace std; 

class Calculator {
private: 
    double number; // declare double 
    char operation; // for using +,-,* and / 


public:
    // Initializing number to 0
    // default operation to be addition
    Calculator() : number(0),operation('+'){}

    // Method to set the current number 
    void set_number(double numero) {
        number = numero;
    }

    // Method for clear calculator
    // (clear the current number calculator has)
    void clear() {
        number = 0; 
    }

    // Method that get a number(maybe float) 
    double get_number() {
        return number;
    }

    // check for valid operation 
    void set_operation(char operation) {
        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            operation = operation;
        }
        else
        {
            cout << "Error" << endl;// print error in console 
        }
    }

    // method to do an operation after current operation 
    void perform_operation(double numero) {
        if (operation == '+') {
            number += numero;
        }
        else if (operation == '-') {
            number -= numero;
        }
        else if (operation == '*') {
            number *= numero;
        }
        else if (operation == '/') {
            if (numero != 0)
                number /= numero;
            else
                cout << "Error" << endl;
        }
    }
};

int main()
{
    Calculator calculator; 
    calculator.set_number(5);
    calculator.set_operation('+');
    calculator.perform_operation(3);
    cout << calculator.get_number() << endl; 
    calculator.clear();
    calculator.set_number(2);
    calculator.set_operation('*');
    calculator.perform_operation(3);
    calculator.set_operation('-');
    calculator.perform_operation(1);
    cout << calculator.get_number() << endl;

    return 0;

}

// After writing pseudocode in main I got many errors -> 
// these errors are because I do not have a member in 
// calculator class that presents in main so I need to include 
// them in the class as well.

