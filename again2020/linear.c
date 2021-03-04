#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define NUMEL 10

void main(void)
{
	int num[NUMEL] = {5, 10, 15, 22, 32, 34, 45, 67, 78, 99};
	int item, location;
	int linearsearch(int [], int, int); /* prototype */
	
	printf("Enter the item you are searching for: ");
	scanf("%d", &item);
	
	location = linearsearch(num, NUMEL, item);

	if (location > -1) /* Index values start at 0 that's why it's stated at -1 */
		printf("The item was found at index location %d\n", location);
	else
		printf("The item was not found in the list.\n");

}

int linearsearch(int list[], int size, int key)
{

	int index, found, i;

	index = -1;
	found = FALSE;
	i = 0;

	while(i < size && !found)
		{
			if (list[i] == key)
		{		found = TRUE;
				index = i;
		}
		i++;
		}
	return(index);

}
