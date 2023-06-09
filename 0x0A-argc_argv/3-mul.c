#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
#include <stdio.h>
#include <stdlib.h>
  int main(int argc, char **argv)
  {
    int i;
    int multiplication;
    for  (i = 0; i < argc; i++)
    {
      if (argc != 3) {
        printf("Error\n");
        return 1;
    }
      int num1 = atoi(argv[1]);
      int num2 = atoi(argv[2]);
      multiplication=num1*num2;
      
      
    }
    printf("%d\n",multiplication);
    return 0;
  }
