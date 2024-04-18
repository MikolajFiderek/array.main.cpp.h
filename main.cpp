#include <iostream>
#include "array,h.h"

void menu(void) {
    printf("1. Enter the values into the array\n");
    printf("2. Display the content of the array\n");
    printf("3. Determine the minimum value\n");
    printf("4. Determine the maximum value\n");
    printf("5. Determine the average value\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, 50, -5, 6, 7, 8, 9, 10,};
    printf("Simple array \n");

    int option = 0;

    do{
        menu();

        scanf( "%d" , &option);

        switch (option) {
            case 0:
                break;

            case 1:
                enterDataIntoArray(array);
                break;

            case 2:
                displayArray(array);
                break;

            case 3:
                printf("Maximum value = %d\n\n" , findMaximumValue(array));
                break;

            case 4:
                printf("Minimum value = %d\n\n" , findMinimumValue(array));
                break;

            case 5:
                printf("Average value = %f\n\n" , calculateAverage(array));
                break;

            default:
                printf("Select an option:\n\n");
                break;
        }



    } while(option!=0);
    printf("THE END\n");




//    enterDataIntoArray(array);
//    //display array
//    displayArray(array);
//
//    //find maximum value
//    int max=findMaximumValue(array);
//    printf("Maximum value = %d \n", max);
//
//    //find minimum value
//    int min=findMinimumValue(array);
//    printf("Minimum value = %d \n", min);
//
//    //calculate average
//    float average=calculateAverage(array);
//    printf("Average value = %f \n", average);

    return 0;
}
