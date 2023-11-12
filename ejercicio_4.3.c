#include <stdio.h>
#include <string.h>

#define DIM 128
#define DIM_KDA 10

typedef struct {
	char champ[DIM];
	double kda[DIM_KDA];
} game;
typedef struct {
	char user[DIM];
	int lvl, xp;
	game champ_stats;
} summoner;

int main() {
        summoner last_game;

        printf("¿Cuál es tu nombre de invocador? ");
        scanf("%s", last_game.user);
        printf("¿Cuál es tu nivel? ");
        scanf("%d", &last_game.lvl);
        printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
        scanf("%d", &last_game.xp);
        printf("¿Con qué campeón has jugado tu última partida? ");
        scanf("%s", last_game.champ_stats.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &last_game.champ_stats.kda[0]);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &last_game.champ_stats.kda[1]);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &last_game.champ_stats.kda[2]);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", last_game.user, last_game.lvl, last_game.xp, last_game.champ_stats.champ, (last_game.champ_stats.kda[0]+last_game.champ_stats.kda[2])/last_game.champ_stats.kda[1]);

        return 0;
}
