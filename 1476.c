#include <stdio.h>

int main(void){
    int E,S,M;
    scanf("%d %d %d",&E,&S,&M);    
    int a = 1, b = 1, c = 1;
    if (E==1 && S==1 && M==1)
        printf("%d",1);
    else{
        for (int n = 1;;n++){
            a++;
            b++;
            c++;
            if (a==16){a = 1;}
            if (b==29){b = 1;}
            if (c==20){c = 1;}
            if (a==E && b==S && c==M){
                printf("%d",n+1);
                break;
            }
        }
    }
    
    return 0;
}
