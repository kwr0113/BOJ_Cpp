#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

long long sum(std::vector<int> &a){
    long long sum = 0;
    vector<int>::iterator ptr;
    for (ptr = a.begin(); ptr != a.end(); ++ptr)
        sum += *ptr;
    return sum;
}