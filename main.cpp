#include <iostream>
#include "functions.h"

int main()
{
    vector<double> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    cout << sum(vec) << mult(vec) << endl;
    return 0;
}
