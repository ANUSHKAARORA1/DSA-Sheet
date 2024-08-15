Find a Fixed Point (Value equal to index) in a given array
Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed in the array, if there is any Fixed Point present in the array, it returns -1. Fixed Point in an array is an index i such that arr[i] equals i. Note that integers in the array can be negative.
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == i)
            return i;
    }

    /* If no fixed point present then return -1 */
    return -1;
}
