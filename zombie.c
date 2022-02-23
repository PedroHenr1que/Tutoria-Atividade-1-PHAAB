#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
        
        int pid = fork();

        if (pid > 0) { //if process is a parent
                sleep(13);
        
                
        } else if (pid == 0) { //if process is a child

                printf("\nZombie Process Created Successfully - for 13 seconds!\n");
                exit(0);
        }

        return 0;
}