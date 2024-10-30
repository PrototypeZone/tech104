/** TECH 104 Midterm Grade calculation for posting on myHumber
 * @since 2024-10-30
 */

// Includes
#include <stdio.h>
#include <stdlib.h>

/** main function
 * @since 2024-10-30
 * @param void
 * @return int exit status
 */
int main (void)
{
	float midtermGrade = 0;
	// 5 labs 4% each
	float lab01grade=0; // /4
	float lab02grade=0; // /4
	float lab03grade=0; // /4
	float lab04grade=0; // /4
	float lab05grade=0; // /4
	float midtermLabMark=lab01grade+lab02grade+lab03grade+lab04grade+lab05grade;
	// midterm exam 15%
	float midtermExamMark=0; // /15
	if(midtermLabMark<10 || midtermExamMark<7.5)
	{
		if (midtermLabMark/20<midtermExamMark/15)
		{
			midtermGrade=midtermLabMark/20*100;
		}
		else
		{
			midtermGrade=midtermExamMark/15*100;
		}
	}
	else
	{
		midtermGrade=(midtermLabMark+midtermExamMark)/(20+15)*100;
	}
	fprintf(stdout,"Midterm Grade on myHumber = %3.0f\n");
	return EXIT_SUCCESS;
}
