#include<studio.h>
#include<stdlib.h>
#include "student.h"
#include<assert.h>

void test_program_seats()
{
Program pg = program_seats(60, 60, 60);
assert(pg.ml_seats == 60);
assert(pg.ml_seats_filled==10);
assert(pg.bda_seats_filled==5);
assert(pg.hda_seats_filled==20);


