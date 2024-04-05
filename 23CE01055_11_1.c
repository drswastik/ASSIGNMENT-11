#include <stdio.h>
#include <string.h>



struct Stack {
    int top;
    char items[100];
};

void initialize(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, char c) {
    if (s->top == 99) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = c;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return '\0';
    }
    return s->items[(s->top)--];
}

void reverseString(char *str) {
    int len = strlen(str);
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; i < len; i++) {
        push(&stack, str[i]);
    }

    for (int i = 0; i < len; i++) {
        str[i] = pop(&stack);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

return 0;
}
