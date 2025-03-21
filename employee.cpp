#include "employee.h"
#include <limits>


Employee::Employee()
    : employee_id(0), first_name(""), last_name(""), date_of_birth(""),
      address(""), year_hired(0), salary(0.0),
      area_code(0), phone_number("")
{
}


Employee::Employee(int id,
                   const std::string &fName,
                   const std::string &lName,
                   const std::string &dob,
                   const std::string &addr,
                   int hiredYear,
                   double sal,
                   int aCode,
                   const std::string &phoneNum)
    : employee_id(id), first_name(fName), last_name(lName), date_of_birth(dob),
      address(addr), year_hired(hiredYear), salary(sal),
      area_code(aCode), phone_number(phoneNum)
{
}


int Employee::getEmployeeId() const
{
    return employee_id;
}

std::string Employee::getFirstName() const
{
    return first_name;
}

std::string Employee::getLastName() const
{
    return last_name;
}

int Employee::getYearHired() const
{
    return year_hired;
}

std::string Employee::getFullName() const
{
    return first_name + " " + last_name;
}

std::string Employee::getDateOfBirth() const
{
    return date_of_birth;
}

double Employee::getSalary() const
{
    return salary;
}

std::string Employee::getAddress() const
{
    return address;
}

std::string Employee::getTelephoneNumber() const
{

    return "(" + std::to_string(area_code) + ") " + phone_number;
}


void Employee::setFirstName(const std::string &fName)
{
    first_name = fName;
}

void Employee::setLastName(const std::string &lName)
{
    last_name = lName;
}

void Employee::setDateOfBirth(const std::string &dob)
{
    date_of_birth = dob;
}

void Employee::setSalary(double sal)
{
    salary = sal;
}

void Employee::setAddress(const std::string &addr)
{
    address = addr;
}

void Employee::setTelephoneNumber(int aCode, const std::string &phoneNum)
{
    area_code = aCode;
    phone_number = phoneNum;
}


bool Employee::sameLastName(const Employee &other) const
{
    return (this->last_name == other.last_name);
}

bool Employee::sameSalaryOrYearHired(const Employee &other) const
{
    return (this->salary == other.salary || this->year_hired == other.year_hired);
}
