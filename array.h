#ifndef ARRAY_H
#define ARRAY_H

#define SIZE 10

void displayArray(int *array);

int findMaximumValue(int *array);

int findMinimumValue(int *array);

float calculateAverage(int *array);

void enterDataIntoArray(int *array);

void displayResults(int max, float average);

int saveArrayToFile(int *array);

int loadArrayFromFile(int *array);

#endif //ARRAY_H
