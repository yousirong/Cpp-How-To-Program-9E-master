/*
 * =====================================================================================
 *
 *       Filename:  GradeBook.cpp
 *
 *    Description:  Fig. 6.3: Member-function definitions for class GradeBook
 *                  that determines the maximum of three grades.
 *
 *        Version:  1.0
 *        Created:  11/04/16 10:22:45
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#include <iostream>

#include "GradeBook.hpp"

GradeBook::GradeBook(std::string name) {
    setCourseName(name);
    maximumGrade = 0;
}
// SETTERS
void GradeBook::setCourseName(std::string name) {
    if (name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0, 25);
        std::cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
                  << "Limiting courseName to first 25 characters.\n"
                  << std::endl;
    }
}
// GETTERS
std::string GradeBook::getCourseName() { return courseName; }
void GradeBook::displayMessage() {
    std::cout << "Welcome to the grade book for\n"
              << getCourseName() << "!\n"
              << std::endl;
}
// input three grades from user; determine maximum
void GradeBook::inputGrades() {
    int grade1;
    int grade2;
    int grade3;

    std::cout << "Enter three integer grades: ";
    std::cin >> grade1 >> grade2 >> grade3;

    maximumGrade = maximum(grade1, grade2, grade3);
}
// returns the maximum of its three integer parameters
int GradeBook::maximum(int x, int y, int z) {
    int maximumValue = x;

    if (y > maximumValue) maximumValue = y;

    if (z > maximumValue) maximumValue = z;

    return maximumValue;
}
void GradeBook::displayGradeReport() {
    std::cout << "Maximum of grades entered: " << maximumGrade << std::endl;
}
