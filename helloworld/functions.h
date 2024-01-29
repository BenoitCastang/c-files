#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

void punition(int lines);
int triple(int number);
void pointer(int var1, int var2, int *pointer1, int *pointer2);
void print_array(int *array, int array_size);
void new_print_array(int *array, int array_size);
int sum_array(int array[], int array_size);
double average_array(int array[], double array_size);
void copy_array(int array[], int array_size, int copy_array[]);
void max_array(int array[], int array_size, int max);
int get_highest_value(int array[], int array_size);
int get_lowest_value(int array[], int array_size);
int get_lowest_value_case(int array[], int array_size);
void sort_array(int array[], int array_size, int copied_array[]);
void sort_array_ascending_order(int array[], int array_size, int copied_array[]);
void sort_array_descending_order(int array[], int array_size, int copied_array[]);
void strcmp_print(char string1[], char string2[]);
void str_char_and_adresses_print(char string[]);

typedef struct Coordinates Coordinates;
struct Coordinates
{
    int x;
    int y;
};

void set_Coordinates(Coordinates *point, int x, int y);

typedef struct Person Person;
struct Person
{
    char firstname[100];
    char lastname[100];
};

typedef enum Volume Volume;
enum Volume
{
    // LOW, MIDDLE, HIGH
    LOW = 10, MIDDLE = 50, HIGH = 100
};


#endif