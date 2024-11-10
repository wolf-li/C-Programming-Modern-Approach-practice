#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100
/* external variables */
int contents[STACK_SIZE];
int *top_ptr = contents;
void make_empty(void)
{
    top_ptr = contents;
}
bool is_empty(void)
{
    return top_ptr - contents == 0;
}
bool is_full(void)
{
    return top == contents + STACK_SIZE;
}
void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}