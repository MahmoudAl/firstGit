#include <vector>
double calcAvg(std::vector <int> v) {
    int n = v.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    return (double)sum / n;
}