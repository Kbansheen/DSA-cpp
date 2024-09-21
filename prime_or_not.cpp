bool isPrime(int n)
{

	int cnt = 0;

	if (n <= 1) return false; // 1 is not a prime number
    if (n == 2) return true;
	for(int i =1; i*i <= n; i++)
	{
		if(n%i == 0)
		{
			cnt++;

            if (i != n / i)
		  {
               cnt++;
          }
        }

        if (cnt > 2)
        break;
        }

        if (cnt == 2)
        return true;
        else
        return false;
}

void check(int n)
{
	bool x = isPrime(n);
	if(x)
	cout<<"YES";
	else
	cout<<"NO";
}
