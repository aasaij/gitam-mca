int isvowel(char ch){
	return (ch == 'a' || ch =='e' || ch == 'i'|| ch == 'o'|| ch == 'u'
		|| ch == 'A' || ch == 'E' || ch == 'U' || ch == 'I' || ch == 'O');
}
int isodd(int n){
	return n%2;
}
int isprime(int n){
	if (n == 1 )
		return 0;
	else if (n > 3 &&(n %2==0 || n % 3 == 0))
		return 0;
	else{
		for (int i = 5; i*i<=n; i+=6){
			if(n%i == 0 || n % (i+2)==0)
				return 0;
		}
		return 1;
	}
}
