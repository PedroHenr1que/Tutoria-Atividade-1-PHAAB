#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

        for (int i = 1; i < 15; i++)
        {       
                if (i < 14)
                {
                        printf("%d seconds\n\n", i);

                } else {
                        printf("%d seconds - There is no more zombie process\n\n", i);
                }
                
                
                system("ps -l");
                sleep(1);

        }
        
}