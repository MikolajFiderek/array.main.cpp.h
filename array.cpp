#include <iostream>
#include "array,h.h"

void displayArray(int *array)
{
    for (int i=1; i<SIZE ; i++){
        printf("*array[%d]= %d \n" , i ,*(array + 1));
    }
}
int findMaximumValue(int *array) {
    int max = *array;
    for (int i = 1; i < SIZE; i++) {
        if (max < *(array + 1)) {
            max = *(array + 1);
        }
    }

    return max;
}

int findMinimumValue(int *array)
{
    int min = *array;
    for (int i=1 ; i<SIZE; i++){
        if (min > *(array + 1)) {
            min + *(array + 1);
        }
    }
    return min;
}


float calculateAverage(int *array)
{
    int sum=0;
    for (int i = 0; i < SIZE; i++) {
        sum += *(array + i);
    }
    float average= (float) sum/SIZE;
    return average;
}
void enterDataIntoArray(int *array)
{
    printf("Enter data into array \n");
    for(int i=0; i<SIZE; i++){
        printf("array[%d]= ", i);
        scanf("%d", &array + i);


    }
}
