#include <stdio.h>
#define tam 10

typedef int lista[tam];

void cargaVector(lista v, int *n);
double promedio(lista v, int n);

//void mostrarVector(lista v, int n);

//void mostrarVector(lista v, int n){
	//for (int i = 0; i < n; ++i)
	//{
	//	printf("%d\t",v[i] );
	//}
//}

double promedio(lista v, int n){
	float s = 0.0;
	for (int i = 0; i < n; ++i)
	{
		s = s + v[i];
	}
	return s/n;
}

void cargaVector(lista v, int *n){
	int i, x;
	i=0;
	printf("ingresa numero entero:\t");
	scanf("%d",&x);
	while(x != 0){
		v[i] = x;
		i++;
		printf("ingresa numero entero:\t");
		scanf("%d",&x);
	}
	*n = i;
	//for (int i = 0; i < n; ++i)
	//({
	//	printf("Ingrese nota %d:\t",i+1);
	//	scanf("%d",&v[i]);
	//}
}


int main(int argc, char *argv[]) {
	lista vector;
	int tamanio;
	cargaVector(vector, &tamanio);
	//mostrarVector(vector,tamanio);
	printf("Promedio:%f\t", media(vector,tamanio));
	
	return 0;
}	
