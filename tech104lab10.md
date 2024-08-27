# TECH 104 Lab 10
- [ ] Present, compiles, comments, input, symbolic replacement macro constant, calculation, formatted output, menu of (4 options)+exit+invalid, loop, functions incl. DisplayHeader, use of a 2D array, logic mimics an actual device.   
- [ ] Use of Allman style as per p.91 of textbook. ([Reference document](https://humberital-my.sharepoint.com/:w:/g/personal/mdrk0011_humber_ca/Ee6iBqaMJXtFih6kvjZc_7wBI6vaY4SiIN5vI1bv3Pgc0A?e=u313bQ)). [Block header comments](https://humberital-my.sharepoint.com/:w:/g/personal/mdrk0011_humber_ca/EX1PI19k0QJMhJcO7TVT_ZIBe6tfS2Ui1wOu7ayLgyAb8w?e=Tb0L3j) for next term.   
- [ ] Demonstrated time of day functionality in the lab.
- [ ] Program updated to adhere to goals of previous labs.

0.  For the Fall 2023 semester we continued using ```apollo.humber.ca```   
Steps 1-2 are preprocessor statements:
1.  If you don't already, #include <string.h> and #include <time.h>
2.  Create a constant called CTIMESTRSZ with a value of 25.   
Steps 3-8 should be in your DisplayHeader function which should be in your project after your preprocessor statements:
3.  Create a character array ltime[CTIMESTRSZ] 
4.  Declare a variable now of type clock_t: clock_t now; // time_t now;   
5.  Assign the current time to now: now = clock(); // now=time(NULL);   
6.  Use strcpy to copy the string that results from a ctime function call to which the address of the now field is passed, into the local character array ltime: strcpy(ltime,ctime(&now));
7.  Set the characters in the ltime array at indexes 3,7,10, and 19 to commas.
8.  Print out the string: fprintf(stdout,"\n%.24s",ltime);
9.  Show your professor.
10. Update program for any goals of previous labs that were missed.
11. Ensure your program compiles by tomorrow morning at 10 am.
