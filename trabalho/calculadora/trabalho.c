#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STACK_SIZE 100

typedef struct {
    double items[MAX_STACK_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, double value) {
    if (stack->top < MAX_STACK_SIZE - 1) {
        stack->items[++stack->top] = value;
    } else {
        printf("Erro: Pilha cheia\n");
        exit(EXIT_FAILURE);
    }
}

double pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->items[stack->top--];
    } else {
        printf("Erro: Pilha vazia\n");
        exit(EXIT_FAILURE);
    }
}

double evaluateExpression(char expression[]) {
    Stack stack;
    initialize(&stack);

    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(&stack, atof(&expression[i]));
            while (isdigit(expression[i + 1]) || expression[i + 1] == '.') {
                i++;
            }
        } else if (expression[i] == ' ') {
            continue;
        } else {
            double operand2 = pop(&stack);
            double operand1 = pop(&stack);
            double result;

            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                case 'l': // log (base 10)
                    result = log10(operand1);
                    break;
                case 's': // sin
                    result = sin(operand1);
                    break;
                case 'c': // cos
                    result = cos(operand1);
                    break;
                case 't': // tan
                    result = tan(operand1);
                    break;
                default:
                    printf("Operador inválido: %c\n", expression[i]);
                    exit(EXIT_FAILURE);
            }

            push(&stack, result);
        }
    }

    return pop(&stack);
}

int main() {
    char expression[] = "45 60 + 30 c *";
    double result = evaluateExpression(expression);

    printf("Resultado: %lf\n", result);

    return 0;
}
