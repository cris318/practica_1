//practica de laboratorio1
//autores: cristian rincon y camilo ballesteros
//profesor: marco ortiz
//este laboratorio realiza operaciones entre dos numeros complejos

#include<stdio.h> //incluimos librerias
//se definen prototipos
void pedir_valores(float *num1,float *num2, float *num3, float *num4);
void operacion_a_realizar(char *operacion);
void operar_numeros(int operacion,float real1,float complejo1,float real2,float complejo2,float *resultadoreal,float *resultadocomplejo);
//void mostrar_resultado;
int main(void)
{
	float real1=0, complejo1=0, real2=0, complejo2=0;
	float resultadoreal= 0, resultadocomplejo = 0;
	int operacion;

	pedir_valores(&real1, &complejo1, &real2, &complejo2);
	
	printf("\nel primer numero complejo es: %f j%f \n",real1,complejo1);
	printf("\n el segundo numero complejo es: %f j%f \n",real2,complejo2);	
	operacion_a_realizar(&operacion);
	operar_numeros(operacion,real1,complejo1,real2,complejo2,&resultadoreal,&resultadocomplejo);

	return 1;
}
void pedir_valores(float *num1,float *num2,float *num3,float *num4)
	
	{	printf("\nacontinuacion ingrese los numeros complejos a operar\n");
		printf("\ningrese la parte real de primer numero complejo\n");
		scanf("%f", &(*num1));
		printf("\ningrese la parte imaginaria de primer numero complejo\n");
		scanf("%f", &(*num2));
		printf("\ningrese la parte real del segundo numero complejo\n");
		scanf("%f", &(*num3));
		printf("\ningrese la parte imaginaria del segundo numero complejo\n");
		scanf("%f",&(*num4));
	}
void operacion_a_realizar (char *operacion)

{
	printf("\npor favor escriba la operacion a realizar entre los dos numeros complejos\n\n");
	printf("\n si desea realizar una suma escriba '1'\n");
	printf("\n si desea realizar una resta escriba '2'\n\n");
	scanf("%hhd",&(*operacion));
	

}


void operar_numeros( int operacion, float real1,float complejo1,float real2,float complejo2,float *resultadoreal, float *resultadocomplejo)
			

	{
		if( operacion == 1)
		{
			*resultadoreal= real1 + real2;
			*resultadocomplejo= complejo1 + complejo2;
			printf("\n el resultado de la suma es: %f ",*resultadoreal);
			printf("j%f\n",*resultadocomplejo);
		}
		if(operacion == 2)
		{
			
			*resultadoreal= real1 - real2;
			*resultadocomplejo= complejo1 - complejo2;
		}
	}

