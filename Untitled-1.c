#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <limits.h>

#define PAGESIZE 4096

int main(){

    uint8_t* first = mmap(NULL, PAGESIZE, PORT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);

    uint8_t* second = mmap(NULL, PAGESIZE, PORT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);


    printf("First : %p\n",first);
    printf("Second : %p\n",second);
}