#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mynum, usernum, count = 0;

    srand(time(NULL));
    mynum = rand() % 100;

    printf("I have a number in mind (0-9). can you guess it?\n");

    while (1)
    {

        printf("enter your Guess : ");
        scanf("%d", &usernum);

        if (mynum == usernum)
        {
            printf("yes you got it! in %d attempts", count);
            break;
        }
        else if (mynum > usernum)
        {
            printf("My Number is greater than %d . Try Again\n\n", usernum);
        }
        else
        {
            printf("My Number is smaller than %d . Try Again\n\n", usernum);
        }
        count++;
    }

    return 0;
}