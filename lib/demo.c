#include <stdio.h>
#include <string.h>

int main() {
  printf("Simple WASM is working\n");
  return 1;
}

int getNum() {
  return 2143;
}

int getDoubleNum(int n) {
  return n*2;
}

char greeting[50];
char * greet(char * name) {
  if(strlen(name) > 40){
    return "Name too long";
  }
  strcpy(greeting, "Hello ");
  return strcat(greeting, name);
}

