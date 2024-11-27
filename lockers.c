//compile with gcc lockers.c -lcurses
//run with ./a.out
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
int main (void)
{
   	initscr();
	int col,row;
	getmaxyx(stdscr, row, col);
	//		     w len y  x
	WINDOW *win = newwin(0, 0, 0, 0);
	mvprintw(0,0,"Welcome to Lockers!");
   	int password[5][4]; //4 digit passwords
	//printf("Please choose a box number: ");
	mvprintw(1,0,"Please choose a box number: ");
	int boxnumber;
	refresh();
	box(win, 1,1);
	refresh();
	//scanf(" %d",&boxnumber);
	scanw(" %d",&boxnumber);
	boxnumber=boxnumber-1;
	//printf("You have selected box number: %d\n",boxnumber+1);
	mvprintw(2,0,"You have selected box number: %d\n",boxnumber+1);
	refresh();
	int x;
	int y;
	x=boxnumber/4;
	y=boxnumber%4;
	//printf("The coordinates are x: %d, y: %d\n",x,y);
	mvprintw(3,0,"The coordinates are x: %d, y: %d\n",x,y);
	//printf("Please choose a 4 digit password: ");
	mvprintw(4,0,"Please choose a 4 digit password: ");
	refresh();
	int digits;
	scanw(" %d",&digits);
	password[x][y]=digits;
	//draw lockers:
	//mvprintw(5+x,y*4,"%c",179);
	//mvvline(6,6,ACS_VLINE,6);
	mvvline(6,1,'|',9);
	mvvline(6,1+5,'|',9);
	mvvline(6,1+10,'|',9);
	mvvline(6,1+15,'|',9);
	mvvline(6,1+20,'|',9);
	//mvhline(7,7,ACS_HLINE,7);
	mvhline(5,2,'-',19);
	mvhline(7,2,'-',19);
	mvhline(9,2,'-',19);
	mvhline(11,2,'-',19);
	mvhline(13,2,'-',19);
	mvhline(15,2,'-',19);
	mvprintw(6+x*2,2+y*5,"%d",password[x][y]);
	getch();
	endwin();
	return EXIT_SUCCESS;
}
/*
Last fall Seneca closed one campus https://www.cbc.ca/news/canada/toronto/seneca-closure-1.7364762

Sheridan reducing its workforce by up to 30% — or 700 full-time equivalent personnel — through layoffs and voluntary incentive programs for retirements and departures.
https://www.reddit.com/r/ontario/comments/1h0jxeu/sheridan_college_announces_major_program_cuts_and/

Mohawk College says it expects to lay off between 200 and 400 employees
https://www.thespec.com/news/hamilton-region/mohawk-college-set-to-axe-hundreds-of-employees-starting-in-early-december/article_71e01a43-041d-58a0-bbce-48e7e03fe533.html
*/
