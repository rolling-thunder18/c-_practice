//Instructions:
// Do not edit the code, just fill the blank code segment.
//For compilation---> gcc q1_maxmin.c -o q1_maxmin
//For testing---> ./q1_maxmin 1 2 3 4 5
// Your code should run for any 5 elements like 7 9 5 2 1 etc.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int arr[5], i, max, min;

    if (argc != 6) {
        printf("Enter exactly 5 integers.\n");
        return 1;
    }

    for (i = 0; i < 5; i++)
        arr[i] = atoi(argv[i + 1]);

//***************Write your code here in between these two comments. You may use as many lines as you wish in between these comments.
  
            //***************End of your code

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}
