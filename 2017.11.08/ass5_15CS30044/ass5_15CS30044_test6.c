int gen(int *a)
{
	*a=78;
	return 0;
}
int main()
{
	int *p;
	int i=5;
	p=&i;
	*p=6;
	printi(i);
	prints("\n");
	int *q=p;
	*q=9;
	printi(i);
	prints("\n");
	char c='A';
	char *d;
	d=&c;
	*d='k';
	if(c=='k')
	{
		prints("YES\n");
	}
	else
	{
		prints("NO\n");
	}
	gen(p);
	printi(i);
	prints("\n");
	
	return 0;
}
