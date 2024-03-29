#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * File: 3-function_like_macro.h
 * Auth: Choji Alexander Pam
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 */

#define ABS(x) (x * ((x < 0) * (-1) + (x > 0)))

#endif
