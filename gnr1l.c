#include<stdio.h>

int main(){
    union a{
        int i;
        char ch[2];

    };
    union a u1={512};
    union a u1={0,2};
    return 0;
}