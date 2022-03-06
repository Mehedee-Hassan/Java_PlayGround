#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>

int main (void) {
    int cnt = 0;
    while(1){

        char *buffer;
        size_t buffersize = 2048;
        size_t characters;

        buffer = (char *) malloc(buffersize * sizeof(char)); //constant size * char number of chars 

        if (buffer == NULL){
            printf("Could not allocate memory");
            exit(1);
        }



        if (cnt == 0 | cnt == 10){
            printf("Press CTRL+C or CTRL+z to exit.\n");
            // show this message after 9 steps 

            cnt = 1;
        }


        characters = getline(&buffer,&buffersize,stdin);

        // getchar(); // hold the screen 


        printf("ok - %s",buffer);
        cnt ++;
    }

   return execl ("/bin/pwd", "pwd", NULL);

}
