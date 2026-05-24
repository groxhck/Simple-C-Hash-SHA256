#include <stdio.h>
#include <openssl/sha.h>
#include <string.h>

int main() {
    
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
