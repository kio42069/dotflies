#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
    int x = 0;
    printf("hello world (pid:%d)\n", (int) getpid());
    x = 100;
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        x = 50;
        printf("hello, I am child (pid:%d)\n", (int) getpid());
        printf("%d", x);
    } else {
        printf("%d", x);
        printf("hello, I am parent of %d (pid:%d)\n",
	       rc, (int) getpid());
    }
    return 0;
}
