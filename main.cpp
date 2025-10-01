#include<stdlib.h>
#include<stdio.h>
int main(int argc, char** argv) { 
    char* str = (char*)malloc(sizeof(char) * SIZE); 
    printf("Введите своё имя:\n"); 
    scanf("%s", str); 
    printf("Привет, %s", str); 
    return 0; 
}
