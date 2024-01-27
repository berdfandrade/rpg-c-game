#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdio.h>

// Definição da estrutura do jogador
typedef struct character {
    char nome[50];
    int nivel;
    int pontos_vida;
    int pontos_ataque;
    int pontos_defesa;
} Jogador;

// Implementação da função para exibir status do jogador
void exibirStatus(Jogador jogador) {
    printf("Nome: %s\n", jogador.nome);
    printf("Nível: %d\n", jogador.nivel);
    printf("Pontos de vida: %d\n", jogador.pontos_vida);
    printf("Pontos de ataque: %d\n", jogador.pontos_ataque);
    printf("Pontos de defesa: %d\n", jogador.pontos_defesa);
}

// Implementação da função para aumentar o nível do jogador
void aumentarNivel(Jogador *jogador) {
    jogador->nivel += 1;
}

#endif
