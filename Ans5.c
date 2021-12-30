#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd =0;
	char Arr[]= "Hello";
	char fname[20];
    
    printf("Enter file name\n");
    scanf("%s",fname);

	fd = open(fname,O_RDWR | O_APPEND);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

    write(fd,Arr,5);

    close(fd);
    return 0;
	

}