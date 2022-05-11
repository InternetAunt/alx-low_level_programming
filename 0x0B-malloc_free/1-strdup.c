#include <stdlib.h>
  2
  3 /**
  4  * _strdup - returns a pointer to a newly allocated space in memory
  5  * which contains a copy of the string given as a parameter.
  6  * @str: input char
  7  * Return: char
  8  */
  9
 10 char *_strdup(char *str)
 11 {
 12         char *dup;
 13         unsigned int a = 0;
 14         unsigned int b = 0;
 15
 16         if (str == NULL)
 17                 return (NULL);
 18         while (str[i != '\0')
 19                 i += 1;
 20         i += 1;
 21         dup = malloc(i * sizeof(*dup));
 22         if (dup == NULL)
 23                 return (NULL);
 24         while (j < i)
 25         {
 26                 dup[j] = str[j];
 27                 j += 1;
 28         }
 29         return (dup);
 30 }


