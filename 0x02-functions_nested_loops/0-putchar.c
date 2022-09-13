#include "_putchar.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
        char *sh = "_putchar";
  
         while (*sh) 
         { 
                 _putchar(*sh); 
                 sh++; 
         } 
         _putchar('\n'); 
	return 0;
}
