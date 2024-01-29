#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "string.h"

// Displays a given message. Lines is the number of lines displayed.
void punition(int lines) 
{
	for (int i = 0 ; i < lines ; i++)
	{
		printf("Le silence est une absence totale de bruit.\n");
	}
}

// Multiplies number by 3.
int triple(int number) // Number is multiplied by 3.
{
	return number * 3;
}

// Modifies variables outside the function thanks to the pointers.
void pointer(int var1, int var2, int *pointer1, int *pointer2)
{
	*pointer1 = var1 * 10;
	*pointer2 = var2 * 10;
	printf("\nvar1 = %d\n", var1);
	printf("\nvar2 = %d\n", var2);
	printf("\npointer1 	= %d\n", *pointer1);
	printf("\npointer2 = %d\n", *pointer2);
}

// Printing an array.
void print_array(int array[], int array_size)
{
	for (int i = 0 ; i < array_size ; i++)
	{
		printf("\narray[%d] = %d\n", i, array[i]); // print values
		// printf("\narray[%d] = %p\n", i, array); // print adress
	} 
}
// Printing an array.
void new_print_array(int array[], int array_size)
{
	for (int i = 0 ; i < array_size ; i++)
	{
		printf("\nnew_array[%d] = %d\n", i, array[i]); // print values
		// printf("\narray[%d] = %p\n", i, array); // print adress
	} 
}

// Sum of numbers of an array.
int sum_array(int array[], int array_size)
{
	int sum = 0;
	for (int i = 0 ; i < array_size ; i++)
	{
		sum += array[i];
	}
	return sum;
}

// Average array.
double average_array(int array[], double array_size)
{
	double sum = sum_array(array, array_size);
	return sum / array_size;
}

// Copy array.
void copy_array(int array[], int array_size, int copied_array[])
{
	for (int i = 0 ; i < array_size ; i++)
	{
		copied_array[i] = array[i];
	}
}

// Set a max value to an array, change to 0 any overcoming.
void max_array(int array[], int array_size, int max)
{
	for (int i = 0 ; i < array_size ; i++)
	{
		if(array[i] > max)
		{
			array[i] = 0;
		}
	}
}

int get_highest_value(int array[], int array_size)
{
	int highest_value = 0;
	for (int i = 0 ; i < array_size ; i++)
	{
		if(array[i] > highest_value)
		{
			highest_value = array[i];
		}
	}
	return highest_value;
}

int get_highest_value_case(int array[], int array_size)
{
	int highest_value = array[0];
	int highest_value_case = 0;
	for (int i = 0 ; i < array_size ; i++)
	{
		if(array[i] > highest_value)
		{
			highest_value = array[i];
			highest_value_case = i;
		}
	}
	return highest_value_case;
}

int get_lowest_value(int array[], int array_size)
{
	int lowest_value = array[0];
	for (int i = 0 ; i < array_size ; i++)
	{
		if(array[i] < lowest_value)
		{
			lowest_value = array[i];
		}
	}
	return lowest_value;
}

int get_lowest_value_case(int array[], int array_size)
{
	int lowest_value = array[0];
	int lowest_value_case = 0;
	for (int i = 0 ; i < array_size ; i++)
	{
		if(array[i] < lowest_value)
		{
			lowest_value = array[i];
			lowest_value_case = i;
		}
	}
	return lowest_value_case;
}

void sort_array_ascending_order(int array[], int array_size, int copied_array[])
{
	copy_array(array, array_size, copied_array);
	int highest_value = get_highest_value(copied_array, array_size);
	int lowest_value, lowest_value_case;

	for (int i = 0 ; i < array_size ; i++)
	{
		lowest_value = get_lowest_value(copied_array, array_size);
		lowest_value_case = get_lowest_value_case(copied_array, 6);
		array[i] = lowest_value;
		copied_array[lowest_value_case] = highest_value;
	}
}

void sort_array_descending_order(int array[], int array_size, int copied_array[])
{
	copy_array(array, array_size, copied_array);
	int lowest_value = get_lowest_value(copied_array, array_size);
	int highest_value, highest_value_case;

	for (int i = 0 ; i < array_size ; i++)
	{
		highest_value = get_highest_value(copied_array, array_size);
		highest_value_case = get_highest_value_case(copied_array, 6);
		array[i] = highest_value;
		copied_array[highest_value_case] = lowest_value;
	}
}

void strcmp_print(char string1[], char string2[])
{
	if (strcmp(string1, string2) == 0)
	{
		printf("\nThe strings are identical.\n");
	}
	else
	{
		printf("\nThe strings are different.\n");
	}
}

void str_char_and_adresses_print(char string[]) 
{
	int count = 0;
	while (string[count] != '\0')
	{
		printf("char = %c", string[count]);
		printf("\tchar_adress = %p\n", &string[count]);
		count++;
	}
}

void set_Coordinates(Coordinates *point, int x, int y)
{
	// (*point).x = x;
	// (*point).y = y;
	point->x = x;
	point->y = y;
}