#include <stdio.h>

#define DIM 128
#define DIM_KDA 3
#define DIM_STATS 5

typedef struct {
char user[DIM], champ[DIM];
double kda[DIM_KDA];
} summoner;

int main() {
  summoner stats[DIM_STATS];
  int total_kills, total_deaths, total_assists;
  
  printf("DATOS JUGADOR 1\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", stats[0].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", stats[0].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &stats[0].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &stats[0].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &stats[0].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", stats[0].user, stats[0].champ, (stats[0].kda[0]+stats[0].kda[2])/stats[0].kda[1]);
  
  printf("\nDATOS JUGADOR 2\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", stats[1].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", stats[1].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &stats[1].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &stats[1].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &stats[1].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", stats[1].user, stats[1].champ, (stats[1].kda[0]+stats[1].kda[2])/stats[1].kda[1]);
  
  printf("\nDATOS JUGADOR 3\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", stats[2].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", stats[2].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &stats[2].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &stats[2].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &stats[2].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", stats[2].user, stats[2].champ, (stats[2].kda[0]+stats[2].kda[2])/stats[2].kda[1]);
  
  printf("\nDATOS JUGADOR 4\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", stats[3].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", stats[3].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &stats[3].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &stats[3].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &stats[3].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", stats[3].user, stats[3].champ, (stats[3].kda[0]+stats[3].kda[2])/stats[3].kda[1]);
  
  printf("\nDATOS JUGADOR 5\n¿Cuál es tu nombre de invocador? ");
  scanf("%s", stats[4].user);
  printf("¿Con qué campeón has jugado tu última partida? ");
  scanf("%s", stats[4].champ);
  printf("¿Cuántos asesinatos has hecho? ");
  scanf("%lf", &stats[4].kda[0]);
  printf("¿Cuántas veces has muerto? ");
  scanf("%lf", &stats[4].kda[1]);
  printf("¿Y cuántas asistencias has hecho? ");
  scanf("%lf", &stats[4].kda[2]);
  printf("%s, tu KDA ratio con %s ha sido %.2lf.\n", stats[4].user, stats[4].champ, (stats[4].kda[0]+stats[4].kda[2])/(double)stats[4].kda[1]);
  
  total_kills = stats[0].kda[0]+stats[1].kda[0]+stats[2].kda[0]+stats[3].kda[0]+stats[4].kda[0];
  total_deaths = stats[0].kda[1]+stats[1].kda[1]+stats[2].kda[1]+stats[3].kda[1]+stats[4].kda[1];
  total_assists = stats[0].kda[2]+stats[1].kda[2]+stats[2].kda[2]+stats[3].kda[2]+stats[4].kda[2];
  
  printf("\nUsuarios %s, %s, %s, %s y %s, el KDA de vuestra partida ha sido %d/%d/%d y su ratio %.2lf.", stats[0].user, stats[1].user, stats[2].user, stats[3].user, stats[4].user, total_kills, total_deaths, total_assists, (total_kills+total_assists)/(double)total_deaths);
  
  return 0;
}
