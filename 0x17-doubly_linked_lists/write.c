#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

int main (int argc, char* argv[])
{
    const char *cadena = "en C Pyfo neZ";

    int archivo = open("100-password", O_CREAT | O_WRONLY, 0644);

    if (archivo == -1)
    {
        perror("Yyy... mira papi, 0 ganas de abrirte el archivo");
        exit(1);
    }

    write(archivo, cadena, 13);
    close(archivo);
    return 0;
}
