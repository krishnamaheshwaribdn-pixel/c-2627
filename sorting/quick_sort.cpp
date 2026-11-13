#include <iostream>
using namespace std;

int partition(int values[], int low, int high) {
    int pivot = values[high];
    int smallerEnd = low - 1;

    for (int current = low; current < high; ++current) {
        if (values[current] <= pivot) {
            ++smallerEnd;
            int temporary = values[smallerEnd];
            values[smallerEnd] = values[current];
            values[current] = temporary;
        }
    }
    int temporary = values[smallerEnd + 1];
    values[smallerEnd + 1] = values[high];
    values[high] = temporary;
    return smallerEnd + 1;
}

void quickSort(int values[], int low, int high) {
    if (low >= high) {
        return;
    }
    int pivotIndex = partition(values, low, high);
    quickSort(values, low, pivotIndex - 1);
    quickSort(values, pivotIndex + 1, high);
}

int main() {
    int values[] = {10, 7, 8, 9, 1, 5};
    const int size = sizeof(values) / sizeof(values[0]);

    quickSort(values, 0, size - 1);
    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}
