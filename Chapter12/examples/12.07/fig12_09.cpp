/*
 * =====================================================================================
 *
 *       Filename:  fig12_09.cpp
 *
 *    Description:  Fig. 12.9: Testing class BasePlusCommissionEmployee
 *
 *        Version:  1.0
 *        Created:  18/07/16 18:06:02
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "BasePlusCommissionEmployee.hpp"

#include <iomanip>
#include <iostream>

int main(int argc, const char *argv[]) {
    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000,
                                        .04, 300);

    // set floating-point output formatting
    std::cout << std::fixed << std::setprecision(2);

    // get commission employee data
    std::cout << "Employee information obtained by get functions:\n"
              << "\nFirst name is " << employee.getFirstName()
              << "\nLast name is " << employee.getLastName()
              << "\nSocial security number is "
              << employee.getSocialSecurityNumber() << "\nGross sales is "
              << employee.getGrossSales() << "\nCommission rate is "
              << employee.getCommissionRate() << "\nBase salary is "
              << employee.getBaseSalary() << std::endl;

    employee.setBaseSalary(1000);

    std::cout << "\nUpdated employee information output by print function:\n";
    employee.print();

    std::cout << "\n\nEmployee's earnings: $" << employee.earnings()
              << std::endl;
    return 0;
}
