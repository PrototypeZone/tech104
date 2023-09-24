# TECH 104 Lab 02
1.  Check the discussion board/project list to see if you need to choose a new
    project.
2.  Please use mikelake.humber.ca so that your files remain available from week
    to week.
3.  Choose a file name based on your project name e.g.: traffic.c, snake.c,
    claw.c, vending.c, pet.c, wellness.c, food.c, watering.c, aquarium.c, fan.c,
    humidifier.c, soda.c, candy.c, security.c, calculator.c, quiz.c, waste.c,
    light.c, teller.c, book.c, parkinglot.c, navigation.c, word.c, exercise.c,
    cashier.c, parkstreet.c, radar.c, printer.c, microwave.c, number.c,
    vehicle.c, carwash.c, geiger.c, air.c, coffee.c, et.c.
4.  Write and compile your program much the same way as pun.c in Lab 01. Use the
    printf statement this time to print to the terminal: “Welcome to student
    name’s project name.” Replace student name with your name and project name
    with your project name.
5.  Demonstrate the execution of the program to your professor.
6.  At the command prompt run the command chmod g+r project.c where project is
    the name of your project e.g.:
    
```c
    chmod g+r traffic.c
```

    Also run
```
    chmod g+x .
```
7.  Write pseudocode of future functionality in the form of comments into your
    program e.g.
```
    // This program will take a Fahrenheit temperature as input.
    // It will then print the equivalent Celsius temperature.
```
8.  Take input from the user and print it to the terminal. For example:
```
    // If you need an integer number that can be negative or positive (text p
    23)
    int height;
    printf(“Enter height of box: “);
    scanf(“%d”, \&height);
    printf(“%d\\n, height);

    // If you need a decimal number that can be negative or positive (text p
    24-25)
    float fahrenheit;
    printf(“Enter Fahrenheit temperature: “);
    scanf(%f, \&fahrenheit);
    printf(“%f\\n”,fahrenheit);

    // If you need a character (text p 139)
    char ch;
    printf(“Enter a character: “);
    scanf(“%c”, \&ch);
    printf(“%c\\n”, ch);

    // If you need a word of maximum length 11 (adapted from text p 285-286)
    char word[12];
    printf(“Enter a less than 12 character word: “);
    scanf(“%11s”, word);
    printf(“%s\\n”, word);
```
```
