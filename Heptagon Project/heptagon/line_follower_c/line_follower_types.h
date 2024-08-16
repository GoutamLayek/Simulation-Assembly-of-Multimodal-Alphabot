/* --- Generated the 5/5/2024 at 21:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Line_follower__St_3_White,
  Line_follower__St_3_Joystick,
  Line_follower__St_3_Inputval,
  Line_follower__St_3_Black
} Line_follower__st_3;

Line_follower__st_3 Line_follower__st_3_of_string(char* s);

char* string_of_Line_follower__st_3(Line_follower__st_3 x, char* buf);

typedef enum {
  Line_follower__St_2_Right,
  Line_follower__St_2_Left,
  Line_follower__St_2_Idle,
  Line_follower__St_2_Forward,
  Line_follower__St_2_Backward
} Line_follower__st_2;

Line_follower__st_2 Line_follower__st_2_of_string(char* s);

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf);

typedef enum {
  Line_follower__St_1_Turnright,
  Line_follower__St_1_Turnleft,
  Line_follower__St_1_Stop,
  Line_follower__St_1_Pid,
  Line_follower__St_1_Parkright,
  Line_follower__St_1_Parkleft,
  Line_follower__St_1_Parkingstart,
  Line_follower__St_1_Parkingright,
  Line_follower__St_1_Parkingrestart,
  Line_follower__St_1_Parkingpid,
  Line_follower__St_1_Parkingleft,
  Line_follower__St_1_Parkingcheck,
  Line_follower__St_1_Parked,
  Line_follower__St_1_Idle,
  Line_follower__St_1_Boxturnright,
  Line_follower__St_1_Boxturnleft,
  Line_follower__St_1_Boxpid,
  Line_follower__St_1_Box,
  Line_follower__St_1_Backright,
  Line_follower__St_1_Backleft
} Line_follower__st_1;

Line_follower__st_1 Line_follower__st_1_of_string(char* s);

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf);

typedef enum {
  Line_follower__St_Turnright,
  Line_follower__St_Turnleft,
  Line_follower__St_Stop,
  Line_follower__St_Pid,
  Line_follower__St_Idle
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

static const int Line_follower__kp = 1;

static const int Line_follower__ki = 100;

static const int Line_follower__kd = 10000;

static const int Line_follower__s = 3800;

static const int Line_follower__ns = 300;

#endif // LINE_FOLLOWER_TYPES_H
