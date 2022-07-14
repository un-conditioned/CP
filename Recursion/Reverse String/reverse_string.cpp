#include<iostream>
using namespace std;

void printReverse( char *str) {
  if (!*str)
    return;
  printReverse(str + 1);
  putchar(*str);
}

int main() {
    char *str= "abc"; //str is a pointer variable storing the address of first character a 
    
    printReverse(str); 
    
    
    
}