#include <iostream>
#include <vector>
#include <assert.h>

std::vector <int> getDegrees() {
    int n;
    std::cin >> n;
    assert(n > 0);
    std::vector <int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
        assert(0 <= v[i] && v[i] <= 100);
    }
    return v;
}