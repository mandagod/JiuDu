#include <stdio.h>

/*int main()
{
	int n1;
	int n2;
	int sum1 = 0;
    int sum2 = 0;

	while(scanf("%d %d", &n1, &n2) != EOF)
	{	
		sum1 = 0;
		sum2 = 0;
		
		while(n1 != 0)
		{
			sum1 += n1 % 10;
			n1 /= 10;
        }
		
		while(n2 != 0)
		{
			sum2 += n2 % 10;
			n2 /= 10;
        }	

		printf("%d\n", sum1 * sum2);
	}

	return 0;
}*/
#include <iostream>
using namespace std;

int SumOfDigs(int n)
{
	if (0 == n)
		return 0;
	else
		return (n % 10) + SumOfDigs(n/10);
}

int main()
{
	int n1;
	int n2;
	
	while(cin >> n1 >> n2)
	{
		cout << SumOfDigs(n1) * SumOfDigs(n2) << endl;
	}
	
	return 0;
}


