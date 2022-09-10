#include <iostream>

using namespace std;

int Calc(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        cout << "Addition Result is : " << num1 + num2 << endl;
        break;;
    case '-':
        cout << "subtraction Result is : " << num1 - num2 << endl;
        break;
    case '/':
        cout << "Division Result is : " << num1 / num2 << endl;
        break;
    case '*':
        cout << "Multiplication Result is : " << num1 * num2 << endl;
        break;
    default:
        cout<<"Error....Please Enter Operation Parameter!!! ";
    }
}
int main()
{
    int number1;
    int number2;
    char operation;
    cout<<"Enter The First Number: ";
    cin>>number1;
    cout<<"\nEnter The Second Number: ";
    cin>>number2;
    cout<<"\nEnter The Mathematic Operation:";
    cin>>operation;

    Calc(number1,number2,operation);
    return 0;
}
