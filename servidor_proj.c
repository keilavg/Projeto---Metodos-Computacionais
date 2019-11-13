#include "servidor_proj.h"

int inicia_e_le (uint16_t porta, FILE *arq){
//inicia a operação e lê do arquivo os valores do ciclo, t_1, t_2 e max_desv
    int welcomeSocket, newSocket;
    struct sockaddr_in serverAddr;
    struct sockaddr_storage serverStorage;
    socklen_t addr_size;
    char *leitura;
    char *linhas[100];

    clrscr ();
    arq = fopen ("ArqTeste.txt", "rt");

    if(arq == NULL){
        printf("Arquivo com problemas, erro de leitura!");
        return;
    }

    int i =1;
    while(!feof(arq)){
        leitura = fgets(Linha, 100, arq); 
        if(result){
            printf("Linha %d: %s, i, Linha");
            scanf () //***********PROBLEMA**************
        }
        i++;
    }

    welcomeSocket = socket(PF_INET, SOCK_STREAM, 0);

    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(porta);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    bind(welcomeSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

    if(listen(welcomeSocket,5)==0)
        printf("Escutando...\n");
    else
        printf("Erro!\n");

    addr_size = sizeof serverStorage;
    newSocket = accept(welcomeSocket, (struct sockaddr *) &serverStorage, &addr_size);




    return newSocket;

}