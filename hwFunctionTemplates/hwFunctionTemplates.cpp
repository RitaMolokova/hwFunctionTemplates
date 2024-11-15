#include<iostream>
using namespace std;

template <typename T>
void max1(T mass[], int size) {
    T maxx = mass[0];
    for (int i = 1; i < size; ++i) {
        if (mass[i] > maxx) {
            maxx = mass[i];
        }
    }
    cout << "Max 1arr: " << maxx << endl;
}
template <typename T, int c>
void max2(T mass[][c], int r, int c) {
    T maxx = mass[0][0];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mass[i][j] > maxx) {
                maxx = mass[i][j];
            }
        }
    }
    cout << "Max 2arr: " << maxx << endl;
}

int main() {
    int arr1[] = { 1, 5, 3, 9, 2 };
    max1(arr1, 5);
    int arr2[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    max2(arr2, 3, 3);

    return 0;
}

