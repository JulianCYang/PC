#include <omp.h>
#include <stdio.h>


 int printHello()
{
    int i;
    int numThreads;
    printf("Enter in the number of threads you would like: ");
    scanf("%d", &numThreads);

#pragma omp parallel for default(none) num_threads(numThreads) private(i)
    for (i = 0; i < 100; i++)
    {
        int tid = omp_get_thread_num();
        printf("Hello world from omp thread %d\n", tid);
    }
    return -1;
}

int main()
{
    printHello();

  return 0;
}
