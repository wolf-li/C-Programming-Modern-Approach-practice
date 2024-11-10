#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg)
{
    printf("Thread: Hello World! \n");
}

int main()
{
    pthread_t thread_id;

    pthread_create(&thread_id, NULL, thread_function, NULL);

    // Problem: How do we tell main() to wait for our thread
    // to execute ?
    return 0; 
}