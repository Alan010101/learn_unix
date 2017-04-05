#include "apue.h"



int main(void){

        int n;
        char buf[4096];

        while((n=read(0,buf,4096))>0){
                if(write(STDOUT_FILENO,buf,n)!=n){
                        printf("write erro");
                        return 0;
                }
        }
        


}
