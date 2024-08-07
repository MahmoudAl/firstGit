#include <iostream>
#include <vector>
using namespace std;
void printResults(vector <int> v, double avg);
vector <int> getDegrees();
double calcAvg(vector <int> v);
int main() {
    vector <int> v = getDegrees();
    double avg = calcAvg(v);
    printResults(v, avg);
    if (avg < 0.2) {
        cout << "The average is too low :(";
    } else if (avg < 0.8) {
        cout << "The average is AVERAGE :)";
    } else {
        cout << "The average is creepy high :)";
    }
    return 0;
}