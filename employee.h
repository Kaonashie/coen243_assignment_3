#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include <string>

class Employee
{
private:
    int employee_id;
    std::string first_name;
    std::string last_name;
    std::string date_of_birth;
    std::string address;
    int year_hired;
    double salary;
    int area_code;
    std::string phone_number;

public:

    Employee();


    Employee(int id,
             const std::string &fName,
             const std::string &lName,
             const std::string &dob,
             const std::string &addr,
             int hiredYear,
             double sal,
             int aCode,
             const std::string &phoneNum);


    int getEmployeeId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    int getYearHired() const;
    std::string getFullName() const;
    std::string getDateOfBirth() const;
    double getSalary() const;
    std::string getAddress() const;
    std::string getTelephoneNumber() const;


    void setFirstName(const std::string &fName);
    void setLastName(const std::string &lName);
    void setDateOfBirth(const std::string &dob);
    void setSalary(double sal);
    void setAddress(const std::string &addr);
    void setTelephoneNumber(int aCode, const std::string &phoneNum);


    bool sameLastName(const Employee &other) const;
    bool sameSalaryOrYearHired(const Employee &other) const;
};

#endif
