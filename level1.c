#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char inp_string[MAX];
    fgets(inp_string,MAX,stdin);
    if(strlen(inp_string)%2!=0){
        int n = strlen(inp_string);
        char temp[2*n + 1];
        strcpy(temp, inp_string);
        strcat(temp, inp_string);
        int strIdx = n/2;
        for (int i=0; i <=n; i++){
            for (int j=0; j<i; j++)
                printf("%c",temp[strIdx+j]);
            printf("\n");
        }
    }else{
        printf("/t Even Length String");
    }
    return 0;
}
