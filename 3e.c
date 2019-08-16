#include<stdio.h>                                                       
#define N 5                                                                     
                                                                                
void main()                                                                     
{                                                                               
 int i, j, n;
 float median, a[N], temp;                                                      
 printf("Enter number of elements:\n");                                         
 scanf("%d", &n);                                                               
 printf("Input %d values \n", n);                                               
 for(i=0; i<n; i++)                                                             
 {                                                                              
  scanf("%f", &a[i]);                                                           
 }                                                                              
                                                                                
temp =0;                                                                       
for(i=0;i<n-1;i++)                                                             
 {                                                                              
   for(j=0; j<n-i-1; j++)                                                       
   {                                                                            
    if(a[j]<a[j+1])                                                             
    {                                                                           
     temp = a[j];                                                               
     a[j] = a[j+1];                                                             
     a[j+1] = temp;                                                             
    }                                                                           
   }                                                                            
 }
 if( n%2 == 0)
 median = (a[(n/2)-1]+a[(n/2)])/2.0;                                           
 else                                                                           
  median = a[(n/2)];
  for(i=0; i<n; i++)                                                             
  printf("%f\t", a[i]);                                                         
                                                                                
 printf("\nMedian is %f\n", median);                                            
}           
