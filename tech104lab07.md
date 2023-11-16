# TECH 104 Lab 07
- [ ] Present, compiles, comments, input, symbolic replacement macro constant, calculation, formatted output, menu of (4+ options)+exit+invalid, loop, functions   
- [ ] Use of Allman style as per p.91 of textbook. ([Reference document](https://humberital-my.sharepoint.com/:w:/g/personal/mdrk0011_humber_ca/Ee6iBqaMJXtFih6kvjZc_7wBI6vaY4SiIN5vI1bv3Pgc0A?e=u313bQ))   
- [ ] Demonstrated use of a string in the lab.
- [ ] Project updated and logical.

0. for Monday's lab group mikelake.humber.ca is saying access denied, let us transfer our files to apollo.humber.ca and use it instead right now. Log in to apollo and write the command ```chmod g+wx .```
1.  Demonstrate one functioning ```string``` to your professor.
An example is to write a DisplayHeader function in your code file:
```c
void DisplayHeader(const char * sname) 
{ 
  fprintf(stdout,"Welcome to %s's project name.\n",sname); 
} 
```
and then call the DisplayHeader function at the start your program in your main function:
```c
DisplayHeader("Paul Moggach");		// Prints header to the screen
```
2.  Finish updating your project.
3.  Ensure your program compiles by Sunday at 11 am.

## An example for those interested in yet another alternative to case/switch and if/else for menus
```c
/* Balances a checkbook */

#include <stdio.h>
#include <stdlib.h>

float case0(float balance)
{
  printf("Invalid command");
  return balance;
}

float case1(float balance){
  float credit;
  printf("Enter amount of credit: ");
  scanf("%f", &credit);
  return balance+credit;
}

float case2(float balance){
  float debit;
  printf("Enter amount of debit: ");
  scanf("%f", &debit);
  return balance-debit;
}

float case3(float balance){
  printf("Current balance: $%.2f\n", balance);
  return balance;
}

float case4(float balance)
{
  exit(EXIT_SUCCESS);
}

int main(void)
{
  int cmd;
  float balance = 0.0f, credit, debit;

  printf("*** ACME checkbook-balancing program ***\n");

  for (;;) {
    printf("Commands: 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");
    printf("Enter command: ");
    scanf("%d", &cmd);

    //example adapted from section 17.7 of the textbook
    float (*menu[])(float) =   {case0,
				case1,
				case2,
				case3,
				case4};	
    if(cmd<1||cmd>4)
    {
      cmd=0;
    }

    balance=(*menu[cmd])(balance);

  }  // end of for loop

  return EXIT_FAILURE;

}  // end of main
```
