#include <stdio.h>  
  
void  main()  
{  
    int arr[15]; 
    int i;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input of 15 elements in the array :\n");  
    for(i=0; i<15; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<15; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}
