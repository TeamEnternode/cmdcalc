#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <vector>

using namespace std;


double sum(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = 0;
    for (int i = 0; i != s; i++) {
        total += vec[i];
    }
    return total;
}


#endif // FUNCTIONS_H_INCLUDED
