#include <iostream>
using namespace std;

// O(1) example
int constantTimeExample(int arr[]) {
    return arr[0];
}

// O(n) example
int linearTimeExample(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total++;
    }
    return total;
}

// O(n^2) example
int quadraticTimeExample(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            total++;
        }
    }
    return total;
}

int main() {
    int sizes[] = {100, 200, 400, 800, 1600};

    cout << "Size\tO(1) Ops\tO(n) Ops\tO(n^2) Ops\n";

    for (int k = 0; k < 5; k++) {
        int size = sizes[k];
        int arr[size];
        for (int i = 0; i < size; i++) arr[i] = i;

        int o1_ops = constantTimeExample(arr);
        int oN_ops = linearTimeExample(arr, size);
        int oN2_ops = quadraticTimeExample(arr, size);

        cout << size << "\t"
             << o1_ops << "\t\t"
             << oN_ops << "\t\t"
             << oN2_ops << "\n";
    }

    return 0;
}

/*OUTPUT
Size    O(1) Ops        O(n) Ops        O(n^2) Ops
100     0               100             10000
200     0               200             40000
400     0               400             160000
800     0               800             640000
1600    0               1600            2560000
*/
