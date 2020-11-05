#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    int byte = 8;
    unsigned char rand[byte]; 
    int file = open("/dev/random",O_RDONLY);
    int byte1 = 8;
    unsigned char rand1[byte1]; 
    int file1 = open("/dev/urandom",O_RDONLY);

    if(file < 0){
        printf("error");
    }
    read(file, rand, byte);
    printf("/dev/random: ");
    for(int i = 0; i < byte; i++){
        printf("%d", rand[i]);
    }
    printf("\n");
    close(file);

   
    if(file1 < 0){
        printf("error");
    }
    read(file1, rand1, byte1);
    printf("/dev/urandom: ");
    for(int i = 0; i < byte; i++){
        printf("%d", rand1[i]);
    }
    printf("\n");
}



