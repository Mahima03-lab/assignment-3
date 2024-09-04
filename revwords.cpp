#include<iostream>
#include<string.h>
#include "revwords.h"


 void reverse_substring(char str[],int start,int end)
{
    char temp;
    int i,j=0,l=(end-start)+1;
    if(l%2==0)
    {
      l=l/2;
    }
    else
    {
      l=(l-1)/2;
    }
   for(i=start;i<(start+l);i++)
    {
      
       temp=str[i];
       str[i]=str[end-j];
       str[end-j]=temp;
       j=j+1;
    }
}
 int find_next_start(char str[],int len,int i)
{
	while(str[i]!=' ')
	{
	   if(str[i]=='\0')
	     return -1;
	    else if(str[i-1]==' '||i==0)
	    {
	      return i;
	      break;
	     }
	   else
	     i=i+1;
        return (i+1);
        break;
	 }
	
	 
}

 int find_next_end(char str[],int len,int i)
{
    int a=find_next_start(str,len,i);
    for(int j=a;j<len;j++)
    {
        if(str[j]==' '||str[j]=='\0')
        {
           return j-1;
           break;
         }
        else if(j==0)
        {
          for(int k=j;k<len;k++)
          {
            if(str[k]==' ')
            {
              return k-1;
              break;
            }
          }
        }
    }
    
       
}

 void reverse_words(char s[])
{
   int i=0;
   int j=0,l=0;
   
   while(s[j]!=0)
   {
    l=l+1;
    j++;
   }
   int len=l+1;
   while(i<len)
   {
	   int a=find_next_start(s,len,i);
	   int b=find_next_end(s,len,a);
       reverse_substring(s,a,b);
	   i=b+2;
    }
    std::cout<<s;
}