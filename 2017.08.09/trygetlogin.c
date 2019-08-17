#include<unistd.h>
#include<stdio.h>

int main()
{
	printf("The username is going to be printed below.\n");
	printf("username : %s\n",getlogin());
}
