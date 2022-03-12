#include <iostream>

#include "BigNumber/bignumber.h"

using namespace std;

int main() {
   long long value1{9'223'372'036'854'775'807LL};

   cout << "long long value1: " << value1
        << "\nvalue1 - 1 = " << value1 - 1
        << "\nvalue1 + 1 = " << value1 + 1;

    BigNumber value2{value1};
    cout << "\n\nBigNumber value2: " << value2
         << "\nvalue2 - 1 = " << value2 - 1
         << "\nvalue2 + 1 = " << value2 + 1;

    long long value3{100'000'000};
    cout << "\n\nvalue3: " << value3;

    int counter{2};
    while (counter <= 5) {
        value3 *= 100'000'000;
        cout << "\nvalue3 to the power " << counter << ": " << value3;
        ++counter;
    }

    BigNumber value4{100'000'000};
    cout << "\n\nvalue4: " << value4 << endl;

    counter = 2;
    while (counter <= 5) {
        cout << "value4.pow(" << counter << "): "
             << value4.pow(counter) << endl;
        ++counter;
    }

    cout << endl;
}