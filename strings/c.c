// write a programm to remove blank spaces in a string
#include <string.h>
#include <stdio.h>
#include <math.h>
void space(char str[]);
int main()
{
  char str[100];
  printf("enter a sentence: ");
  fgets(str, 100, stdin);
  space(str);
  printf("after removing spaces: %s", str);
}
void space(char str[])
{
  int i, j;
  for (i = 0, j = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
      str[j++] = str[i];
    }
  }
  // null terminate the string at the new end
  str[j] = '\0';
}