#ifndef _FT_BOOLEAN_H__
#define _FT_BOOLEAN_H__
#define EVEN_MSG "I have an even number of arguments"
#define ODD_MSG "I have an odd number of arguments"
#define SUCCESS 0
#define TRUE 1
#define FALSE 0
int EVEN(int a)
{
    if (a % 2)
        return 0;
    else
        return 1;
}
#endif