#include <stdio.h>

int main() {

    int idade;
    int soma;
    int c;
    float media;

    idade =0;
    soma = 0;
    media = 0;
    c = 0;

    while (idade != -1) {
        print("\ninforme a idade ou -1 para finalizar: ");
        scanf("%d", &idade);
        if(idade == -1) {
          break;
        } else {
        soma = soma + idade;
        c = c  + 1;
     }
    }while (idade != -1);
    
    media = (float) soma /c;
    printf("\nforam informados &d idade, e a media da idade e &.2f",c,media);
    return 0;
}
