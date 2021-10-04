/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	int i, n = testcase, count = 0;
	for (int j = 2; j < testcase; ++j)
	{
		count = 0;
		for (i = 2; i <= sqrt(j); i++)
		{
			if (j % i == 0)
				count++;
		}
		if (count == 0)
			printf("la nguyen to %d\n", j);
		/**else
			printf(" khong la so nguyen to");**/
	}
	return 0;
}
