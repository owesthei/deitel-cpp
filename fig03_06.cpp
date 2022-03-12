// #include <format>
#include "fmt/format.h"

#include <iostream>

using namespace std;
using namespace fmt;

int main() {
    string student{"Paul"};
    int grade{87};

    cout << format("{}'s grade is {}", student, grade) << endl;
}