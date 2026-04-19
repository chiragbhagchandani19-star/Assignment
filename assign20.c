#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Changes only exist here
    printf("Inside function (Value): a = %d, b = %d\n", a, b);
}

int main() {
    int x , y;
    scanf("%d", &x);
     scanf("%d", &y);
    swapByValue(x, y);
    printf("Outside function (Value): x = %d, y = %d\n", x, y); 
    return 0;
}
