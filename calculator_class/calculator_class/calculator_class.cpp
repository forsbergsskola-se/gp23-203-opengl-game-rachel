#include <iostream>

using namespace std; 

class Calculator {
private: 



public:
    // Method for clear calculator
    // (clear the current number calculator has)
    void clear() {

    }


};

int main()
{
    Calculator calculator; 
    calculator.set_number(5);
    calculator.set_operation('+');
    calculator.perform_operation(3);
    cout << calculator.get_number() << endl; 
    calculator.Clear();
    calculator.set_number(2);
    calculator.set_operation('*');
    calculator.perform_operation(3);
    calculator.set_operation('-');
    calculator.perform_operation(1);
    cout << calculator.get_number() << endl;

    return 0;

}
