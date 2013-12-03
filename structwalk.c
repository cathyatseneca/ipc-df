#include <stdio.h>
#include <string.h>

struct Candy{
  char name_[31];
  int amt_;
};
void print(struct Candy* p){
  printf("%s - %d\n",p->name_,p->amt_);
}

int main(void){

    struct Candy c;
    strcpy(c.name_,"jellybean");
    c.amt_=5;
    print(&c);
}
