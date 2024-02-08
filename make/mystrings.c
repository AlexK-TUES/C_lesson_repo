#include <stdio.h>
#include "mystrings.h"

char strconcat(char *str,char *str2)
{
  int i=0,j=0;
  while(str[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str[i]=str2[j];
    j++;
    i++;
  }
  str[i]='\0';
  puts(str);
}

int strcompare(char *str, char *str2)
{
    int result = 0;

    while (str != '\0' || str2 != '\0') {
        if (str == str2) {
            str++;
            str2++;
        }

        else if (str != str2) {
            if (str == '\0' && str2 != '\0')
            result = 1;
            else result = -1;
            break;
        }
    }

    printf("%d",result);
}

int strlength(char *str){
    int i,length=0;
    
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    printf("%d",length);
}