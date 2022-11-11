#include <stdio.h>
// -------- Write a program in C to calculate the sum of numbers from 1 to n using recursion. --------
int sumOfNumbers(int);
 
int main() 
{
    int n, sum;
    //Range
    n = 5;

    sum = sumOfNumbers(n);

    printf("The sum is: %i", sum);
    return 0;

}
int sumOfNumbers(int n) 
{
    int result;
    if(n == 1){
        return 1;
    }
    else{
        result = n + sumOfNumbers(n - 1);
    }
    return result;
}