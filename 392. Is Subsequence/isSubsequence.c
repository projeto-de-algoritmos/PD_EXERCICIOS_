#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isSubsequence(char* s, char* t) {

    int t_size = strlen(t);
    int s_size = strlen(s);
    
    int s_count = 0;
    int t_count = 0;

    if(s_size <= t_size){
        while( (s_count != s_size) && (t_count != t_size) ){
            
            if( s[s_count] == t[t_count] ){
                s_count++;
                t_count++;
            } else t_count++;
        }

        if(t_count >= t_size && s_count < s_size ) return false;
        else return true;

    } else return false;
}

int main(){
    char * s = malloc(3*sizeof(char));
    char * t = malloc(6*sizeof(char));
    s = "axc";
    t = "ahbgdc";
    bool result = isSubsequence(s, t);
    printf("%d", result ? "true" : "false");

    return 0;
}