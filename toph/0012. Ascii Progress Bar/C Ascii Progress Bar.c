#include <math.h>
#include <stdlib.h>

int main(){
    char a1[200];
    int m;
    scanf("%s", &a1);
    int n = (int)atof(a1);

    m=(int)floor(n);
    int i, a=floor(m/10);
    printf("[");
    for(i=1;i<=10;i++){

        printf("%c", i<=a?'+':'.');
    }
        printf("] ");
        printf("%d%%\n", m);


}