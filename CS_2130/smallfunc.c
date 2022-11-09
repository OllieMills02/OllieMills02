#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void capitalize(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return;
}
void fibarray(unsigned char *dest, unsigned num)
{
	if (sizeof(dest) > 1)
	{
		dest[0] = 1;
		dest[1] = 1;
	}
	num -= 1;
	int i = 2;
	while (num > 0)
	{
		dest[i] = dest[i - 1] + dest[i - 2];
		i++;
		num -= 1;
	}

	return;
}

long recpow(long x, unsigned char e)
{
	if (e == 0)
	{

		x = 1;
		return x;
	}
	else
	{
		x = x * recpow(x, e - 1);
		return x;
	}
}

//
//
//
static bool isPrime(int x)
{
	if (x <= 1)
		return false;
	if (x <= 3)
		return true;

	if (x % 2 == 0 || x % 3 == 0)
		return false;
	int i;
	for (i = 5; i * i < x; i += 6)
	{
		if (x % i == 0 || x % (i + 2) == 0)
			return false;
	}
	return true;
}

unsigned long nextprime(unsigned long x)
{
	if (x <= 1)
		return 2;
	unsigned long prime = x;
	bool found = false;

	while (!found)
	{
		prime++;
		if (isPrime(prime))
		{
			found = true;
		}
	}
	return prime;
}

void reverse(int *arr, unsigned length)
{
	int i;
	int y = 0;
	int temp[1];
	for (i = length - 1; i >= y; i--)
	{
		temp[0] = arr[i];
		arr[i] = arr[y];
		arr[y] = temp[0];
		y++;
	}
	// free(int i);
	// free(int y);
	// free(int temp);
}

int nondup(int *arr, unsigned length)
{
	int i;

	int count = 0;

	for (i = 0; i < length; i++)
	{
		int y;
		for (y = 0; y < length + 1; y++)
		{

			if (i != y && arr[i] == arr[y])
			{
				break;
			}
			else if (y == length)
			{
				return arr[i];
			}
		}
	}
	return 0;
}
int main()
{
	 struct student
	{
		/* data */
		float score;
		char grades;
	};
	
	  student.score = {1.7, 57.2};
	  student.grades = {F, A};
	 
	student{{score[0], grades[0]}}
	pust(student[0]);
	int x[] = {28, 12, 8, 0, 0, 28, 8};
	printf("%d\n", nondup(x, 7));
	printf("%d\n", nondup(x + 2, 5));
	char dest[100];
	fibarray(dest, 64);
	for (int i = 0; i < 64; i++)
	{
		printf("%d ", dest[i], " ");
	}
	return 0;
}
