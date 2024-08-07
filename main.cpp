#include <vector>
using namespace std;
void printResults(vector <int> v, double avg);
vector <int> getDegrees();
double calcAvg(vector <int> v);
int main() {
    vector <int> v = getDegrees();
    printResults(v, calcAvg(v));
    return 0;
}