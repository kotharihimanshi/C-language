#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 100

struct Stack {
    int top;
    char items[MAX_LEN];
} st;

void push(char c) {
    if (st.top == MAX_LEN - 1) {
        printf("Stack is full!\n");
        return;
    }
    st.items[++st.top] = c;
}

char pop() {
    if (st.top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return st.items[st.top--];
}

void reverse(char *str) {
    int len = strlen(str);
    int i;

    st.top = -1;
    for (i = 0; i < len; i++) {
        push(str[i]);
    }

    for (i = 0; i < len; i++) {
        str[i] = pop();
    }
}

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

