#include <stdio.h>
int main()
{
    char *arr[5] = {
        "Krrish",
        "Gupta",
        "Rohit",
        "Sharma",
        "Vanshika"};

    for (int i = 0; i < 5; i++)
    {printf("%s\n",*(arr+i));
    }
}
