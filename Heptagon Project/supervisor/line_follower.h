/* --- Generated the 5/5/2024 at 21:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__pid_mem {
  long v_4;
  long v_3;
  long v_1;
  long v;
} Line_follower__pid_mem;

typedef struct Line_follower__pid_out {
  long v_l;
  long v_r;
} Line_follower__pid_out;

void Line_follower__pid_reset(Line_follower__pid_mem* self);

void Line_follower__pid_step(long sen0, long sen1, long sen2, long sen3,
                             long sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_3 ck;
  Line_follower__st_2 v_78;
  long v_79;
  Line_follower__st_1 v_189;
  long v_196;
  long v_194;
  long v_191;
  long v_204;
  long v_202;
  long v_199;
  long v_211;
  long v_209;
  long v_206;
  long v_219;
  long v_217;
  long v_214;
  long v_227;
  long v_225;
  long v_222;
  long v_245;
  long v_243;
  long v_240;
  long v_337;
  long v_335;
  long v_332;
  long v_347;
  long v_346;
  long v_345;
  long v_344;
  Line_follower__st v_409;
  long v_415;
  long pnr_3;
  long inputvalue_1;
  Line_follower__pid_mem pid_5;
  Line_follower__pid_mem pid_6;
  Line_follower__pid_mem pid_7;
  Line_follower__pid_mem pid_8;
  Line_follower__pid_mem pid_9;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
  long dir;
  long inputgiven;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long ir_left, long ir_right,
                              long j_input, long sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
