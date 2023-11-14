#include <stdio.h>

#define DIM 128
#define DIM_TRY 3
#define DIM_KDA 3
#define DIM_STATS 2

typedef struct {
	char champ[DIM];
	double kda[DIM_KDA];
} game;
typedef struct {
	char user[DIM];
	game try[DIM_TRY];
} summoner;

int main() {
	summoner stats[DIM_STATS];
	double kda1, kda2, kda3;
	
	printf("DATOS JUGADOR 1\n¿Cuál es tu nombre de invocador? ");
	scanf("%s", stats[0].user);
	printf("¿Con qué campeón has jugado tu última partida? ");
	scanf("%s", stats[0].try[0].champ);
	printf("¿Cuántos asesinatos has hecho? ");
	scanf("%lf", &stats[0].try[0].kda[0]);
	printf("¿Cuántas veces has muerto? ");
	scanf("%lf", &stats[0].try[0].kda[1]);
	printf("¿Y cuántas asistencias has hecho? ");
	scanf("%lf", &stats[0].try[0].kda[2]);
	
	printf("\n¿Con qué campeón jugaste tu penúltima partida? ");
	scanf("%s", stats[0].try[1].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &stats[0].try[1].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &stats[0].try[1].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &stats[0].try[1].kda[2]);

	printf("\n¿Con qué campeón jugaste tu antepenúltima partida? ");
	scanf("%s", stats[0].try[2].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &stats[0].try[2].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &stats[0].try[2].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &stats[0].try[2].kda[2]);

	kda1 = (stats[0].try[0].kda[0]+stats[0].try[0].kda[2])/stats[0].try[0].kda[1];
	kda2 = (stats[0].try[1].kda[0]+stats[0].try[1].kda[2])/stats[0].try[1].kda[1];
	kda3 = (stats[0].try[2].kda[0]+stats[0].try[2].kda[2])/stats[0].try[2].kda[1];

	printf("\n%s, la media de tu KDA ratio de las últimas partidas ha sido %.2lf.\n", stats[0].user, kda1+kda2+kda3/3);
	
	printf("\nDATOS JUGADOR 2\n¿Cuál es tu nombre de invocador? ");
	scanf("%s", stats[1].user);
	printf("¿Con qué campeón has jugado tu última partida? ");
	scanf("%s", stats[1].try[0].champ);
	printf("¿Cuántos asesinatos has hecho? ");
	scanf("%lf", &stats[1].try[0].kda[0]);
	printf("¿Cuántas veces has muerto? ");
	scanf("%lf", &stats[1].try[0].kda[1]);
	printf("¿Y cuántas asistencias has hecho? ");
	scanf("%lf", &stats[1].try[0].kda[2]);

	printf("\n¿Con qué campeón jugaste tu penúltima partida? ");
	scanf("%s", stats[1].try[1].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &stats[1].try[1].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &stats[1].try[1].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &stats[1].try[1].kda[2]);

	printf("\n¿Cón qué campeón jugaste tu antepenúltima partida? ");
	scanf("%s", stats[1].try[2].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &stats[1].try[2].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &stats[1].try[2].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &stats[1].try[2].kda[2]);
  
	kda1 = (stats[1].try[0].kda[0]+stats[1].try[0].kda[2])/stats[1].try[0].kda[1];
	kda2 = (stats[1].try[1].kda[0]+stats[1].try[1].kda[2])/stats[1].try[1].kda[1];
	kda3 = (stats[1].try[2].kda[0]+stats[1].try[2].kda[2])/stats[1].try[2].kda[1];

	printf("\n%s, la media de tu KDA ratio de las últimas partidas ha sido %.2lf.", stats[1].user, kda1+kda2+kda3/3);
	
	return 0;
}
