#include <stdio.h>
#include <string.h>

int main()
{
    char *arr[] = {"akshu","rahul","sneha","amit","rahul"};

    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate strings:\n");

    for(i = 0; i < length; i++)
    {
        for(j = i + 1; j < length; j++)
        {
            if(strcmp(arr[i], arr[j]) == 0)
            {
                printf("%s\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}