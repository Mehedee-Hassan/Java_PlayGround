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

        if (cnt ==0){
            printf("SIMPLE TEST PURPOSE CONSOLE ,USE FOR TRYING NEW COMMAND EG.COLLECTION EXPERIMENT \nONLY CAN COMPILE AND RUN CODES THAT ARE WRITTEN INSIDE OF A JAVA METHOD\n");
        
        }

        if (cnt == 0 | cnt == 10){
            printf("Press CTRL+C or CTRL+z to exit.\n");
            // show this message after 9 steps 
            
            cnt = 1;
        }


        characters = getline(&buffer,&buffersize,stdin);
                       
        """
        TODO:
        1. find a way to write single line with edit capability 
            a. now if we press arrow key ,console catch the chracter and prints
            b. cannot edit properly
            c. SOLUTION : catch all the chracters and only print the alpha neumeric characters
            d. TODO: find a way to navigate

        2. create class file [eg. TEMPCLASS.java] and write class [TEMPCLASS{}]
        3. add a method eg. run() to the class [TEMPCLASS{}]
        3. append current line\'s code inside the method [run()] 
        4. if enter pressed compile and run the class file and show the result
        """
        // getchar(); // hold the screen 


        printf("ok - %s",buffer);
        cnt ++;
    }

   return execl ("/bin/pwd", "pwd", NULL);

}
