#include <conio.h>
#include <stdio.h>
main()
{
	int a, b;
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	if (a > b)
	    printf("Organizando os valores digitos em ordem crescente: B=%d - A=%d",b,a);
    else
        printf("Organizando os valores digitos em ordem crescente: A=%d - B=%d",a,b);
	getch();
}
