#include<stdio.h>
int main(){
    int per;
    printf("Enter your percentage:>");
    scanf("%.2f",&per);
    switch (per) {
        case 100:
        case 90:
            printf("Grade: A\n");
            break;
        case 80:
            printf("Grade: B\n");
            break;
        case 70:
            printf("Grade: C\n");
            break;
        case 60:
            printf("Grade: D\n");
            break;
        case 50:
            printf("Grade: E\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }
    return 0;
}
