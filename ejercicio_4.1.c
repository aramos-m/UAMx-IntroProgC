#include <stdio.h>

#define DIM 128

typedef struct {
        char user[DIM], champ[DIM];
        int lvl, xp;
	double kills, deaths, assists;
} game;

int main() {
        game stats;

        printf("¿Cuál es tu nombre de invocador? ");
        scanf("%s", stats.user);
        printf("¿Cuál es tu nivel? ");
        scanf("%d", &stats.lvl);
        printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
        scanf("%d", &stats.xp);
        printf("¿Con qué campeón has jugado tu última partida? ");
        scanf("%s", stats.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &stats.kills);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &stats.deaths);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &stats.assists);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", stats.user, stats.lvl, stats.xp, stats.champ, (stats.kills+stats.assists)/stats.deaths);

        return 0;
}
