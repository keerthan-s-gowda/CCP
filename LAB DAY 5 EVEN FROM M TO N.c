#include <stdio.h>
int main()
{
    int i,M,N;
    printf("Enter values of M and N\n");
    scanf("%d %d", &M,&N);
    printf("Even numbers in from %d to %d are:\n", M, N);
    for (int i = M%2==0 ? M : M+1; i <= N; i+=2)
        {
	printf("%d", i);
	}
	return 0;
}
