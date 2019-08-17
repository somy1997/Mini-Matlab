#define BUFF 20 // filename: printInt.c++
#define ERR 1
#define OK 0

int printStr(char *str)
{
	int bytes,i=0,len=0;
	char buff[BUFF];
	do
	{
		bytes = 0;
		while(bytes<BUFF && str[i]!='\0')
		{
			buff[bytes++]=str[i++];
		}
		if(bytes<BUFF && str[i]=='\0')
		{
			buff[bytes++]='\n';
		}
		__asm__ __volatile__ (
			"movl $1, %%eax \n\t"
			"movq $1, %%rdi \n\t"
			"syscall \n\t"
			:
			:"S"(buff), "d"(bytes)
			:"eax","rdi"
		) ; // $4: write, $1: on stdin
		len+=bytes;
	}while(str[i]!='\0');
	return len;
}

int readInt(int *n)
{
	char *buff;
	int bytes=16,i=0,num=0,neg=0,flag=0;
	__asm__ __volatile__ (
			"movl $0, %%eax \n\t"
			"movq $1, %%rdi \n\t"
			"syscall \n\t"
			:"=S"(buff)
			:"d"(bytes)
			:"eax","rdi"
		) ; // $4: write, $1: on stdin
	//printf("%s%d%d",buff,(int)buff[i],(int)'\n');
	if(buff[i]=='-' && buff[i]!='\n')
	{
		neg = 1;
		i++;
	}
	while(buff[i]!='\n')
	{
		char c = buff[i];
		int d = (int)c-'0';
		//printf("character:%c  digit:%d",c,d);
		if(d<0 || d>9)
			return ERR;
		num*=10;
		num+=d;
		flag=1;
		i++;
	}
	if(flag==0)
	{
		return ERR;
	}
	if(neg)
		num=-num;
	*n=num;
	return OK;
}

int printInt(int n) 
{
	char buff[BUFF], zero='0';
	int i=0, j, k, bytes;
	if(n == 0) buff[i++]=zero;
	else{
		if(n < 0) {
		buff[i++]='-';
		n = -n;
		}
		while(n){
		int dig = n%10;
		buff[i++] = (char)(zero+dig);
		n /= 10;
		}
		if(buff[0] == '-') j = 1;
		else j = 0;
		k=i-1;
		while(j<k){
			char temp=buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}
	}
	buff[i]='\n';
	bytes = i+1;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
		:"eax","rdi"
	) ; // $4: write, $1: on stdin
	return bytes;
}

int readFlt(float *f)
{
	char *buff;
	int bytes=16,i=0,neg=0,flag=0;
	float num=0.0,e=1.0;
	__asm__ __volatile__ (
			"movl $0, %%eax \n\t"
			"movq $1, %%rdi \n\t"
			"syscall \n\t"
			:"=S"(buff)
			:"d"(bytes)
			:"eax","rdi"
		) ; // $4: write, $1: on stdin
	//printf("%s%d%d",buff,(int)buff[i],(int)'\n');
	if(buff[i]=='-' && buff[i]!='\n')
	{
		neg = 1;
		i++;
	}
	while(buff[i]!='\n')
	{
		char c = buff[i];
		if(c=='.')
		{
			i++;
			break;
		}
		int d = (int)c-'0';
		//printf("character:%c  digit:%d",c,d);
		if(d<0 || d>9)
			return ERR;
		num*=10;
		num+=d;
		flag=1;
		i++;
	}
	while(buff[i]!='\n')
	{
		char c = buff[i];
		int d = (int)c-'0';
		//printf("character:%c  digit:%d",c,d);
		if(d<0 || d>9)
			return ERR;
		e/=10.0;
		num+=d*e;
		flag=1;
		i++;
	}
	if(flag==0)
	{
		return ERR;
	}
	if(neg)
		num=-num;
	*f=num;
	return OK;
}


int printFlt(float f) 
{
	char buff[BUFF], zero='0';
	int i=0, j, bytes, pow, d;
	double temp;
	if(f == 0.0)
	{ 
		buff[i++]=zero;
		buff[i++]='.';
		for(j=0;j<6;j++)
			buff[i++]=zero;
	}
	else
	{
		if(f < 0) 
		{
			buff[i++]='-';
			f = -f;
		}
		temp = (double)f;
		pow=0;
		while(temp>=1.0)
		{
			temp/=10.0;
			pow++;
		}
		if(pow==0)
			buff[i++]='0';
		for(;pow>0;pow--)
		{
			temp*=10;
			d=(int)temp;
			temp-=(float)d;
			buff[i++]=d+'0';
		}
		buff[i++]='.';
		for(j=0;j<6;j++)
		{
			temp*=10.0;
			d=(int)temp;
			temp-=(float)d;
			buff[i++]=d+'0';
		}
	}
	buff[i]='\n';
	bytes = i+1;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
		:"eax","rdi"
	) ; // $4: write, $1: on stdin
	return bytes;
}
