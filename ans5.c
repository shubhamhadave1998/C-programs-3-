
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void StrCpyToggle(char *src, char *dest)
{
  strcpy(dest,src);
  while(*src != '\0')
  	{
  		{
  			if((*src >= 'A') && (*src<='Z'))
  				{
  					*src=*src+32;
  				}
            else if(*src>='a' && *src<='z')
            	{
            		*src=*src-32;
            	}
                *dest= *src;
                dest++;
            }
            src++;
        }
        *dest='\0';
}
int main()
{
char arr[30] = "Marvellous Python 2";
char brr[30]; 
StrCpyToggle(arr,brr);
printf("%s",brr); 
return 0;
}

