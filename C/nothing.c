int main()
{
	clock_t begin = clock();
	printf("%d\n", ft_is_prime(40));
	clock_t end = clock(); 
	double time_spent = (double)(end - begin);
	printf("%lf\n", time_spent / CLOCKS_PER_SEC);
}