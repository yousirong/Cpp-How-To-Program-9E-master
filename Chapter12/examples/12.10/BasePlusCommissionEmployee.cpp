/*
 * =====================================================================================
 *
 *       Filename:  BasePlusCommissionEmployee.cpp
 *
 *    Description:  Fig. 12.11: Class BasePlusCommissionEmployee member-function
 *                  definitions
 *
 *        Version:  1.0
 *        Created:  18/07/16 18:48:15
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "BasePlusCommissionEmployee.hpp"

#include <iostream>

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const std::string& first, const std::string& last, const std::string& ssn,
    double sales, double rate, double salary)
    // explicitly call base class constructor
    : CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary);
}
// base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary >= 0.0f) {
        baseSalary = salary;
    } else {
        throw std::invalid_argument("Salary must be >= 0.0f");
    }
}
double BasePlusCommissionEmployee::getBaseSalary() const { return baseSalary; }
// earnings
double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (commissionRate * grossSales);
}
// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const {
    // derived class cannot access the base class's private data
    std::cout << "base-salaried commission employee: " << firstName << ' '
              << lastName
              << "\nsocial security number: " << socialSecurityNumber
              << "\ngross sales: " << grossSales
              << "\ncommission rate: " << commissionRate
              << "\nbase salary: " << baseSalary;
}
