/* Implement a class Employee with a virtual function CalculateSalary() that returns the salary of the employee.
Create two derived classes HourlyEmployee and SalariesEmployee.
Override the CalculateSalary function in both derived classes to calculate the salary of an hourly employee and a salaried employee resp.
Write a program that creates objects of both derived classes and calls the CalculateSalary() for each.*/
#include <iostream>
using namespace std;

// Base class Employee
class Employee
{
public:
    virtual double CalculateSalary() const = 0; // Pure virtual function

    // Other common member functions for Employee can be added here
};

// Derived class HourlyEmployee
class HourlyEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    HourlyEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    // Override CalculateSalary for HourlyEmployee
    double CalculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

// Derived class SalariedEmployee
class SalariedEmployee : public Employee
{
private:
    double monthlySalary;

public:
    SalariedEmployee(double salary) : monthlySalary(salary) {}

    // Override CalculateSalary for SalariedEmployee
    double CalculateSalary() const override
    {
        return monthlySalary;
    }
};

int main()
{
    // Creating objects of the derived classes
    HourlyEmployee hourlyEmp(15.0, 40);
    SalariedEmployee salariedEmp(3000.0);

    // Calling CalculateSalary for each object
    cout << "Hourly Employee Salary: $" << hourlyEmp.CalculateSalary() << endl;
    cout << "Salaried Employee Salary: $" << salariedEmp.CalculateSalary() << endl;

    return 0;
}
