#include <iostream>
using namespace std;

int main() {
    double num = 333.546372;

    cout << left << setw(15) << fixed << setprecision(1) << num
         << left << setw(15) << fixed << setprecision(2) << num
         << left << setw(15) << fixed << setprecision(3) << num;

    return 0;
}
Output:
333.5          333.55         333.546


