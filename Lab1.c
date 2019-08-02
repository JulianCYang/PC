#include <stdio.h>

int main() {
	int array[3][3];

	for(int i=0; i<3; i++) {
      		for(int j=0;j<3;j++) {
         		printf("Enter value for disp[%d][%d]:", i, j);
         		scanf("%d", &array[i][j]);
      		}
   	}
	
	for(int i=0; i<3; i++) {
      		for(int j=0;j<3;j++) {
         		printf("%d ", array[i][j]);
         		if(j==2){
            			printf("\n");
         		}
      		}
   	}

	int *ptr = &array[0][0];

	for (int i = 0; i < 9; i++) {
    		printf("%d ", *(ptr + i));
  	}


	for (int i = 0; i < 3; i++ ) {
      		for (int j = 0; j < 3; j++ ) {
         		printf("array[%d][%d] = %d\n", i,j, array[j][i] );
      		}
   	}
	
	return 0;
}
