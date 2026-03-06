#include <stdio.h>

int main() {
	
	printf("TO TERMINATE THE ARRAY ENTER -1 \nEnter the elements in the array:\n");
	
    int arr[1000],i;
    for ( i = 0; i < 1000; i++) {
    	printf("");
        scanf("%d", &arr[i]);
        if(arr[i]==-1)
        break;

		}
		 printf("\nThe number of elements in the array is: %d\n", i);
    }
