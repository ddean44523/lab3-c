// Author: Daniel Dean dpd5518@psu.edu
// Collaborator: Xiang Liu xfl5249@psu.edu
// Collaborator: Yamin Zhang ykg5402@psu.edu
// Collaborator: Anna Gillard amg73017@psu.edu
// Section: 2
// Breakout: 2
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) 
{
  if(n <= 1)
  {
    return(n);
  }
  else
  {
    return(n + sum_n(n-1));
  }
}
void print_n(const char*s,int n)
{
  if(n >= 1){
    printf("%s\n", s);
    print_n(s,n-1);
  }
}
int main(void) 
{
  char *userIntChar;
  userIntChar= readline("Enter an int: ");
  double userIntDub;
  userIntDub = atof(userIntChar);
  int userInt;
  userInt = (int) userIntDub;
  int userSum;
  userSum = sum_n(userInt);
  printf("sum is %d.\n",userSum);
  char *userString;
  userString = readline("Enter a string: ");
  
  print_n(userString,userInt);
  return 0;
}

