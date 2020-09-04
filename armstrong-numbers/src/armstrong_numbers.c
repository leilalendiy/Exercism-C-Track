#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Define the function itself.
bool is_armstrong_number(int candidate)
{
    int candidateLength = floor(log10(abs(candidate))) + 1;
    int candidateNum = candidate;
    int candidateSum = 0;

    for (int i = 0; i < candidateLength; i++)
    {
        int remainder = candidateNum % 10;
        candidateSum += pow(remainder, candidateLength);
        candidateNum /= 10;
    }

    return candidateSum == candidate;
}
