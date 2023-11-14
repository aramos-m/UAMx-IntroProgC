#include <stdio.h>

#define DIM 128

typedef struct {
char user[DIM], champ[DIM];
double kda[3];
} summoner;

int main() {
  summoner player[5];
  int total_kills, total_deaths, total_assists;
  
  printf("DATOS JUGADOR 1\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", player[0].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", player[0].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &player[0].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &player[0].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &player[0].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", player[0].user, player[0].champ, (player[0].kda[0]+player[0].kda[2])/player[0].kda[1]);
  
  printf("\nDATOS JUGADOR 2\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", player[1].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", player[1].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &player[1].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &player[1].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &player[1].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", player[1].user, player[1].champ, (player[1].kda[0]+player[1].kda[2])/player[1].kda[1]);
  
  printf("\nDATOS JUGADOR 3\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", player[2].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", player[2].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &player[2].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &player[2].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &player[2].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", player[2].user, player[2].champ, (player[2].kda[0]+player[2].kda[2])/player[2].kda[1]);
  
  printf("\nDATOS JUGADOR 4\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", player[3].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", player[3].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &player[3].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &player[3].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &player[3].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", player[3].user, player[3].champ, (player[3].kda[0]+player[3].kda[2])/player[3].kda[1]);
  
  printf("\nDATOS JUGADOR 5\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", player[4].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", player[4].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &player[4].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &player[4].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &player[4].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", player[4].user, player[4].champ, (player[4].kda[0]+player[4].kda[2])/player[4].kda[1]);
  
  total_kills = player[0].kda[0]+player[1].kda[0]+player[2].kda[0]+player[3].kda[0]+player[4].kda[0];
  total_deaths = player[0].kda[1]+player[1].kda[1]+player[2].kda[1]+player[3].kda[1]+player[4].kda[1];
  total_assists = player[0].kda[2]+player[1].kda[2]+player[2].kda[2]+player[3].kda[2]+player[4].kda[2];
  
  printf("\nUsuarios %s, %s, %s, %s y %s, el KDA de vuestra partida ha sido %d/%d/%d y su ratio %.2lf.", player[0].user, player[1].user, player[2].user, player[3].user, player[4].user, total_kills, total_deaths, total_assists, (total_kills+total_assists)/(double)total_deaths);
  
  return 0;
}
