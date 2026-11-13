#include <iostream>
using namespace std;

void merge(int values[], int temporary[], int left, int middle, int right) {
    int first = left;
    int second = middle + 1;
    int output = left;

    while (first <= middle && second <= right) {
        temporary[output++] =
            (values[first] <= values[second]) ? values[first++] : values[second++];
    }
    while (first <= middle) {
        temporary[output++] = values[first++];
    }
    while (second <= right) {
        temporary[output++] = values[second++];
    }
    for (int i = left; i <= right; ++i) {
        values[i] = temporary[i];
    }
}

void mergeSort(int values[], int temporary[], int left, int right) {
    if (left >= right) {
        return;
    }
    int middle = left + (right - left) / 2;
    mergeSort(values, temporary, left, middle);
    mergeSort(values, temporary, middle + 1, right);
    merge(values, temporary, left, middle, right);
}

int main() {
    int values[] = {38, 27, 43, 3, 9, 82, 10};
    const int size = sizeof(values) / sizeof(values[0]);
    int temporary[size];

    mergeSort(values, temporary, 0, size - 1);
    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}
