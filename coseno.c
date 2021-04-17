#include<stdio.h>
#include<math.h>
#define pi 3.141592654



int menu();
void cosenoR(float anguloR);
void cosenoS(float anguloS);
int factorial(int numero);


int menu(){
	int opcion;
	printf("Seleccion la opcion que desea:\n");
	printf("1: Grados en sexagesimales\n");
	printf("2: Grados en radianes\n");
	scanf("%d", &opcion);
	return opcion;

}




void cosenoS(float anguloS){
	int i=0;
	float angulo;
	float diferencia=2;
	float coseno=0; 
	float cosenoAnt=0;
	angulo=anguloS*pi/180;
	while(diferencia>= 0.1){
		cosenoAnt=coseno;
		coseno= coseno*pow(-1,i)*pow(angulo,2*i)/factorial(2*i);
		i++;
		diferencia=fabs(fabs(coseno)-fabs(cosenoAnt));
		printf("%d es %f\n", i,diferencia);
		}
		printf("El coseno de %f es %f\n", anguloS, coseno);
	
	}



void cosenoR(float anguloR){
	int i=0;
	float diferencia=2.0;
	float coseno=0;
	float cosenoAnt=0;
	while(diferencia>=0.1){
	cosenoAnt=coseno;
	coseno=coseno+pow(-1,i)*pow(anguloR,2*i)/factorial(2*i);
	i++;
	diferencia = fabs(fabs(cosenoAnt)- fabs(coseno));
	}
	printf("El coseno de %f radianes es %f", anguloR, coseno);
	
	}






int factorial(int numero){
	int i, factorial=1;
	if(numero<=0){
		return 1;
	}else{
		for(i=1; i<=numero; i++){
			factorial*=i;
			}
		}
		printf("El factorial de %d es %d", numero, factorial);
		return factorial;	
	}








int main(int argc, char*argv[]){
	int opcion;
	float S=0;
	float R=0;
	
	
	opcion=menu();
	if(opcion==1){
		printf("Escriba el angulo en sexasegimal:\t");
		scanf("%f", &S);
		cosenoS(S);
	}else if(opcion==2){
		printf("Ingrese el valor en radianes:\t");
		scanf("%f", &R);
		cosenoR(R);
	}else
		printf("Opcion incorrecta, toque cualquier tecla para finalizar.\n");
	
    return 0;

}




