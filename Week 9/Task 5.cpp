#include <stdio.h>

int binarySearch(int arr[],int a,int b) {
    int left = 0, right =a-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == b) {
            return mid;
        } else if (arr[mid] < b) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int size,target,i;
int main()
{
	printf("Enter size of array :");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements in the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched in array :");
	scanf("%d",&target);
	if(binarySearch(arr,size,target)==-1)
	{
		printf("NOT FOUND!");
	}
	else
	{
		printf("FOUND");
	}
	
}


