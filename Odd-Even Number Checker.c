#include<stdio.h>

int main(){
    printf("Welcome to the Odd/Even Number Checker");
    int number;
printf("Enter an integer: ");
scanf("%d", &number);
if (number % 2 == 0) {
    printf("%d is even.", number);
} else {
    printf("%d is odd.", number);
}
printf("Thankyou for using the Odd/Even Number Checker");
    return 0;

}
