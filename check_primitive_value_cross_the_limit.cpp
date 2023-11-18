/*
Write a C++ program that checks whether primitive values cross the limit.
*/

#include <iostream>

using namespace std;

int main() {
    char gender = 'F';
    bool married = true;
    int sons = 2;
    int year = 2009;
    int salary_year = 1500000;
    float height = 79.48;
    float gpa = 4.69;
    int salary = 12047235;
    int balance = 995324987;

    cout << "The Gender is : " << gender << endl;
    cout << "Is she married? : " << married << endl;
    cout << "Number of sons she has : " << sons << endl;
    cout << "Year of her appointment : " << year << endl;
    cout << "Salary for a year : " << salary_year << endl;
    cout << "Height is : " << height << endl;
    cout << "GPA is " << gpa << endl;
    cout << "Salary drawn upto : " << salary << endl;
    cout << "Balance till : " << balance << endl;
    
    return 0;
}

