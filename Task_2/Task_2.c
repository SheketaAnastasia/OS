#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double* generateMass(int from, int to, int lenght);
void printMass(double* mass, int lenght);
int numberElementsMoreAverage(double* mass, int lenght);
int getAverage(double* mass, int lenght);
double sumModulesElementsAfterNegativeElement(double* mass, int lenght);


int main (int argc, char const *argv[]){
	srand(time(NULL));
	int lenght = 10;
	double* mass = generateMass(-10,10,lenght);
	printMass(mass,10);
  printf("number elements more average : %d\n", numberElementsMoreAverage(mass,lenght));
  printf("sum modules elements after negative element %.2lf\n", sumModulesElementsAfterNegativeElement(mass,lenght));
}

double* generateMass(int from, int to, int lenght){

		double* mass = malloc(sizeof(double)*lenght);

		for (int i = 0; i < lenght; ++i){
			mass[i] = rand() % (to-from+1) + from;
		}

		return mass;
}

void printMass(double* mass, int lenght){
	for (int i = 0; i < lenght; ++i){
		printf("%.2lf  ", mass[i]);
	}
	printf("\n");
}



int numberElementsMoreAverage(double* mass, int lenght){
	double aver =getAverage(mass,lenght);
	int count = 0;
  for (int i = 0; i<lenght; i++){
   	if (mass[i]>aver){
   	count ++;
   	}
   }
   return count;
}

int getAverage(double* mass, int lenght){
	double sum = 0;
	
   for (int i = 0; i<lenght; i++){
     sum += mass[i];
   }
	
	return sum/lenght;
}

double sumModulesElementsAfterNegativeElement(double* mass, int lenght){
	int flag = 0;
	double sum = 0;

	for (int i = 0; i < lenght; ++i){
	
		if (flag){
			sum+= abs(mass[i]);		
		}
		if (!flag && mass[i] < 0){
		
			flag = 1;
		}
	}
	return sum;
}