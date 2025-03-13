#include <stdio.h>

int main () {
  /*
    Write a C program to print numbers from 0 to 10 and 10 to 0
    using two while loops.
   */
int i = 0;

while (i < 10) {
  if (i == 6) {
    printf("It is 6 this time.\n");
    break;
  } else {
    printf("The value of i is: %d\n", i);
    i++;
  }
}
//
//int a = 0;
//
//do {
//  printf("%d\n", a);
//  a++;
//}
//while (a < 5);



//  for (int i = 0; i <= 10; i+=2) {
//    printf("The value of i is %d\n", i);
//  }


  return 0;
}