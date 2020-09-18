//Author: Karthik Madhav Jain kmj5614@psu.edu

#include <stdio.h>
#include<readline/readline.h>

int sum_n(int n);
void print_n(const char* s,int n);

int main(void) {
  int addition,integer;
  printf("Enter an int: ");
  scanf("%d", &integer); 
  addition = sum_n(integer);
  printf("\nsum is %d.",addition);
  char *string = readline("\nEnter a string: ");
  print_n(string, integer);
  return 0;
}

int sum_n(int n){
  int value = 0;
  if(n != 0)
    value = n + sum_n(n-1);
    return value;
  return value;
}

void print_n(const char*s, int n){
  if(n > 0)
    printf("%s\n",s);
    n--;
    if(n>0)
      print_n(s, n);  
}