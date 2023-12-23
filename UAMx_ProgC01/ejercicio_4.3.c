#include <stdio.h>

#define DIM 128

typedef struct {
	char champ[DIM];
	double kda[3];
} game;

typedef struct {
	char user[DIM];
	int lvl, xp;
	game sora;
} summoner;

int main() {
        summoner player;

        printf("¿Cuál es tu nombre de invocador? ");
        scanf("%s", player.user);
        printf("¿Cuál es tu nivel? ");
        scanf("%d", &player.lvl);
        printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
        scanf("%d", &player.xp);
        printf("¿Con qué campeón has jugado tu última partida? ");
        scanf("%s", player.sora.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &player.sora.kda[0]);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &player.sora.kda[1]);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &player.sora.kda[2]);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", player.user, player.lvl, player.xp, player.sora.champ, (player.sora.kda[0]+player.sora.kda[2])/player.sora.kda[1]);

        return 0;
}
