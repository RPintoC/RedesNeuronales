
#include <stdio.h>
struct node {
	float *Y;
	int posY;
	float weight;
	int hits;
}

struct network{
	int posX;
	struct node *nodes;
	struct network *next;
}

int main(int argc, char **argv)
{
	
	return 0;
}

void clearWeigth(){
	
	
}

float DistanciaEuclidiana(float *YNodo,float Yentrada,int n){
	int i;
	float DistEucli=0;
	for(i=0;i<n;i++){
		DistEucli=+ (YNodo[i] - Yentrada[i])*(YNodo[i] - Yentrada[i]);
	}
	DistEucli=sqrt(DistEucli);
}


