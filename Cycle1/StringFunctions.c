#include <stdio.h>

int StringLength(char*);
void StringCopy(char*,char*);
int StringCompare(char*,char*);
void StringConcat(char*,char*);

void main()
{
  char s[100],s1[100],s2[100];
  int choice=1;
  printf("1-String length\n2-String copy\n3-String comparison\n4-String concatenation\n");
  do
  {
  printf("\nEnter your choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:printf("STRING LENGTH\n-------------\n");
           printf("Enter the string: ");
           scanf(" %[^\n]",s);
           printf("The length of the string is %d\n",StringLength(s));
           break;
    case 2:printf("STRING COPYING\n--------------\n");
           printf("Enter the string to be copied: ");
           scanf(" %[^\n]",s1);
           StringCopy(s2,s1);
           printf("String after copying is %s\n",s2);
           break;
    case 3:printf("STRING COMPARISON\n-----------------\n");
           printf("Enter the first string: ");
           scanf(" %[^\n]",s1);
           printf("Enter the second string: ");
           scanf(" %[^\n]",s2);
           int result=StringCompare(s1,s2);
           
           if(result==0)
           {
             printf("Both strings are equal\n");
           }
           else
           {
             printf("Strings are not equal\n");
           }
           break;
    case 4:printf("STRING CONCATENATION\n--------------------\n");
           printf("Enter the first string: ");
           scanf(" %[^\n]",s1);
           printf("Enter the second string: ");
           scanf(" %[^\n]",s2);
           StringConcat(s1,s2);
           printf("Concatenated string is %s\n",s1);
           break;
    default:printf("Incorrect choice\n");
            break;
  }
  }
  while(choice<=4);
}

int StringLength(char* str)
{
  int len=0;
  while(*str!='\0')
  {
    len++;
    str++;
  }
  return len;
}

void StringCopy(char* s2,char* s1)
{
  while(*s1!='\0')
  {
    *s2=*s1;
    s1++;
    s2++;
  }
  *s2='\0';
}

int StringCompare(char* str1,char*str2)
{
   int flag=0;
   while(*str1!='\0' && *str2!='\0')
   {
     if(*str1!=*str2)
     {
       flag=1;
       break;
     }
     str1++;
     str2++;
   }
   if(flag==0)
   {
      return 0;
   }
   else
   {
      return -1;
   }
}

void StringConcat(char* str1,char* str2)
{
    while(*str1!='\0')
    {
      str1++;
    }
    while(*str2!='\0')
    {
      *str1=*str2;
      str2++;
      str1++;
    }
    *str1='\0';
}
