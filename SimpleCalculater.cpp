#include<iostream>
using namespace std;
int main()
{
    int A,B,choice;
    cout << "Desired operations are:" << endl;
    cout<<endl;
    cout << "1.Addition:" << endl;
    cout << "2.Subtraction:" << endl;
    cout << "3.Multiplication:" << endl;
    cout << "4.Division:" << endl;
    cout<<endl;
    cout << "Enter two numbers :" << endl;
    cin >> A >> B;

    cout << "Enter choice number :" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Addition of two numbers is:" << A+B << endl;
        break;
    case 2:
        cout << "Subtraction of two numbers is :"<< A-B << endl;
        break;
    case 3:
        cout << "Multiplication of two numbers is :" << A*B << endl;
        break;
    case 4:
        cout << "Division of two numbers is :" << A/B << endl;
        break;
    default:
        cout << "Wrong choice! Please enter correct choice:" << endl;
        break;
    }
    return 0;
}