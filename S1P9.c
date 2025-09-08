#include<stdio.h>
int main(){
    char a[]="Krrish";
    char b[]="Rohit";
    char c[]="Hardik";
    char d[]="Vanshika";
    char e[]="Vansh";
char *arr[5]={a,b,c,d,e};


for (int i=0;i<5;i++){
  
    printf("%s\t",arr[i]);
} 
}
