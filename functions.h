#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <vector>
#include <cmath>

using namespace std;


double sum(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = vec[0];
    for (int i = 1; i != s; i++) {
        total += vec[i];
    }
    return total;
}

double diff(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = vec[0];
    for (int i = 1; i != s; i++) {
        total -= vec[i];
    }
    return total;
}

double mult(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = vec[0];
    for (int i = 1; i != s; i++) {
        total *= vec[i];
    }
    return total;
}

double div(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = vec[0];
    for (int i = 1; i != s; i++) {
        total /= vec[i];
    }
    return total;
}

double mod(vector<double> vec) {
    vector<double>::size_type s = vec.size();
    double total = vec[0];
    for (int i = 1; i != s; i++) {
        total = total % vec[i];
    }
    return total;
}
#endif // FUNCTIONS_H_INCLUDED
