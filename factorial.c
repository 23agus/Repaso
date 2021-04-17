#include<stdio.h>
#define N 10

//int factorial(){
	//int i,factorial=1;
	//for(i=1; i<=num; i++){
		//factorial*=i;
	
	//}
	
	//return factorial;	
//}




int main(void){
	int factorial=1;
	for(int i=1; i<=N; i++){
		factorial*=i;
		printf("%d!= %d\n", i, factorial);
	}
	



	return 0;
}


