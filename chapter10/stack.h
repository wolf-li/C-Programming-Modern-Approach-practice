/*
 * @Author: wolf-li
 * @Date: 2024-05-31 11:17:36
 * @LastEditTime: 2024-05-31 15:08:27
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter10/stack.h
 * talk is cheep show me your code.
 */
// stack.h
#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_CAPACITY 10

// 栈的定义
#define DEFINE_STACK(name, type) \
    type name_data[STACK_CAPACITY]; \
    int name_size;

#define stack_init(name) \
    name_size = 0;

// 推入元素
#define stack_push(name, x) \
    _Generic((x), \
        int: _stack_push_name_int, \
        float: _stack_push_name_float, \
        double: _stack_push_name_double \
    )(x)

// 弹出元素
#define stack_pop(name) \
    _Generic((name_data[0]), \
        int: _stack_pop_name_int, \
        float: _stack_pop_name_float, \
        double: _stack_pop_name_double \
    )()

// 栈的操作函数
extern void _stack_push_int_stack(int x);
extern void _stack_push_float_stack(float x);
extern void _stack_push_double_stack(double x);

extern int _stack_pop_int_stack(void);
extern float _stack_pop_float_stack(void);
extern double _stack_pop_double_stack(void);

#endif // STACK_H
