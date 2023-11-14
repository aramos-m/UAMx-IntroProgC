#include <stdio.h>

#define DIM 128

typedef struct {
	char champ[DIM];
	double kda[3];
} game;

typedef struct {
	char user[DIM];
	game try[3];
} summoner;

int main() {
	summoner player[2];
	double kda1, kda2, kda3;
	
	printf("DATOS JUGADOR 1\n¿Cuál es tu nombre de invocador? ");
	scanf("%s", player[0].user);
	printf("¿Con qué campeón has jugado tu última partida? ");
	scanf("%s", player[0].try[0].champ);
	printf("¿Cuántos asesinatos has hecho? ");
	scanf("%lf", &player[0].try[0].kda[0]);
	printf("¿Cuántas veces has muerto? ");
	scanf("%lf", &player[0].try[0].kda[1]);
	printf("¿Y cuántas asistencias has hecho? ");
	scanf("%lf", &player[0].try[0].kda[2]);
	
	printf("\n¿Con qué campeón jugaste tu penúltima partida? ");
	scanf("%s", player[0].try[1].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &player[0].try[1].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &player[0].try[1].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &player[0].try[1].kda[2]);

	printf("\n¿Con qué campeón jugaste tu antepenúltima partida? ");
	scanf("%s", player[0].try[2].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &player[0].try[2].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &player[0].try[2].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &player[0].try[2].kda[2]);

	kda1 = (player[0].try[0].kda[0]+player[0].try[0].kda[2])/player[0].try[0].kda[1];
	kda2 = (player[0].try[1].kda[0]+player[0].try[1].kda[2])/player[0].try[1].kda[1];
	kda3 = (player[0].try[2].kda[0]+player[0].try[2].kda[2])/player[0].try[2].kda[1];

	printf("\n%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf.\n", player[0].user, (kda1+kda2+kda3)/3);
	
	printf("\nDATOS JUGADOR 2\n¿Cuál es tu nombre de invocador? ");
	scanf("%s", player[1].user);
	printf("¿Con qué campeón has jugado tu última partida? ");
	scanf("%s", player[1].try[0].champ);
	printf("¿Cuántos asesinatos has hecho? ");
	scanf("%lf", &player[1].try[0].kda[0]);
	printf("¿Cuántas veces has muerto? ");
	scanf("%lf", &player[1].try[0].kda[1]);
	printf("¿Y cuántas asistencias has hecho? ");
	scanf("%lf", &player[1].try[0].kda[2]);

	printf("\n¿Con qué campeón jugaste tu penúltima partida? ");
	scanf("%s", player[1].try[1].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &player[1].try[1].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &player[1].try[1].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &player[1].try[1].kda[2]);

	printf("\n¿Con qué campeón jugaste tu antepenúltima partida? ");
	scanf("%s", player[1].try[2].champ);
	printf("¿Cuántos asesinatos hiciste? ");
	scanf("%lf", &player[1].try[2].kda[0]);
	printf("¿Cuántas veces te mataron? ");
	scanf("%lf", &player[1].try[2].kda[1]);
	printf("¿Y cuántas asistencias hiciste? ");
	scanf("%lf", &player[1].try[2].kda[2]);
  
	kda1 = (player[1].try[0].kda[0]+player[1].try[0].kda[2])/player[1].try[0].kda[1];
	kda2 = (player[1].try[1].kda[0]+player[1].try[1].kda[2])/player[1].try[1].kda[1];
	kda3 = (player[1].try[2].kda[0]+player[1].try[2].kda[2])/player[1].try[2].kda[1];

	printf("\n%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf.", player[1].user, (kda1+kda2+kda3)/3);
	
	return 0;
}