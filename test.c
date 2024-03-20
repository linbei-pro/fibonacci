

#include<stdio.h>

#define N 1000
int fibonacci1(int n)//普通的递归，有重复子问题重复计算
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci1(n - 1) + fibonacci1(n - 2);


}

int  fibonacci2(int n) //记忆性递归
{
	int f[N] = { 0 };
	if (n == 1 || n == 2)
		return 1;
	else
		if (f[n] == 0)
		{
			f[n] = fibonacci2(n - 1) + fibonacci2(n - 2);
			return f[n];
		}
		else
			return f[n];
}

int main() {
	int n = 0;
	scanf_s("%d", &n);

	printf("%d\n", fibonacci1(n));
	printf("=========\n");
	printf("%d", fibonacci2(n));



	return 0;
}