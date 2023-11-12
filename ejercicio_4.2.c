#include <stdio.h>
#include <string.h>

#define DIM 128
#define DIM_KDA 10

typedef struct {
        char user[DIM], champ[DIM];
        int lvl, xp;
	double kda[DIM_KDA];
} lol;

int main() {
        lol game;

        printf("¿Cuál es tu nombre de invocador? ");
        scanf("%s", game.user);
        printf("¿Cuál es tu nivel? ");
        scanf("%d", &game.lvl);
        printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
        scanf("%d", &game.xp);
        printf("¿Con qué campeón has jugado tu última partida? ");
        scanf("%s", game.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &game.kda[0]);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &game.kda[1]);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &game.kda[2]);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", game.user, game.lvl, game.xp, game.champ, (game.kda[0]+game.kda[2])/game.kda[1]);

        return 0;
}
