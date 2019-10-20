/*Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program
should take two operands from user and performs the operation on those two operands
depending upon the operator entered by user. Use a switch statement to select the operation.
Finally, display the result. Some sample interaction with the program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n  */

 #include <iostream>
using namespace std;
int main()
{
    char o,ch;
    float num1,num2;
    do
    {
    cout << "Enter operands , operator and operand: ";
    cin >> num1>>o>>num2;
    switch(o)
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
    cout<<"\n\n do you want to Continue?";
    cin>>ch;
    }while(ch!='n' && ch!='N');
    return 0;
}
