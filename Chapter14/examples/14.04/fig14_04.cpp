/*
 * =====================================================================================
 *
 *       Filename:  fig14_04.cpp
 *
 *    Description:  Fig. 14.4: Stack Class template test program.
 *                  Function main uses a function template to manupulate objects
 *                  of type Stack<T>
 *
 *        Version:  1.0
 *        Created:  04/09/16 19:07:13
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include "Stack.hpp"

#include <iostream>
#include <string>

// function template to manipulate Stack<T>
template <typename T>
void testStack(Stack<T>& theStack,          // reference to Stack<T>
               T value,                     // initial value to push
               T increment,                 // increment for subsequent value
               const std::string stackName  // name of the Stack<T> object
               ) {
    std::cout << "\nPushing elements onto " << stackName << '\n';

    // push elements onto stack
    while (theStack.push(value)) {
        std::cout << value << ' ';
        value += increment;
    }

    std::cout << "\nStack is full. Cannot push " << value
              << "\n\nPopping elements from " << stackName << '\n';

    // pop elements from Stack
    while (theStack.pop(value)) std::cout << value << ' ';

    std::cout << "\nStack is empty. Cannot pop" << std::endl;
}

int main(int argc, const char* argv[]) {
    Stack<double> doubleStack(5);
    Stack<int> intStack;

    testStack(doubleStack, 1.1, 1.1, "doubleStack");
    testStack(intStack, 1, 2, "intStack");

    return 0;
}
