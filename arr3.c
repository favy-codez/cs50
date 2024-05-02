#include <cs50.h>
#include <stdio.h>

// Constant
const int N = 3;

// Prototype
// float average(int length, int array[]);: This is a function prototype for the average function, 
// which calculates the average of an array of integers.
float average(int length, int array[]);

// The main function prompts the user to enter N scores using a loop and 
// stores them in an array called scores. It then calls the average function 
// to calculate the average of the scores and prints the result using printf.
int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(N, scores));
}

// The average function takes the length of the array and the array itself as arguments.
// It calculates the sum of the scores in the array using a loop and then divides the 
// sum by the length of the array to calculate the average.
// Note the use of type casting (float) to ensure that the division is performed as 
// floating point division, resulting in a floating point average.
float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
