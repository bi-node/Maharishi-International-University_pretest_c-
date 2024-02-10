#include <iostream>
#include <vector>

std::vector<int> isRound(std::vector<int> a, int n) {
    int low = 0, j = 0;
    int high = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1 && n > 2) {
            a[i] = 0;
        } else if (a[i] == 1 && n == 2) {
            a[i] = 2;
        } else {
            j = a[i] / n;
            low = j * n;
            high = (j + 1) * n;
            if ((high - a[i]) == (a[i] - low)) {
                a[i] = high;
            } else if ((high - a[i]) > (a[i] - low)) {
                a[i] = low;
            } else if ((high - a[i]) < (a[i] - low)) {
                a[i] = high;
            }
        }
    }
    return a;
}

int main() {
    std::vector<int> arr = isRound({1, 2, 3, 4, 5}, 2);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
