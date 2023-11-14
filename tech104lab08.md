# TECH 104 Lab 08
- [ ] Present, compiles, comments, input, symbolic replacement macro constant, calculation, formatted output, menu of (4 options)+exit+invalid, loop, functions incl. DisplayHeader   
- [ ] Use of Allman style as per p.91 of textbook. ([Reference document](https://humberital-my.sharepoint.com/:w:/g/personal/mdrk0011_humber_ca/Ee6iBqaMJXtFih6kvjZc_7wBI6vaY4SiIN5vI1bv3Pgc0A?e=u313bQ))   
- [ ] Demonstrated use of an array in the lab.
- [ ] Menu options provided from an array of strings, a 2 dimensional array of chars.

1.  Demonstrate one functioning ```array``` to your professor.
Example:
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
  char menu[][]={"Commands: ","1=credit, ","2=debit, ",
		"3=balance, ","4=exit\n\n"};
  for (int i=0;i<4;i++){
    printf(menu[i]);
  }

  for (;;) {
    printf("Enter command: ");
    scanf("%d", &cmd);
    if(cmd==1) {   
        balance = balance + case1(); //credit
    }
    else if (cmd==2){
        balance = balance - case2(); //debit
    }
    else if (cmd==3){
	case3(balance);
    }
    else if (cmd==4){
        return 0;
    }
    else {
        printf("Invalid command");
    }  // end of else/if
  }  // end of for loop

}  // end of main

```
2.  Finish updating your menu options such that they are expressed from an array.
3.  Ensure your program compiles by Sunday at 11 am.
