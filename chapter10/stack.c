/*
 * @Author: wolf-li
 * @Date: 2024-05-31 11:48:58
 * @LastEditTime: 2024-05-31 15:09:19
 * @LastEditors: wolf-li
 * @Description: 
 * @FilePath: /c_code/c_morden_desgin/chapter10/stack.c
 * talk is cheep show me your code.
 */
// stack.c
#include "stack.h"

// 栈的操作函数
static inline void _stack_push_int_stack(int x) {
    if (int_stack_size < STACK_CAPACITY) {
        int_stack_data[int_stack_size++] = x;
    }
}

static inline void _stack_push_float_stack(float x) {
    if (float_stack_size < STACK_CAPACITY) {
        float_stack_data[float_stack_size++] = x;
    }
}

static inline void _stack_push_double_stack(double x) {
    if (double_stack_size < STACK_CAPACITY) {
        double_stack_data[double_stack_size++] = x;
    }
}

static inline int _stack_pop_int_stack(void) {
    if (int_stack_size > 0) {
        return int_stack_data[--int_stack_size];
    }
    return 0;
}

static inline float _stack_pop_float_stack(void) {
    if (float_stack_size > 0) {
        return float_stack_data[--float_stack_size];
    }
    return 0;
}

static inline double _stack_pop_double_stack(void) {
    if (double_stack_size > 0) {
        return double_stack_data[--double_stack_size];
    }
    return 0;
}
