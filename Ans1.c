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

    fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File succesfully opened with FD : %d\n",fd);

	}
    return 0;
}