#include<iostream>
#ifdef REVWORDS_H
#define REVWORDS_H 0
extern void reverse_substring(char str[],int start,int end);
extern int find_next_start(char str[],int len,int i);
extern int find_next_end(char str[],int len,int i);
extern void reverse_words(char s[]);
#endif