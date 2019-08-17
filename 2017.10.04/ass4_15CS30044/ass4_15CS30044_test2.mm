//functions and conditional expression checking
double func(int c, int d)
{
	double e = c*d;
	return e;
}

void main()
{
	int a=5, b=6;
	double c = func(a,b);
	int d=c>5?a:b;
	if(d==a)
		a = d++;
	if(d<b)
		d = a;
	else
		d=b;
}
