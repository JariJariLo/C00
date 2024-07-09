#include <unistd.h>
#include <limits.h>
void ft_putnbr(int nb) {
    char c;
    if(nb<10)
    {
	nb =nb * -1;
	write(1, "-", 1);
    }
    if (nb >= 10) {
        ft_putnbr(nb / 10); // Llamada recursiva para imprimir todos los dígitos menos el último
    }
    c = (nb % 10) + '0'; // Convertimos el dígito a su representación ASCII
    write(1, &c, 1); // Imprimimos el dígito
}

int main() {
    int num;
    num= INT_MIN;   	
    ft_putnbr(num); // Llamamos a la función ft_putnbr para imprimir el número
    write(1, "\n", 1); // Salto de línea al final
    return 0;
}
