////////////////////////////////////////////////////
// one-dimensional array
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[5] = "books";// initialized by the word "books"。
	char b[] = {'b', 'o', 'o', 'k','s','\0'};
    char c[] = "未来学院21级" ; // Assigned by the string "未来学院21级"。
	int size = strlen(a);
	printf("the len is:%d\n",size);

	// output the array by its element.
	int i;
	printf("the array is \n");
	for (i = 0; i < 5; i ++)
		printf("%c\t", a[i]);
	printf("\n");
	
	puts (b); // output the array b.

	puts (c); // output the array c.

	// output the array by its name.
	printf("the array is \n");
	printf("%s\n", a);
	puts (b);  // output the array b.
	puts (c);  // output the array c.
    return 0;
}
