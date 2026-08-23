#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>


void compare_hash(){



}

void encripty_message(){

    char texto[128];

    printf("Insira sua mensagem: ");
    scanf("%127s", texto);

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)texto, strlen(texto), hash);
    printf("Hash SHA-256: ");
    for(int a=0; a < SHA256_DIGEST_LENGTH; a++) {
        printf("%02x", hash[a]);
    }
    printf("\n");
    return 0;

}

int main(int argc, char *argv[]) {
    
    // Entrada dos Argumentos
    if(strcmp(argv[1], "c")==0){
        encripty_message();
    }

}
