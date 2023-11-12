#include <stdio.h>
#include <string.h>

#define DIM 128

typedef struct {
        char user[DIM], champ[DIM];
        int lvl, xp;
        double kills, deaths, assists;
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
        scanf("%lf", &game.kills);
        printf("¿Cuántas veces has muerto? ");
        scanf("%lf", &game.deaths);
        printf("¿Y cuántas asistencias has hecho? ");
        scanf("%lf", &game.assists);

        printf("%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.", game.user, game.lvl, game.xp, game.champ, (game.kills+game.assists)/game.deaths);

        return 0;
}
