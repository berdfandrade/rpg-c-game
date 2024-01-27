#include <stdio.h>
#include <string.h>
#include "character.h"

void criar_novo_jogador(Jogador *player)
{
    strcpy(player->nome, "Nome do jogador");

    player->nivel = 1;
    player->pontos_vida = 100;
    player->pontos_ataque = 20;
    player->pontos_defesa = 10;
}

int main()
{
    Jogador player;

    criar_novo_jogador(&player);
    aumentarNivel(&player);
    exibirStatus(player);
}