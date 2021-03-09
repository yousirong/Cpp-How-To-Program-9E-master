/*
 * =====================================================================================
 *
 *       Filename:  fig17_06.cpp
 *
 *    Description:  Fig. 17.06 - Reading and printing a sequential file
 *
 *        Version:  1.0
 *        Created:  21/12/16 17:03:18
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

void outputLine(int, const std::string, double);  // prototype

int main(int argc, const char* argv[]) {
    // ifstream constructor opens the file
    std::ifstream inClientFile("clients.txt", std::ios::in);

    // exit program if ifstream could not open file
    if (!inClientFile) {
        std::cerr << "File could not be opened" << std::endl;
        return 1;
    }

    int account;
    std::string name;
    double balance;

    std::cout << std::left << std::setw(10) << "Account" << std::setw(13)
              << "Name"
              << "Balance" << std::endl
              << std::fixed << std::showpoint;

    // display each record in file
    while (!inClientFile.eof()) {
        inClientFile >> account >> name >> balance;
        outputLine(account, name, balance);
    }

    return 0;
}
// display single record from file
void outputLine(int account, const std::string name, double balance) {
    std::cout << std::left << std::setw(10) << account << std::setw(13) << name
              << std::setw(7) << std::setprecision(2) << std::right << balance
              << std::endl;
}
