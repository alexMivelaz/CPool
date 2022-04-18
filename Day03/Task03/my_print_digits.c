/*
** Epitech Project
** my_print_digits
** File Description:
** print all the digits in ascending order
*/

#include <unistd.h>

int my_print_digits(void)
{
  for (char c = '0'; c != '9' + 1; c += 1)
    write(1, &c, 1);
  return 0;
}
