#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <conio.h>

#define PORTA 1317

int inicia_e_le (uint16_t porta, float ciclo, float t_2, float t_1, float max_desv, FILE *arq);