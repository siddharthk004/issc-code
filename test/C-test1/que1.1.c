#include <stdio.h>

int main() {
    double real,img;

    printf("Enter the real part: ");
    scanf("%lf", &real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &img);

    if (img >= 0)
        printf("The complex number is: %.2f + %.2fi\n", real, img);
    else
        printf("The complex number is: %.2f - %.2fi\n", real, -img);

    return 0;
}
