#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
int i,rnd;
int head = 0, tail = 0;
char name[10];

    printf("Who are you?\n> ");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

printf("Tossing a coin...\n");

for(i=1;i<4;i++){
    srand((unsigned int)time(NULL));
    rnd = rand();
    printf("round %d: ",i);
    if(rnd%2 == 1){
      printf("Heads\n");
      head++;
    }
    if(rnd%2 == 0){
      printf("Tails\n");
      tail++;
    }
    if(i<3) sleep(1);
  }

printf("Heads: %d, Tails: %d\n",head,tail);

    if(head > tail) printf("%s won!\n",name);
    else printf("%s lose!\n",name);
}
