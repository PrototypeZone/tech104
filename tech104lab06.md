# TECH 104 Lab 06
- [ ] Present, compiles, comments, input, symbolic replacement macro constant, calculation, formatted output, menu, loop   
- [ ] Use of Allman style as per p.91 of textbook.
- [ ] Demonstrated function in class.
- [ ] Menu items as functions.

1.  Demonstrate one functioning ```function``` to your professor.   
Example conversion of checking.c from week 06 notes using knowledge from week 08 notes:
```c
/* Balances a checkbook */
 
#include <stdio.h>

void case1(void){

 
int main(void)
{
  int cmd;
  float balance = 0.0f, credit, debit;
 
  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: 1=credit, 2=debit, ");
  printf("3=balance, 4=exit\n\n");

  for (;;) {
    printf("Enter command: ");
    scanf("%d", &cmd);
	switch (cmd) {   
      case 1:
        printf("Enter amount of credit: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 2:
        printf("Enter amount of debit: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 3:
        printf("Current balance: $%.2f\n", balance);
        break;
      case 4:
        return 0;
      default:
        printf("Invalid command");
        break;

    }  // end of switch
  }  // end of for loop
}  // end of main



2.  Finish converting your menu to make use of functions.
3.  Ensure your program compiles by Sunday at 11 am.
