#include <stdio.h>

#define DIM 128
#define DIM_KDA 10

typedef struct {
	char champ[DIM];
	double kda[DIM_KDA];
} game;
typedef struct {
	char user[DIM];
	int lvl, xp;
	game sora;
} summoner;

int main() {
        summoner stats;

        printf("¿Cuál es tu nombre de invocador? ");
        scanf("%s", stats.user);
        printf("¿Cuál es tu nivel? ");
        scanf("%d", &stats.lvl);
        printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
        scanf("%d", &stats.xp);
        printf("¿Con qué campeón has jugado tu última partida? ");
        scanf("%s", stats.sora.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &stats.sora.kda[0]);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &stats.sora.kda[1]);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &stats.sora.kda[2]);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", stats.user, stats.lvl, stats.xp, stats.sora.champ, (stats.sora.kda[0]+stats.sora.kda[2])/stats.sora.kda[1]);

        return 0;
}
