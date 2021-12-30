#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd =0;
	char Fname[30];
	
    printf("Enter file name\n");
	scanf("%S",Fname);

    fd = creat(Fname,0777);

	if(fd == -1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	else
	{
		printf("File succesfully created");

	}
    return 0;
}