#include <stdio.h>
int main()
{
    int per;
    printf("Enter your percentage:>");
    scanf("%d", &per);
    switch (per / 10)
    {
    case 10:
        printf("Grade: S\n");
        break;
    case 9:
        printf("Grade: A\n");
        break;
    case 8:
        printf("Grade: B\n");
        break;
    case 7:
        printf("Grade: C\n");
        break;
    case 6:
        printf("Grade: D\n");
        break;
    case 5:
        printf("Grade: E\n");
        break;
    default:
        printf("Grade: F (Fail)\n");
        break;
    }
    return 0;
}