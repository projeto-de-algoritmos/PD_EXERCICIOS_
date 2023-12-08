#include <stdlib.h>
#include <stdio.h>

int fib(int n, int *calls){
    (*calls)++;
    if(n == 0 || n == 1) return n;
    else return fib(n-1, calls) + fib(n-2, calls);
}

int main(){
    int x;
    int calls = 0;
    int *call_ptr = &calls;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        int n;
        calls = 0;
        scanf("%d", &n);
        int result = fib(n, call_ptr);
        printf("fib(%d) = %d calls = %d\n", n, calls-1, result);
    }
    return 0;
}