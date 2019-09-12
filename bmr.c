/**
* Author: Andrew Anderson
* Date: 9/11/2019
* This program calculates someone's BMR
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv) {
  double weight, height, age;

  printf("Enter your weight in kilograms: ");
  scanf("%lf", &weight);
  printf("Enter your height in centimeters: ");
  scanf("%lf", &height);
  printf("Enter your age: ");
  scanf("%lf", &age);

  int choice;

  printf("Enter your sex: \n");
  printf("(1) Female\n");
  printf("(2) Male\n");
  scanf("%d", &choice);

  switch(choice){
    case 1:
      printf("Subject's BMR: %f kCal/day\n", 655.1 + (9.6 * weight) + (1.8 * height) - (4.7 * age));
      break;
    case 2:
      printf("Subject's BMR: %f kCal/day\n", 66.47 + (13.7 * weight) + (5 * height) - (6.8 * age));
      break;
  }
  return 0;
}
