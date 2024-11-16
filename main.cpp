#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename T, typename U>
T conversion(U u){
    T ret = u;
    return ret;
}

int main()
{
    cout << conversion<float>(M_PI) << endl;
    cout << conversion<float, int>(M_PI) << endl;
    cout << conversion<int, float>(M_PI) << endl;

    return 0;
}
