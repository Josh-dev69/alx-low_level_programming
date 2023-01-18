#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_div - Function to perform simple division
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: the result of the division
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Function to perform simple modular division
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: the result of the modular division
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}

/**
 * op_add - Function to perform simple addition
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: the result of the addition
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_mul - Function to perform simple multiplication
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Function to perform simple subtraction
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
    return (a - b);
}
