#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Taking input: two integers and an operator
    scanf("%d %d %c", &a, &b, &op);
    
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)  // Prevent division by zero
                printf("%d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}


