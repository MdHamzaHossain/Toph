#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char link[600], title[600];
    int capOn=1;
    while(1)
    {
        getchar();
        scanf("%[^\n]", link);
        getchar();
        if(link[0] == '0') break;
        int i;
        for (i=strlen(link)+1; i>=0;i--){
            if(link[i] == '/') break;

        };

        int j=0;
        for(i++; i<=strlen(link); i++,j++){

            if (link[i] == '-'){
                title[j] = ' ';
                capOn = 1;
            } else{
            title[j] = (capOn ) ? toupper(link[i]) : link[i];
            capOn = 0;
            }
            
        }
        printf("%s", title);

        

    }


    return 0;
}
