#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
  char *buffer = malloc(strlen(argv[1]));
  
  strcpy(buffer, argv[1]);

  printf("Hello, %s!", buffer);

}