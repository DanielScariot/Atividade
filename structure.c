#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto2D {
	float px;
	float py;
	};

struct CorRGB {
	unsigned int r, g, b;
	};
	
struct Circulo {
	float raio;
	struct Ponto2D centro;
	struct CorRGB cor;
	};	

double calcDistancia(struct Ponto2D *ponto1, struct Ponto2D *ponto2);

int main(void) {

	float dist, x1, y1, x2, y2;
	printf("Insira o primeiro ponto:\n");
	printf("Coordenada x:");
	scanf("%f", &x1); 	
	printf("Coordenada y:");
	scanf("%f", &y1);
	printf("Insira o segundo ponto:\n");
	printf("Coordenada x:");
	scanf("%f", &x2); 	
	printf("Coordenada y:");
	scanf("%f", &y2);
	struct Ponto2D ponto1={x1, y1};
	struct Ponto2D ponto2={x2, y2};

	dist = calcDistancia(&ponto1, &ponto2);

	printf("Distancia entre os pontos: %.2f\n", dist);

return 0;
}

double calcDistancia(struct Ponto2D *ponto1, struct Ponto2D *ponto2){
float d;
d = sqrt(pow(ponto2->px - ponto1->px, 2) + pow(ponto2->py - ponto1->py, 2));
return d;
}

