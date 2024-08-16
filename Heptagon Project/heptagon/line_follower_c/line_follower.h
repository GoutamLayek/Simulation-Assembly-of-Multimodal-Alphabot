/* --- Generated the 5/5/2024 at 21:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__pid_mem {
  int v_4;
  int v_3;
  int v_1;
  int v;
} Line_follower__pid_mem;

typedef struct Line_follower__pid_out {
  int v_l;
  int v_r;
} Line_follower__pid_out;

void Line_follower__pid_reset(Line_follower__pid_mem* self);

void Line_follower__pid_step(int sen0, int sen1, int sen2, int sen3,
                             int sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_3 ck;
  Line_follower__st_2 v_78;
  int v_79;
  Line_follower__st_1 v_189;
  int v_196;
  int v_194;
  int v_191;
  int v_204;
  int v_202;
  int v_199;
  int v_211;
  int v_209;
  int v_206;
  int v_219;
  int v_217;
  int v_214;
  int v_227;
  int v_225;
  int v_222;
  int v_245;
  int v_243;
  int v_240;
  int v_337;
  int v_335;
  int v_332;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  Line_follower__st v_409;
  int v_415;
  int pnr_3;
  int inputvalue_1;
  Line_follower__pid_mem pid_5;
  Line_follower__pid_mem pid_6;
  Line_follower__pid_mem pid_7;
  Line_follower__pid_mem pid_8;
  Line_follower__pid_mem pid_9;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
  int inputgiven;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int ir_left, int ir_right,
                              int j_input, int sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
