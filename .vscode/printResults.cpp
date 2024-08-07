#include <iostream>
#include <vector>
using namespace std;
void printResults(vector <int> v, double avg) {
    freopen("Results.txt", "w", stdout);
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ":\t" << v[i] << '\n';
    }
    cout << "AVG:\t" << avg << '\n';
}