/*
** Epitech Project 2022
** my_print_comb
** File Description:
** print all combination of three digit all diferent
*/

#include <unistd.h>

void print_comb(char i_one, char i_two, char i_three)
{
  write(1, &i_one, 1);
  write(1, &i_two, 1);
  write(1, &i_three, 1);
  if (i_one != '7' || i_two != '8' || i_three != '9')
    write(1, " ", 1);
}

int my_print_comb(void)
{
  char i_one = '0';
  char i_two = '1';
  char i_three = '2';

  while (i_one != '8') {
    print_comb(i_one, i_two, i_three);
    i_three += 1;
    if (i_three == '9' + 1) {
      i_two += 1;
      i_three = i_two + 1;
    }
    if (i_two == '9') {
      i_one += 1;
      i_two = i_one + 1;
      i_three = i_two + 1;
    }
  }
  return 0;
}
