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
    cout << setprecision(10);

    cout << conversion<float>(M_PI) << endl;
    cout << conversion<float, float>(M_PI) << endl;
    cout << conversion<float, int>(M_PI) << endl;
    cout << conversion<int, float>(M_PI) << endl;

    cout << conversion<double>(M_PI) << endl;
    cout << conversion<double, float>(M_PI) << endl;
    cout << conversion<float, double>(M_PI) << endl;

    cout << conversion<short>(M_PI) << endl;
    cout << conversion<long>(M_PI) << endl;

    return 0;
}
