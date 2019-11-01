#include <iostream>
#include <iomanip>
using namespace std;
main() {
    cout << "Hello" << setw(10) << setfill(*) << "World";
}