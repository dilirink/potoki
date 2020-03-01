#include <pthread.h>
#include <stdio.h>



void* func(void* arg)
{
    int i = *((int*)arg);
    printf("%d\n",i);
}

int main(void)
{
    pthread_t thread;
    for (int i=1;i<=3;i++)
    {
        pthread_create(&thread,NULL,func,(void*)(&i));
 	pthread_join(thread,NULL);
   }
}
