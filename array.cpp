#include <iostream>
#include "array.h"

void displayArray(int *array) {
    for (int i = 0; i < SIZE; i++) {
        printf("array[%d]= %d \n", i, *(array + i));
    }
}

int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 1; i < SIZE; i++) {
        if (max < *(array + i)) {
            max = *(array + i);
        }
    }
    return max;
}

int findMinimumValue(int *array) {
    int min = *array;
    for (int i = 1; i < SIZE; i++) {
        if (min > *(array + i)) {
            min = *(array + i);
        }
    }
    return min;
}

float calculateAverage(int *array) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(array + i);
    }
    float average = (float) sum / SIZE;
    return average;
}

void enterDataIntoArray(int *array) {
    printf("Enter data into array \n");
    for (int i = 0; i < SIZE; i++) {
        printf("array[%d]= ", i);
        scanf("%d", array + i);
    }
}

void displayResults(int max, float average) {
    printf("Maximum value: %d\n", max);
    printf("Average value: %f\n", average);
}
int saveArrayToFile(int *array) {
    FILE *file;
    file = fopen("array.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1;
    }

    for (int i = 0; i < SIZE; ++i) {
        fprintf(file, "%d ", array[i]);
    }

    fclose(file);
    printf("Array saved to file successfully.\n");
    return 0;
}
int loadArrayFromFile(int *array) {
    FILE *file;
    file = fopen("array.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return -1;
    }

    for (int i = 0; i < SIZE; ++i) {
        if (fscanf(file, "%d", &array[i]) != 1) {
            printf("Error reading from file.\n");
            fclose(file);
            return -1;
        }
    }

    fclose(file);
    printf("Array loaded from file successfully.\n");
    return 0;
}
