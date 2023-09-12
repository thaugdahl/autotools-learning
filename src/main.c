#include <stdio.h>
#include <pthread.h>


void *task(void *ptr) {

    int a = (size_t) ptr;

    printf("%d\n", a);

}

int main(
        __attribute((unused)) int argc,
        __attribute((unused)) char ** argv
        )
{
    printf("Hello from jupiter!\n");

    pthread_t tid;
    pthread_create(&tid, 0, task, (void *) 30);

    return 0;
}

