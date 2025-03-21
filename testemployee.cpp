#include <iostream>
#include <limits>
#include "employee.h"

int main()
{

    std::cout << "Enter details for Employee 1:\n";
    int id1, yearHired1, areaCode1;
    double salary1;
    std::string fName1, lName1, dob1, address1, phoneNum1;

    std::cout << "Employee ID: ";
    std::cin >> id1;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "First Name: ";
    std::getline(std::cin, fName1);

    std::cout << "Last Name: ";
    std::getline(std::cin, lName1);

    std::cout << "Date of Birth: ";
    std::getline(std::cin, dob1);

    std::cout << "Address: ";
    std::getline(std::cin, address1);

    std::cout << "Year Hired: ";
    std::cin >> yearHired1;

    std::cout << "Salary: ";
    std::cin >> salary1;

    std::cout << "Telephone Area Code: ";
    std::cin >> areaCode1;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "7-digit Telephone Number: ";
    std::getline(std::cin, phoneNum1);


    Employee emp1(id1, fName1, lName1, dob1, address1, yearHired1, salary1, areaCode1, phoneNum1);


    std::cout << "\nEnter details for Employee 2:\n";
    int id2, yearHired2, areaCode2;
    double salary2;
    std::string fName2, lName2, dob2, address2, phoneNum2;

    std::cout << "Employee ID: ";
    std::cin >> id2;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "First Name: ";
    std::getline(std::cin, fName2);

    std::cout << "Last Name: ";
    std::getline(std::cin, lName2);

    std::cout << "Date of Birth: ";
    std::getline(std::cin, dob2);

    std::cout << "Address: ";
    std::getline(std::cin, address2);

    std::cout << "Year Hired: ";
    std::cin >> yearHired2;

    std::cout << "Salary: ";
    std::cin >> salary2;

    std::cout << "Telephone Area Code: ";
    std::cin >> areaCode2;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "7-digit Telephone Number: ";
    std::getline(std::cin, phoneNum2);


    Employee emp2(id2, fName2, lName2, dob2, address2, yearHired2, salary2, areaCode2, phoneNum2);


    std::cout << "\n== Testing Employee 1 ==\n";
    std::cout << "Employee ID: " << emp1.getEmployeeId() << '\n';
    std::cout << "Name: " << emp1.getFullName() << '\n';
    std::cout << "Date of Birth: " << emp1.getDateOfBirth() << '\n';
    std::cout << "Year Hired: " << emp1.getYearHired() << '\n';
    std::cout << "Salary: " << emp1.getSalary() << '\n';
    std::cout << "Address: " << emp1.getAddress() << '\n';
    std::cout << "Telephone: " << emp1.getTelephoneNumber() << '\n';


    std::cout << "\nModifying Employee 1's details...\n";
    emp1.setFirstName("Alice");
    emp1.setSalary(99999.99);
    emp1.setAddress("Modified Address 123");
    emp1.setTelephoneNumber(999, "1234567");

    std::cout << "New Name: " << emp1.getFirstName() << " " << emp1.getLastName() << '\n';
    std::cout << "New Salary: " << emp1.getSalary() << '\n';
    std::cout << "New Address: " << emp1.getAddress() << '\n';
    std::cout << "New Telephone: " << emp1.getTelephoneNumber() << '\n';

    std::cout << "\n== Testing Employee 2 ==\n";
    std::cout << "Employee ID: " << emp2.getEmployeeId() << '\n';
    std::cout << "Name: " << emp2.getFullName() << '\n';
    std::cout << "Date of Birth: " << emp2.getDateOfBirth() << '\n';
    std::cout << "Year Hired: " << emp2.getYearHired() << '\n';
    std::cout << "Salary: " << emp2.getSalary() << '\n';
    std::cout << "Address: " << emp2.getAddress() << '\n';
    std::cout << "Telephone: " << emp2.getTelephoneNumber() << '\n';


    std::cout << "\n== Comparison Results ==\n";
    std::cout << "Do they have the same last name? "
              << (emp1.sameLastName(emp2) ? "Yes" : "No") << '\n';
    std::cout << "Do they have the same salary or were hired in the same year? "
              << (emp1.sameSalaryOrYearHired(emp2) ? "Yes" : "No") << '\n';

    return 0;
}
