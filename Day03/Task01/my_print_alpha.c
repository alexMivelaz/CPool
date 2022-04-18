/*
** Epitech Project 2022
** my_print_alpha
** File description
** Print the alphabet on lower case
*/

#include <unistd.h>

int my_print_alpha(void)
{
  for (char c = 'a'; c != 'z' + 1; c += 1)
    write(1, &c, 1);
  return 0;
}
