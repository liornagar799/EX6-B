#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include "team.hpp"
#include <cstdlib>

using namespace std;


namespace ariel{

class game{

public:
team home;
team out;
int result;

game(){
this->home=null;
this->out=null;
this->result=0;
}

game(team a, team b){
this->home=a;
this->out=b;
this->home->how_mach=rand() % 45 + 55; 
this->out->how_mach=rand() % 50 + 50; 
int r=0;
if(a.how_mach>b.how_mach){
   r=a.result
}
if(a.how_mach<b.how_mach){
   r=b.result;
}
if(a.how_mach==b.how_mach){
  if (a.talent>=b.talent){
    r=a.result
  }else{
    r=b.result;
  }  
}
this->result=r;
}

