#include <stdio.h>

#define MAX 6

int BOX[MAX];
int top = -1;

// Function to add an element
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack is FULL! \n");
    }
    else
    {
        top++;
        BOX[top] = x;

        printf("%d added to the stack.\n", x);
    }
}

// Function to remove an element
void pop()
{
    if (top == -1)
    {
        printf("Stack is EMPTY! \n");
    }
    else
    {
        printf("%d removed from the stack.\n", BOX[top]);
        top--;
    }
}

// Function to traverse and display the stack
void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is EMPTY! \n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", BOX[i]);
        }
    }
}

// Main function
int main()
{
    push(10);
    push(20);
    push(30);
	push(40);
    push(50);
    push(60);
    push(70);


    display();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    display();

    return 0;
}

   