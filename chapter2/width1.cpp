//width1.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long pop1 = 4789426, pop2 = 274124, pop3 = 976;
    cout << setw(10) << "City " << setw(12) << "population"<< endl
    << setw(10) << "Moscow " << setw(12) << pop1 << endl
    << setw(10) << "Kirov " << setw(12) << pop2 << endl
    << setw(10) << "Ygrumovka " << setw(12) <<pop3 << endl;
    return 0;
}
