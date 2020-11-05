#include <omp.h>  //include OMP library
#include <stdio.h>

void func(int n){
	int j;
	#pragma omp parallel for
	for(j=0; j<4; j++){
		printf("parent thread: %d, child thread: %d\n", n, omp_get_thread_num());

	}
}

int main(int argc, char *argv[]) {
	omp_set_nested(1);
    printf("Hello World from master thread!\n");
    int i;
	#pragma omp parallel for 
	for(i=0; i<4; i++){
		//printf("Thread executing loop: %d\n", omp_get_thread_num()); //call a library routine to find the thread numbe
		func(omp_get_thread_num());
	}
}


