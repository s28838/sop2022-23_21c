#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void createProcess(char name) {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Błąd forkowania");
        return;
    } else if (pid == 0) {
        // Proces potomny
        printf("Proces %c: PID = %d, PID rodzica = %d\n", name, getpid(), getppid());
    } else {
        // Proces rodzic
        wait(NULL);
    }
}

int main() {
    printf("Proces A: PID = %d\n", getpid());

    createProcess('B');
    createProcess('C');

    return 0;
}
