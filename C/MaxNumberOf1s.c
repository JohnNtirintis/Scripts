#include <stdio.h>
#include <stdlib.h>
// -------- Write a program in C to find the row with maximum number of 1s --------

int main()
{

    int array[5][5] = {
    {0 ,1 ,0 ,1 ,1},
    {1 ,1, 1, 1, 1},
    {0 ,1 ,0 ,1, 1},
    {0, 0, 0, 0, 0},
    {1, 0, 0, 0, 1}
    };
    //Arr that will store the number of 1s per row
    //Chose an 1d arr because 2D arrays can be viewed as multiple 1d arrays
    int count[5] = {0,0,0,0,0};
    int index = 0;
    //iterating through rows then columns
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            //Storing the number of 1s per row in count array
            if(array[i][j] == 1){
                count[i]++;
            }
        }
    }
    //Finding index with biggest number
    //Bigger number => more 1s
    for(int i = 0; i < 5; i++){
        if(count[i] > count[index]){
            index = i;
        }
    }

    printf("The index of row with maximum 1s is: %i \n", index);

    return 0;

}

