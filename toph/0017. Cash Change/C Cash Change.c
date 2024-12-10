#include <stdio.h>

int main()
{
	int N, note1, note5, note10, note50, note100, note500;

	note1 = note5 = note10 = note50 = note100 = note500 = 0;

	scanf("%d", &N);

	if (N >= 500)
	{
		note500 = N / 500;
		N -= note500 * 500;
	}
	if (N >= 100)
	{
		note100 = N / 100;
		N -= note100 * 100;
	}
	if (N >= 50)
	{
		note50 = N / 50;
		N -= note50 * 50;
	}

	if (N >= 10)
	{
		note10 = N / 10;
		N -= note10 * 10;
	}
	if (N >= 5)
	{
		note5 = N / 5;
		N -= note5 * 5;
	}
	if (N >= 1)
	{
		note1 = N;
	}

	int arr[200];
	int arrIndex = 0;
	while (note1--)
	{
		arr[arrIndex] = 1;
		arrIndex++;
	}

	while (note5--)
	{
		arr[arrIndex] = 5;
		arrIndex++;
	}

	while (note10--)
	{
		arr[arrIndex] = 10;
		arrIndex++;
	}

	while (note50--)
	{
		arr[arrIndex] = 50;
		arrIndex++;
	}

	while (note100--)
	{
		arr[arrIndex] = 100;
		arrIndex++;
	}

	while (note500--)
	{
		arr[arrIndex] = 500;
		arrIndex++;
	}
	int i;
	for (i = 0; i < arrIndex; i++)
	{
		printf("%d", arr[i]);
		if (i < (arrIndex - 1)) // last er bar baade shob bar e space print hobe
		{
			printf(" ");
		}
	}

	return 0;
}