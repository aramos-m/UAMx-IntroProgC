#include <stdio.h>

#define DIM 128

typedef struct {
        char user[DIM], champ[DIM];
        int lvl, xp;
	double kills, deaths, assists;
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
        scanf("%s", player.champ);
        printf("¿Cuántos asesinatos has hecho? ");
        scanf("%lf", &player.kills);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &player.deaths);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &player.assists);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", player.user, player.lvl, player.xp, player.champ, (player.kills+player.assists)/player.deaths);

        return 0;
}
