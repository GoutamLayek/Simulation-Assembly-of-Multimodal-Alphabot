/* --- Generated the 5/5/2024 at 21:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st_3 Line_follower__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_White")==0)) {
    return Line_follower__St_3_White;
  };
  if ((strcmp(s, "St_3_Joystick")==0)) {
    return Line_follower__St_3_Joystick;
  };
  if ((strcmp(s, "St_3_Inputval")==0)) {
    return Line_follower__St_3_Inputval;
  };
  if ((strcmp(s, "St_3_Black")==0)) {
    return Line_follower__St_3_Black;
  };
}

char* string_of_Line_follower__st_3(Line_follower__st_3 x, char* buf) {
  switch (x) {
    case Line_follower__St_3_White:
      strcpy(buf, "St_3_White");
      break;
    case Line_follower__St_3_Joystick:
      strcpy(buf, "St_3_Joystick");
      break;
    case Line_follower__St_3_Inputval:
      strcpy(buf, "St_3_Inputval");
      break;
    case Line_follower__St_3_Black:
      strcpy(buf, "St_3_Black");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st_2 Line_follower__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Right")==0)) {
    return Line_follower__St_2_Right;
  };
  if ((strcmp(s, "St_2_Left")==0)) {
    return Line_follower__St_2_Left;
  };
  if ((strcmp(s, "St_2_Idle")==0)) {
    return Line_follower__St_2_Idle;
  };
  if ((strcmp(s, "St_2_Forward")==0)) {
    return Line_follower__St_2_Forward;
  };
  if ((strcmp(s, "St_2_Backward")==0)) {
    return Line_follower__St_2_Backward;
  };
}

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf) {
  switch (x) {
    case Line_follower__St_2_Right:
      strcpy(buf, "St_2_Right");
      break;
    case Line_follower__St_2_Left:
      strcpy(buf, "St_2_Left");
      break;
    case Line_follower__St_2_Idle:
      strcpy(buf, "St_2_Idle");
      break;
    case Line_follower__St_2_Forward:
      strcpy(buf, "St_2_Forward");
      break;
    case Line_follower__St_2_Backward:
      strcpy(buf, "St_2_Backward");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st_1 Line_follower__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Turnright")==0)) {
    return Line_follower__St_1_Turnright;
  };
  if ((strcmp(s, "St_1_Turnleft")==0)) {
    return Line_follower__St_1_Turnleft;
  };
  if ((strcmp(s, "St_1_Stop")==0)) {
    return Line_follower__St_1_Stop;
  };
  if ((strcmp(s, "St_1_Pid")==0)) {
    return Line_follower__St_1_Pid;
  };
  if ((strcmp(s, "St_1_Parkright")==0)) {
    return Line_follower__St_1_Parkright;
  };
  if ((strcmp(s, "St_1_Parkleft")==0)) {
    return Line_follower__St_1_Parkleft;
  };
  if ((strcmp(s, "St_1_Parkingstart")==0)) {
    return Line_follower__St_1_Parkingstart;
  };
  if ((strcmp(s, "St_1_Parkingright")==0)) {
    return Line_follower__St_1_Parkingright;
  };
  if ((strcmp(s, "St_1_Parkingrestart")==0)) {
    return Line_follower__St_1_Parkingrestart;
  };
  if ((strcmp(s, "St_1_Parkingpid")==0)) {
    return Line_follower__St_1_Parkingpid;
  };
  if ((strcmp(s, "St_1_Parkingleft")==0)) {
    return Line_follower__St_1_Parkingleft;
  };
  if ((strcmp(s, "St_1_Parkingcheck")==0)) {
    return Line_follower__St_1_Parkingcheck;
  };
  if ((strcmp(s, "St_1_Parked")==0)) {
    return Line_follower__St_1_Parked;
  };
  if ((strcmp(s, "St_1_Idle")==0)) {
    return Line_follower__St_1_Idle;
  };
  if ((strcmp(s, "St_1_Boxturnright")==0)) {
    return Line_follower__St_1_Boxturnright;
  };
  if ((strcmp(s, "St_1_Boxturnleft")==0)) {
    return Line_follower__St_1_Boxturnleft;
  };
  if ((strcmp(s, "St_1_Boxpid")==0)) {
    return Line_follower__St_1_Boxpid;
  };
  if ((strcmp(s, "St_1_Box")==0)) {
    return Line_follower__St_1_Box;
  };
  if ((strcmp(s, "St_1_Backright")==0)) {
    return Line_follower__St_1_Backright;
  };
  if ((strcmp(s, "St_1_Backleft")==0)) {
    return Line_follower__St_1_Backleft;
  };
}

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf) {
  switch (x) {
    case Line_follower__St_1_Turnright:
      strcpy(buf, "St_1_Turnright");
      break;
    case Line_follower__St_1_Turnleft:
      strcpy(buf, "St_1_Turnleft");
      break;
    case Line_follower__St_1_Stop:
      strcpy(buf, "St_1_Stop");
      break;
    case Line_follower__St_1_Pid:
      strcpy(buf, "St_1_Pid");
      break;
    case Line_follower__St_1_Parkright:
      strcpy(buf, "St_1_Parkright");
      break;
    case Line_follower__St_1_Parkleft:
      strcpy(buf, "St_1_Parkleft");
      break;
    case Line_follower__St_1_Parkingstart:
      strcpy(buf, "St_1_Parkingstart");
      break;
    case Line_follower__St_1_Parkingright:
      strcpy(buf, "St_1_Parkingright");
      break;
    case Line_follower__St_1_Parkingrestart:
      strcpy(buf, "St_1_Parkingrestart");
      break;
    case Line_follower__St_1_Parkingpid:
      strcpy(buf, "St_1_Parkingpid");
      break;
    case Line_follower__St_1_Parkingleft:
      strcpy(buf, "St_1_Parkingleft");
      break;
    case Line_follower__St_1_Parkingcheck:
      strcpy(buf, "St_1_Parkingcheck");
      break;
    case Line_follower__St_1_Parked:
      strcpy(buf, "St_1_Parked");
      break;
    case Line_follower__St_1_Idle:
      strcpy(buf, "St_1_Idle");
      break;
    case Line_follower__St_1_Boxturnright:
      strcpy(buf, "St_1_Boxturnright");
      break;
    case Line_follower__St_1_Boxturnleft:
      strcpy(buf, "St_1_Boxturnleft");
      break;
    case Line_follower__St_1_Boxpid:
      strcpy(buf, "St_1_Boxpid");
      break;
    case Line_follower__St_1_Box:
      strcpy(buf, "St_1_Box");
      break;
    case Line_follower__St_1_Backright:
      strcpy(buf, "St_1_Backright");
      break;
    case Line_follower__St_1_Backleft:
      strcpy(buf, "St_1_Backleft");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_Turnright")==0)) {
    return Line_follower__St_Turnright;
  };
  if ((strcmp(s, "St_Turnleft")==0)) {
    return Line_follower__St_Turnleft;
  };
  if ((strcmp(s, "St_Stop")==0)) {
    return Line_follower__St_Stop;
  };
  if ((strcmp(s, "St_Pid")==0)) {
    return Line_follower__St_Pid;
  };
  if ((strcmp(s, "St_Idle")==0)) {
    return Line_follower__St_Idle;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_Turnright:
      strcpy(buf, "St_Turnright");
      break;
    case Line_follower__St_Turnleft:
      strcpy(buf, "St_Turnleft");
      break;
    case Line_follower__St_Stop:
      strcpy(buf, "St_Stop");
      break;
    case Line_follower__St_Pid:
      strcpy(buf, "St_Pid");
      break;
    case Line_follower__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    default:
      break;
  };
  return buf;
}

