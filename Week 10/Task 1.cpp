#include<stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

main()
{
	int s,i;
	printf("Enter size of array = ");
	scanf("%d", &s);
	int arr[s];
	printf("Enter Elements of the array = \n");
	for (i = 0; i < s; i++)
	{
		scanf("%d", &arr[i] );
	}
	
	sortArray(arr, s);
	
	printf("Ascending = ");
	for (i = 0; i < s; i++)
	{
		printf("%d ", arr[i]);
	}
}
