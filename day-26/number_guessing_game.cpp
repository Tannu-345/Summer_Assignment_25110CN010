#include <iostream>
#include <random>
using namespace std;

int main(){
   // int random_num;
   //for in range
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<int> distr(1,50);
   int num=distr(gen);
   int num_guessed;
   cout<<"guess a num:";
   cin>>num_guessed;

   while(num!=num_guessed){
   if(num_guessed>num){
      cout<<"its quite large, think of a smaller num."<<endl;
   }else{
      cout<<"its quite small, think of a larger num."<<endl;
   }
   cout<<"guess a num:";
   cin>>num_guessed;
}
cout<<"Bingo! u got it.";
   return 0;
}