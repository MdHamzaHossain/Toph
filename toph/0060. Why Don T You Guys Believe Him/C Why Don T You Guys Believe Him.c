#include<stdio.h>
int main()
{
    int n, yL;
	scanf("%d %d", &n, &yL);
    

    while(n--){
        int t;
        scanf("%d", &t);
        yL-=t;
    }
    printf("%s\n",  (yL < 0 ? "Yes" : "No") );

}