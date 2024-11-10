/*
 * @Author: wolf-li
 * @Date: 2024-06-08 20:12:42
 * @LastEditTime: 2024-06-08 20:15:01
 * @LastEditors: wolf-li
 * @Description:
 * @FilePath: /c_code/c_morden_desgin/chapter14/practice13.c
 * talk is cheep show me your code.
 */
#include <stdio.h>
#define N 100
void f(void);
int main(void)
{
    f();
    // ifdef 不要在主函数中使用干扰其他函数
#ifdef N
#undef N
#endif
    return 0;
}
void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}

