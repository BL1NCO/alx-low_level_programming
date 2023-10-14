#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#if x < 0
#define ABS(x) ((x) * (-1))
#elif x > 0
#define ABS(x) (x)
#endif

#endif
