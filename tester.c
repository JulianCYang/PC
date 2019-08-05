#include <stdio.h>
#include <time.h>

int main() 
{ 
	int n;
	printf("Enter in the dimension of the array: ");
	scanf("%d",&n);

    int i, j, count,temp; 
  
    int *arr[n]; 
    for (int i=0; i<n; i++) 
         arr[i] = (int *)malloc(n * sizeof(int)); 
  
    count = 0; 
    for (int i = 0; i <  n; i++) 
      for (int j = 0; j < n; j++) 
         arr[i][j] = count++;
  
  
  	clock_t t;
	t = clock();
    for (int i = 0; i <  n; i++) 
      for (int j = 0; j < n; j++) 
         //printf("%d ", arr[i][j]); 
         temp = arr[i][j];
  	t = clock()-t;
  	double time_taken = ((double)t)/CLOCKS_PER_SEC;
  	printf("it took %f seconds to access the array row wise\n", time_taken);
  
  
  	clock_t other;
	other = clock();
    for ( int i = 0; i <  n; i++) 
      for (int j = 0; j < n; j++) 
         //printf("%d ", arr[j][i]); 
         temp = arr[j][i];
   	other = clock()-other;
   	double time_taken2 = ((double)other)/CLOCKS_PER_SEC;
	printf("it took %f seconds to access the array column wise", time_taken2);

  

    /* Code for further processing and free the  
      dynamically allocated memory */
  
   return 0; 
} 
