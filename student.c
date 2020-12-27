#include<string.h>
#include "student.h"

Program program _seats(int8_t ml,int8_t bda,int8_t hda){
Program prg = (ml, bda, hda);
return prg;
}

int8_t filled_seats(Program pg, char program[]){
if(grade<5.0){
return  "not allow";
}
else{
return "allow"
}
if(!strcmp (program, "ml"))
return pg.ml_seats_filled;
else if(!strcmp (program, "bda"))
return pg.ml_seats_filled;
if(!strcmp (program, "hda"))
return pg.ml_seats_filled;
}

 