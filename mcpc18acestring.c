#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char string[100];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&string);
        
        for(int j=(strlen(string)-1);j>=0;j--)
        	printf("%c",string[j]);
        printf("\n");
    }
    
    return 0;
}
