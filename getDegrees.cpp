#include <iostream>
#include <vector>

std::vector <int> getDegrees() {
    int n;
    std::cin >> n;
    std::vector <int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    return v;
}