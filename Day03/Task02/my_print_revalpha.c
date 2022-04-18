/*
** Epitech Project 2022
** my_print_revalpha
** File Description:
** print the alphabet on a descanding order
*/

#include <unistd.h>

int my_print_revalpha(void)
{
  for (char c = 'z'; c != 'a' - 1; c -= 1)
    write(1, &c, 1);
  return 0;
}
