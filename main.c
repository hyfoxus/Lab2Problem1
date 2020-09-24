#include <stdio.h>

void createArray(int left, int length, float array[]) {

    for (int i = 0; i < length; ++i) {
        array[i] = left + i * 0.5;
    }
}

int main() {
    int a = 5;
    int b = 12;
    int length = (b - a) * 2 + 1;
    float array[length];
    createArray(a, length, array);
    for (int j = 0; j < length; ++j) { //Первая часть задачи
        printf("%.1f\n", array[j]);
    }
    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            printf("%.f ", array[i]);
            if (i % 6 == 4) {
                printf("\n");
            }
        }
    }