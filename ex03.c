#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
int i;
int head = 0, tail = 0;

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

    if(head > tail) printf("You won!\n");
    else printf("You lose!\n");
}
