#include <iostream>
using namespace std;

int main() {
    unsigned int sum = 0, count;

    for (count = 1; count <= 99; count += 2) {
        sum += count;
    }

    cout << "Sum of odd integers between 1 and 99 is: " << sum << endl;
    return 0;
}
Output:
Sum of odd integers between 1 and 99 is: 2500
