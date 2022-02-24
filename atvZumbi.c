#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {

    int pid = fork();

    if (pid != 0) { // pai
	execlp("/bin/ps", "ps", "-l", NULL);
        sleep(10);
    }
    else { // filho
        exit(0);
    }
}
