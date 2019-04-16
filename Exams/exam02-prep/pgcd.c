#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("\n");
		return 0;
	}
	else
	{
		int first = atoi(argv[1]);
		int second = atoi(argv[2]);
		while (first > 0 && second > 0)
		{
			if (first > second)
				first -= second;
			else if (second > first)
				second -= first;
		}
		printf("%d", first);
	}
}
