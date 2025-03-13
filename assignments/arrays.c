#include <stdio.h>

int main() {
    // int myArray[] = {1,2,3,4,5};
    //
    // printf("%d\n", myArray[1]);
    //
    // myArray[1] = 6;
    //
    // printf("%d\n", myArray[1]);
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", myArray[i]);
    // }
    //
    // printf("%lu\n", sizeof(myArray));
    //
    // int length = sizeof(myArray) / sizeof(myArray[0]);
    // printf("%lu\n", length);

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int sum = 0;
    float avg;

    int length = sizeof (ages) / sizeof(ages[0]);

    for (int i = 0; i< length; i++) {
//      sum = sum + ages[i];
     sum+= ages[i];
    }
    avg = sum / length;

    printf("%d\n", sum);
    printf("%d\n", length);

    printf("The average number is: %.2f\n", avg);

    return 0;
}