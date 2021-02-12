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
        // strcpy(temp, inp_string);
        // strcat(temp, inp_string);
        int strIdx = n/2;
        for (int i=1; i<=n; i++){
            int printTabs = n-i-1;
            int rotIdx = strIdx+i+1-n;
            if(rotIdx>0||printTabs>0){   
                printf("%*.s",rotIdx>0?printTabs:++printTabs,"\t");
            }
            printf("%.*s",i,inp_string+strIdx);
            if((rotIdx)>0){
                printf("%.*s",rotIdx,inp_string);
            }
            if(i>=1) printf("\n");
        }
    }else{
        printf("/t Even Length String");
    }
    return 0;
}
