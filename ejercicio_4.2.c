#include <stdio.h>

#define DIM 128
#define DIM_KDA 10

typedef struct {
        char user[DIM], champ[DIM];
        int lvl, xp;
	double kda[DIM_KDA];
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
        scanf("%lf", &stats.kda[0]);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &stats.kda[1]);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &stats.kda[2]);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", stats.user, stats.lvl, stats.xp, stats.champ, (stats.kda[0]+stats.kda[2])/stats.kda[1]);

        return 0;
}
