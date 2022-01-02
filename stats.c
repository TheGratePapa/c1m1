/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief program with functions that can analyze an array
 * of unsigned char data.
 *
 * This program can report analytics on the maximum, minimum
 * median and mean of a dataset.
 * @author Luis Castillo
 * @date 1/2/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test);
  //print_array(test,SIZE);


}

void print_statistics(unsigned char a[]){
  //vars
  unsigned char var,var2,var3,var4;
  var = find_median(a);
  var2 = find_mean(a);
  var3 = find_maximum(a);
  var4 = find_minimum(a);

  printf("Minimum: %u\n", var4);
  printf("Maximum: %u\n", var3);
  printf("Mean: %u\n", var2);
  printf("Median: %u\n", var);

}

void print_array(unsigned char a[], int sz){
  int i = 0;
  for (i=0;i<sz;i++){
    printf("%u",a[i]);
    if (i+1 != sz){
      printf(", ");
    }
  }
  printf("\n");
}

unsigned char find_median(unsigned char a[]){
  //temp variables
  int i = 0, j = 0;
  unsigned char median, temp;

  //sort
  for (i=0;i<SIZE-1;i++){
    for (j=0;j<SIZE-i-1;j++){
      if (a[j]<a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  //median calc
  if (SIZE%2 == 0)
    median = (a[(SIZE/2)-1]+a[SIZE/2])/2;
  else
    median = a[SIZE/2];
  return median;
}

unsigned char find_mean(unsigned char a[]){
  //vars
  unsigned int sum = 0;
  int i = 0;

  for (i=0;i<SIZE;i++){
    sum +=a[i];
  }
  sum = sum/SIZE;
  return sum;
}

unsigned char find_maximum(unsigned char a[]){
  int i = 0, j = 0;
  unsigned char temp;

  //sort
  for (i=0;i<SIZE-1;i++){
    for (j=0;j<SIZE-i-1;j++){
      if (a[j]<a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  return a[0];
}

unsigned char find_minimum(unsigned char a[]){
  int i = 0, j = 0;
  unsigned char temp;

  //sort
  for (i=0;i<SIZE-1;i++){
    for (j=0;j<SIZE-i-1;j++){
      if (a[j]<a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  return a[SIZE-1];

}

void sort_array(unsigned char a[], int sz){
  int i = 0, j = 0;
  unsigned char temp;

  //sort
  for (i=0;i<sz-1;i++){
    for (j=0;j<sz-i-1;j++){
      if (a[j]<a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("%u",a[0]);
  printf("\n");

}
