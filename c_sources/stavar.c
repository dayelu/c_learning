#include<stdio.h>
void func(){
    static int x = 0;
    x++;
    printf("func: x=%d\n",x);
}

int main(){
    int i;
    for(i=0; i<10; i++){
        func();
    }
    return 0;
}
