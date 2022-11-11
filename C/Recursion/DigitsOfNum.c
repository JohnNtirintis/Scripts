#include<stdio.h>
// -------- Write a program in C to count the digits of a given number using recursion. --------


int numOfDigits(int n);
int main()
{
  int n,count;
    printf("Input num: ");
    scanf("%d",&n);

    count = numOfDigits(n);

    printf("Num of digits: %d \n",count);
    
    return 0;
}

int numOfDigits(int n)
{
    static int count=0;

    if(n!=0)
    {
        count++;
        numOfDigits(n/10);
    }

    return count;
}