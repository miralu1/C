#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define NUMEL 10
main()
{
	int num[NUMEL] = {5, 10, 22, 32, 45, 67, 73, 98, 99, 101};
	int item, location;
	int binarysearch(int [], int, int);
	
	printf("Enter the item you are searching for: ");
	scanf("%d", &item);
	
	location = binarysearch(num, NUMEL, item);
	
	if (location > -1)
		printf("The item was found at index location %d\n", location);
	else
		printf("The item was not found in the list.\n");
}

int binarysearch(int list[], int size, int key)
{
	int index, found, left, right, midpt;
	
	index = -1;
	found = FALSE;
	left = 0;
	right = size -1;
	while (left <= right && !found)
	{
	midpt = (int) ((left + right) / 2);
	if (key == list[midpt])
		{
		found = TRUE;
		index = midpt;
		}
	else if (key > list[midpt])
		left = midpt + 1; /* This searches the right handside of the midpt */
				  /* By adding 1 and going till the end of list until not found */
		
	else
		right = midpt - 1; /* This searches to the left of midpn by subtracting 1 from midpt */
			
	}
	return(index);
}
