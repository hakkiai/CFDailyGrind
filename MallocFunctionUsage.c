#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char* duplicateString(char* str){

int len;
char* copy;


len = strlen(str) + 1;

copy = malloc(sizeof(char) * len);

if(copy == NULL){
printf("Malloc allocation failed");
exit(1);
}

strcpy(copy, str);

printf("The string is %s", copy);

return (copy);


}

int main(){

char *str = "Kuber";
duplicateString(str);

return 0;

}





