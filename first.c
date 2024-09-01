#include <stdio.h>
#include <math.h>

int main(){
    int x,y,r,phi;
    printf("enter cartesian coordinates\n");
    scanf("%d %d",&x,&y);
    r=sqrt(pow(x,2)+pow(y,2));
    phi=atan(y/x);
    printf("the polar coodinates are %d,%d",r,phi);
}