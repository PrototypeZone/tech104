# TECH 104 Lab 06
- [ ] Present, compiles, comments, input, symbolic replacement macro constant, calculation, formatted output, menu of (4 options)+exit+invalid, loop   
- [ ] Use of Allman style as per p.91 of textbook. ([Reference document](https://humberital-my.sharepoint.com/:w:/g/personal/mdrk0011_humber_ca/Ee6iBqaMJXtFih6kvjZc_7wBI6vaY4SiIN5vI1bv3Pgc0A?e=u313bQ))   
- [ ] Demonstrated use of a function in the lab.
- [ ] Menu items converted to make use of functions.

1.  Demonstrate one functioning ```function``` to your professor.   
Example conversion of checking.c from week 06 notes using knowledge from week 08 notes:
```c
/* Balances a checkbook */
 
#include <stdio.h>

float case1(void){
  float credit;
  printf("Enter amount of credit: ");
  scanf("%f", &credit);
  return credit;
}
 
float case2(void){
  float debit;
  printf("Enter amount of debit: ");
  scanf("%f", &debit);
  return debit;
}
 
void case3(float balance){
  printf("Current balance: $%.2f\n", balance);
  return;
}
 
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
        balance = balance + case1(); //credit
        break;
      case 2:
        balance = balance - case2(); //debit
        break;
      case 3:
	case3(balance);
        break;
      case 4:
        return 0;
      default:
        printf("Invalid command");
        break;
    }  // end of switch
  }  // end of for loop

}  // end of main
```
2.  Finish converting your menu to make use of functions.
3.  Ensure your program compiles by Sunday at 11 am.
