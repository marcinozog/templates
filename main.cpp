#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// T - typ zwracany
// U - typ przekazanego parametru
template <typename T, typename U>
T conversion(U u){
    T ret = u;
    return ret;
}

int main()
{
    cout << setprecision(20);

    double PI = 3.14159265358979323846;
    cout << "PI: " << PI << endl;

    cout << "1: " << conversion<float>(PI) << endl;
    cout << "2: " << conversion<float, float>(PI) << endl;
    cout << "3: " << conversion<float, int>(PI) << endl;
    cout << "4: " << conversion<int, float>(PI) << endl;

    cout << "5: " << conversion<double>(PI) << endl;
    cout << "6: " << conversion<double, float>(PI) << endl;
    cout << "7: " << conversion<float, double>(PI) << endl;

    cout << "8: " << conversion<short>(PI) << endl;
    cout << "9: " << conversion<long>(PI) << endl;

    return 0;
}
