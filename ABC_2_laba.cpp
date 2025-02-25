#include <iostream>
#include <limits> 
using namespace std;
float findMax(const float arr[], int size) {
    float maxVal = numeric_limits<float>::lowest();
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }}
    return maxVal;
}
int main() {
    setlocale(LC_ALL, "Russian");
    float numbers[] = { 3.14f, -2.71f, 1.618f, 0.0f, -1.0f, 2.718f };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float maxNumber = findMax(numbers, size);
    cout << "Максимальное значение в массиве: " << maxNumber;
    return 0;
}
