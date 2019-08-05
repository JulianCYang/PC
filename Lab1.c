#include <stdio.h>
#include <time.h>

int main() {
	int n;
	printf("Enter in the dimension of the array.");
	scanf("%d",&n);
	
	int array[n][n];

	for(int i=0; i<n; i++) {
      		for(int j=0;j<n;j++) {
         		printf("Enter value for disp[%d][%d]:", i, j);
         		//scanf("%d", &array[i][j]);
         		array[i][j] = 0;
      		}
   	}
	
	for(int i=0; i<n; i++) {
      		for(int j=0;j<n;j++) {
         		printf("%d ", array[i][j]);
         		if(j==n-1){
            			printf("\n");
         		}
      		}
   	}
	clock_t t;
	t = clock();
	int *ptr = &array[0][0];

	for (int i = 0; i < n*n; i++) {
    		printf("%d ", *(ptr + i));
  	}
  	t = clock()-t;
  	double time_taken = ((double)t)/CLOCKS_PER_SEC;
  	printf("it took %f seconds to execute", time_taken);

	clock_t other;
	other = clock();
	for (int i = 0; i < n; i++ ) {
      		for (int j = 0; j < n; j++ ) {
         		printf("array[%d][%d] = %d\n", i,j, array[j][i] );
      		}
   	}
   	other = clock()-other;
   	double time_taken2 = ((double)other)/CLOCKS_PER_SEC;
	printf("it took %f seconds to execute", time_taken);
	
	return 0;
}
