#include<stdio.h>

void len(int arr[], int total_size)
{
	int length = total_size/sizeof arr[0];
	
	printf("Length of Array is %d\n", length);
}

int main()
{
	int arr[]={9,7,8,6,5,4,6,7,8,9,1,2,3,4,5};
	
	len(arr,  sizeof(arr));
	
	return 0;
}
