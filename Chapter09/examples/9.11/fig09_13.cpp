/*
 * =====================================================================================
 *
 *       Filename:  fig09_13.cpp
 *
 *    Description:  Fig. 9.13: Demonstrating the order in which constructors and
 *                  destructors are called.
 *
 *        Version:  1.0
 *        Created:  08/06/16 14:59:57
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "CreateAndDestroy.hpp"

void create(void);                                  // prototype
CreateAndDestroy first(1, "(global before main)");  // global object

int main(int argc, const char *argv[]) {
    std::cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << std::endl;

    CreateAndDestroy second(2, "(local automatic in main)");
    static CreateAndDestroy third(3, "(local static in main)");

    create();  // call function to create objects

    std::cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << std::endl;
    CreateAndDestroy fourth(4, "(local automatic in main)");
    std::cout << "\nMAIN FUNCTION: EXECUTION ENDS" << std::endl;
    return 0;
}
// function to create objects
void create(void) {
    std::cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << std::endl;

    CreateAndDestroy fifth(5, "(local automatic in create)");
    static CreateAndDestroy sixth(6, ("local static in create"));
    CreateAndDestroy seventh(7, "(local automatic in create)");

    std::cout << "\nCREATE FUNCTION: EXECUTION ENDS" << std::endl;
}
