#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B,C;
    double MEDIA;

    scanf("%lf" ,&A);
    scanf("%lf" ,&B);
    scanf("%lf" , &C);

    MEDIA = (2*A + 3*B + 5*C) / 10;

	//calcula a media aritimetica dos valores
    printf( "MEDIA = %.1f\n" , MEDIA);
	
    return 0;
}