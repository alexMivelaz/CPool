/*
** Epitech Project 2022
** my_print_comb2
** File Description:
** print all combinaison of two two digits
*/

#include <unistd.h>

void print_digit(int first_digit, int second_digit)
{
  char c = '0' + first_digit / 10;

  write(1, &c, 1);
  c = '0' + first_digit % 10;
  write(1, &c, 1);
  write(1, " ", 1);
  c = '0' + second_digit / 10;
  write(1, &c, 1);
  c = '0' + second_digit % 10;
  write(1, &c, 1);
  if (first_digit != 98 || second_digit != 99)
    write(1, ", ", 2);
}

int my_print_comb2(void)
{
  int first_digit = 0;
  int second_digit = 1;

  while (first_digit != 99) {
    print_digit(first_digit, second_digit);
    second_digit += 1;
    if (second_digit > 99) {
      first_digit += 1;
      second_digit = first_digit + 1;
    }
  }
  return 0;
}
