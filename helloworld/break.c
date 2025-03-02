// With break statement, it gets outta the block while without it the default block is entered also.

#include <stdio.h>
#include <stdbool.h>

void switch_toast(int toast);

int main()
{
	switch_toast(3);
	return 0;
}

void switch_toast(int toast) {
	switch(toast) {
		case 1 : printf("1\n"); break;
		case 2 : printf("2\n"); break;
		default : printf("default"); break;
	}
	// break brings here
}
