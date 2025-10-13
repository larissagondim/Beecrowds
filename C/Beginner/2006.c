#include <stdio.h>
 
int main() {
 
    int tipo;
    int valor;
    int contador = 0;
    
    scanf("%d", &tipo);
    
    for(int i=0; i<5; i++) {
        scanf("%d", &valor);
        if(valor == tipo) contador += 1;
    }
    printf("%d\n", contador);
 
    return 0;
}