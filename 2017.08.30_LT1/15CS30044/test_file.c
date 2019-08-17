int main()
{
	// code start
	int i=0,j=11;
	float k=0.1,l=0.2;
	for(i=0;i<10;i++);
	for(j=10;0<j;j--);
	if(i<0&&j<2)
		for(i=0,j=0;i<20;i++,j--);
	if(0<i||2<j)
		for(i=0,j=20;10<j;--j,i++);
	i=0;
	while(i<10){i++;}
	j=10;
	while(0<j){--j;}
	switch(i)
	{
		case 0: printf("i=0");
		default: printf("i!=0");
	}
	i=i+2;
	j=3*j;
	Matrix m=[0,0,0;0,0,0;0,0,0],n=[i,i,i;i,i,i;i,i,i];
	return 0;
}
