/*
 * =====================================================================================
 *
 *       Filename:  fig08_15.cpp
 *
 *    Description:  Fig. 8.15: Demonstrating the sizeof() operator
 *
 *        Version:  1.0
 *        Created:  05/05/16 16:53:22
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
    int array[20];
    int *ptr = array;

    std::cout << "sizeof c = " << sizeof c
              << "\tsizeof(char) = " << sizeof(char)
              << "\nsizeof s = " << sizeof s
              << "\tsizeof(short) = " << sizeof(short)
              << "\nsizeof i = " << sizeof i
              << "\tsizeof(int) = " << sizeof(int)
              << "\nsizeof l = " << sizeof l
              << "\tsizeof(long) = " << sizeof(long)
              << "\nsizeof f = " << sizeof f
              << "\tsizeof(float) = " << sizeof(float)
              << "\nsizeof d = " << sizeof d
              << "\tsizeof(double) = " << sizeof(double)
              << "\nsizeof ld = " << sizeof ld
              << "\tsizeof(long double) = " << sizeof(long double)
              << "\nsizeof array = " << sizeof array
              << "\nsizeof ptr = " << sizeof ptr << std::endl;

    return 0;
}
