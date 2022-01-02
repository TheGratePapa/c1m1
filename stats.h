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
 * @file stats.h
 * @brief file cointaining function declarations
 *
 * This file cointains 7 functions to analyze statistics of an unsigned char
 * array. Those can calculate median, mean, maximum and minimum. Also we
 * can print statistics and rearange arrays.
 *
 * @author Luis Castillo
 * @date 1/2/22
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief prints statistcs of the array
 *
 * This function takes an array and calls other functions in order
 * to calculate the median, mean, max and min. After the calculations
 * Those are printed on console
 *
 * @param a unsigned char array to be processed
 *
 * @return None
 */
 void print_statistics(unsigned char a[]);

 /**
  * @brief Prints the array passed as a parameter
  *
  * In this function you need to pass the array and the size, after that
  * it uses a for loop to print them on the console.
  *
  * @param a unsigned char array to be printed
  * @param sz size in int of the array
  *
  * @return None
  */
 void print_array(unsigned char a[], int sz);

 /**
  * @brief find median of the unsigned char array
  *
  * This function finds the median of the passed unsigned char array by
  * sorting it first and taking the middle value.
  *
  * @param a unsigned char array to be processed
  *
  * @return The median of the sorted array
  */
 unsigned char find_median(unsigned char a[]);
 /**
  * @brief Calculate the mean of the passed unsigned char array
  *
  * This function is in charge of getting the mean of passed array. This is
  * achieved by adding all the values in a temporal variabe and dividing it
  * into the size of the array.
  *
  * @param a unsigned char array to be processed
  *
  * @return The mean of the array
  */
 unsigned char find_mean(unsigned char a[]);
 /**
  * @brief Find the maximum of the sorted unsigned char array
  *
  * In this function we sort the passed array and take the first value of
  * sorted array.
  *
  * @param a unsigned char array to be processed
  *
  * @return The maximum of the array
  */
 unsigned char find_maximum(unsigned char a[]);
 /**
  * @brief Find the minimum of the sorted unsigned char array
  *
  * In this function we sort the passed array and take the last value of
  * sorted array.
  *
  * @param a unsigned char array to be processed
  *
  * @return The minimum of the array
  */
 unsigned char find_minimum(unsigned char a[]);
 /**
  * @brief Sorts an unsigned char array that is passed as a parameter
  *
  * This function receives an unsigned char array and the size as an int
  * After that it sorts it.
  *
  * @param a unsigned char array to be processed
  * @param sz size in int of the array
  *
  * @return None
  */
 void sort_array(unsigned char a[], int sz);

#endif /* __STATS_H__ */
