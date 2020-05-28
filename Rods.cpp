// Ian McGregor
// Implementation of Rod Cutting problem repurposed to better understand Dynamic Programming


#include <iostream>
#include <stdio.h> 
#include <limits.h> 

using namespace std;

// A utility function to get the maximum of two integers 
int max(int a, int b);

int cutRod(int price[], int n);

int main() 
{ 
    int arr[] = {2, 4, 8, 9, 10}; 
    int size = 5;
    printf("Maximum Obtainable Value is %d", cutRod(arr, size)); 
    return 0; 
} 
// A utility function to get the maximum of two integers 
int max(int a, int b) { return (a > b)? a : b;} 

int cutRod(int price[], int n) 
{ 
   if (n <= 0) 
     return 0; 
   int max_val = 0; 
  
   // Recursively cut the rod in different pieces and compare different  
   // configurations 
   for (int i = 0; i<n; i++) 
         max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 
  
   return max_val; 
} 
