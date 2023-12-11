# curses
1.  Visit https://humber.ca/linkedinlearning/
2.	Click on Login to LinkedIn Learning   
![](media/17.png)
3.	Click on Sign in   
![](media/18.png)
4.	Enter humber.ca as your email and click Continue   
![](media/19.png)
5.	Click Continue to Humber College   
![](media/20.png)
6.	Login with your Single Sign On credentials.
7.  For suplementarty learning visit https://www.linkedin.com/learning/learning-c-5/
8.  For curses visit https://www.linkedin.com/learning/exploring-c-libraries/building-an-ncurses-program
## Note regarding includes
1. <stdio.h> is needed for printf(), scanf()
2. <stdlib.h> is needed for EXIT_SUCCESS, EXIT_FAILURE
3. <unistd.h> is needed for usleep()
4. <time.h> is needed for
   ```c
   clock_t now;  // time_t now;
   now = clock(); // now=time(NULL);
   printf("%s\n", ctime(&now));
   ```
