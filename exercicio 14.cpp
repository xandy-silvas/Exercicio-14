#include <stdio.h>

void imprimir_binario(int n) {
    if (n == 0)
        return;
    imprimir_binario(n / 2);

}

int decimal_para_binario(int n) {
    if (n == 0)
        return 0;
    return (n % 2) + 10 * decimal_para_binario(n / 2);
}

void converter_para_binario(int n) {
    if (n == 0)
        printf("0");
    else
        imprimir_binario(n);
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    converter_para_binario(n);
    printf("%d em binario eh: %d\n", n, decimal_para_binario(n));
    
    return 0;
}
