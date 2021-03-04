#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define NUMEL 10
void main(void)
{
	int nums[NUMEL] = {5, 10, 22, 32, 45, 67, 73, 98, 99, 101};
	int item, location;
	int linearsearch(int [], int, int);
	
	printf("Enter the item you are searching for: ");
	scanf("%d", &item);
	
	location = linearsearch(nums, NUMEL, item);

	if (location > -1)
	printf("The item was found at index location %d\n", location);
	else
	printf("The item was not found in the list.\n");

}

linearsearch(int list[], int size, int key)
{
	int index, found, i;

	index = -1;
	found = FALSE;
	i = 0;
	while (i < size && !found) /* Not found has ! logical operator to assign a TRUE value to the expression */
				   /* So the loop begins as the statement being TRUE which is same as ! FALSE */
				   /* When key is located, found is given TRUE value which turns into a FALSE */
			   	   /* Hence ending the loop */
	{
		if (list[i] == key)
		{
		found = TRUE;
		index = i;
		}
	i++;
	}
	return(index);
}
