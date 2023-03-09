#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion - Returns the natural square root of a number.
 *@n: The number to calculate the square root of.
 *Return: The resulting square root or -1 if n < 0.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
         return (-1);
}
/**
 *actual_sqrt_recursion - Recursively finds the natural
 *@n: The number to calculate the square root of.
 *@i: Iterator.
 *Return: The resulting square root or -1 if i * i > n.
 */
int actual_sqrt_recursion(int n, int i)
{
   if (i * i > n)
       return (-1);
   if (i * i == n)
       return (i);
}
