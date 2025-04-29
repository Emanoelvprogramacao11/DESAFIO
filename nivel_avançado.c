#include <stdio.h>

void movetorre(int house){
    if (house > 0){
        printf("Direita\n");
        movetorre(house - 1);
    }
}

int main(){
    movetorre (5);
    
    return 0;

}
