#include <stdio.h>

struct Item{
  int above_;
  int below_;
};

void print(struct Item* thing){
  printf("%d/%d\n",thing->above_, thing->below_);
}
void set(struct Item* thing,int a,int b){
  thing->above_=a;
  thing->below_=b;
}
void go(struct Item* first, struct Item* second, struct Item* third){
  first->above_=second->above_*third->above_;
  first->below_=second->below_*third->below_;
}

void complex(struct Item* it){
   int alpha, beta;
   int delta, gamma;
   if(it->above_ > it->below_){
      alpha=it->above_;
      beta = it->below_;
   }
   else{
      alpha = it->below_;
      beta = it->above_;
   }
   delta = alpha / beta;
   gamma = alpha % beta;
   while(gamma != 0){
     alpha = beta;
     beta = gamma;
     delta = alpha / beta;
     gamma = alpha % beta; 
   }
   it->above_ = it->above_/beta;
   it->below_ = it->below_/beta;
}
int main(void){
  struct Item one, two, three;
  
  set(&one, 3, 5);
  set(&two, 2, 3);
  print(&one);
  print(&two);
  go(&three,&one,&two);
  print(&three);
  complex(&three);
  print(&three);

}
