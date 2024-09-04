#include<iostream>
#include<ctype.h>
#include<string.h>
#include"revwords.cpp"
#include "revwords.h"
int main()
{
   char str[100];
    std::cout << "Enter a sentence: ";

    std::cin.getline(str, 100);
   reverse_words(str);
   return 0;
}