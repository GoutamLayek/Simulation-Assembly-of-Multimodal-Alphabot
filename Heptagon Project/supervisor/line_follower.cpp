/* --- Generated the 5/5/2024 at 21:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sun. jan. 21 18:40:18 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__pid_reset(Line_follower__pid_mem* self) {
  self->v_3 = true;
  self->v = true;
}

void Line_follower__pid_step(long sen0, long sen1, long sen2, long sen3,
                             long sen4, Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self) {
  
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_2;
  long error;
  long i;
  long p;
  long d;
  long temp;
  long pid;
  if (self->v_3) {
    v_5 = 0;
  } else {
    v_5 = self->v_4;
  };
  error = (sen1-sen3);
  d = (error-v_5);
  v_9 = (d/Line_follower__kd);
  v_2 = (self->v_1+error);
  if (self->v) {
    i = 0;
  } else {
    i = v_2;
  };
  v_7 = (i/Line_follower__ki);
  p = error;
  v_6 = (p/Line_follower__kp);
  v_8 = (v_6+v_7);
  temp = (v_8+v_9);
  v_10 = (temp<0);
  if (v_10) {
    pid = -10;
  } else {
    pid = 10;
  };
  v_14 = (30+pid);
  v_13 = (pid==0);
  if (v_13) {
    _out->v_r = 50;
  } else {
    _out->v_r = v_14;
  };
  v_12 = (30-pid);
  v_11 = (pid==0);
  if (v_11) {
    _out->v_l = 50;
  } else {
    _out->v_l = v_12;
  };
  self->v_4 = error;
  self->v_3 = false;
  self->v_1 = i;
  self->v = false;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__pid_reset(&self->pid_9);
  Line_follower__pid_reset(&self->pid_8);
  Line_follower__pid_reset(&self->pid_7);
  Line_follower__pid_reset(&self->pid_6);
  Line_follower__pid_reset(&self->pid_5);
  self->v_415 = false;
  self->v_409 = Line_follower__St_Idle;
  self->v_347 = 0;
  self->v_346 = 0;
  self->v_345 = 0;
  self->v_344 = false;
  self->v_189 = Line_follower__St_1_Idle;
  self->v_79 = false;
  self->v_78 = Line_follower__St_2_Idle;
  self->inputvalue_1 = 0;
  self->pnr_3 = false;
  self->ck = Line_follower__St_3_Inputval;
  self->v_332 = true;
  self->v_240 = true;
  self->v_222 = true;
  self->v_214 = true;
  self->v_206 = true;
  self->v_199 = true;
  self->v_191 = true;
}

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long ir_left, long ir_right,
                              long j_input, long sec,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__pid_out Line_follower__pid_out_st;
  
  long v;
  long v_15;
  long v_26;
  Line_follower__st_3 v_25;
  long v_24;
  Line_follower__st_3 v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_19;
  long v_18;
  long v_17;
  long v_16;
  long v_27;
  long r_3_St_3_Joystick;
  Line_follower__st_3 s_3_St_3_Joystick;
  long r_3_St_3_Black;
  Line_follower__st_3 s_3_St_3_Black;
  long r_3_St_3_White;
  Line_follower__st_3 s_3_St_3_White;
  long r_3_St_3_Inputval;
  Line_follower__st_3 s_3_St_3_Inputval;
  long v_37;
  Line_follower__st_2 v_36;
  long v_35;
  Line_follower__st_2 v_34;
  long v_33;
  Line_follower__st_2 v_32;
  long v_31;
  long v_30;
  long v_29;
  long v_28;
  long v_47;
  Line_follower__st_2 v_46;
  long v_45;
  Line_follower__st_2 v_44;
  long v_43;
  Line_follower__st_2 v_42;
  long v_41;
  long v_40;
  long v_39;
  long v_38;
  long v_57;
  Line_follower__st_2 v_56;
  long v_55;
  Line_follower__st_2 v_54;
  long v_53;
  Line_follower__st_2 v_52;
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_67;
  Line_follower__st_2 v_66;
  long v_65;
  Line_follower__st_2 v_64;
  long v_63;
  Line_follower__st_2 v_62;
  long v_61;
  long v_60;
  long v_59;
  long v_58;
  long v_77;
  Line_follower__st_2 v_76;
  long v_75;
  Line_follower__st_2 v_74;
  long v_73;
  Line_follower__st_2 v_72;
  long v_71;
  long v_70;
  long v_69;
  long v_68;
  long r_2_St_2_Backward;
  Line_follower__st_2 s_2_St_2_Backward;
  long r_2_St_2_Forward;
  Line_follower__st_2 s_2_St_2_Forward;
  long r_2_St_2_Right;
  Line_follower__st_2 s_2_St_2_Right;
  long r_2_St_2_Left;
  Line_follower__st_2 s_2_St_2_Left;
  long r_2_St_2_Idle;
  Line_follower__st_2 s_2_St_2_Idle;
  Line_follower__st_2 ck_6;
  long nr_2_St_2_Backward;
  Line_follower__st_2 ns_2_St_2_Backward;
  long dir_St_3_Joystick_St_2_Backward;
  long v_r_St_3_Joystick_St_2_Backward;
  long v_l_St_3_Joystick_St_2_Backward;
  long nr_2_St_2_Forward;
  Line_follower__st_2 ns_2_St_2_Forward;
  long dir_St_3_Joystick_St_2_Forward;
  long v_r_St_3_Joystick_St_2_Forward;
  long v_l_St_3_Joystick_St_2_Forward;
  long nr_2_St_2_Right;
  Line_follower__st_2 ns_2_St_2_Right;
  long dir_St_3_Joystick_St_2_Right;
  long v_r_St_3_Joystick_St_2_Right;
  long v_l_St_3_Joystick_St_2_Right;
  long nr_2_St_2_Left;
  Line_follower__st_2 ns_2_St_2_Left;
  long dir_St_3_Joystick_St_2_Left;
  long v_r_St_3_Joystick_St_2_Left;
  long v_l_St_3_Joystick_St_2_Left;
  long nr_2_St_2_Idle;
  Line_follower__st_2 ns_2_St_2_Idle;
  long dir_St_3_Joystick_St_2_Idle;
  long v_r_St_3_Joystick_St_2_Idle;
  long v_l_St_3_Joystick_St_2_Idle;
  Line_follower__st_2 ck_7;
  Line_follower__st_2 s_2;
  Line_follower__st_2 ns_2;
  long r_2;
  long nr_2;
  long pnr_2;
  long v_87;
  long v_86;
  long v_85;
  long v_84;
  long v_83;
  long v_82;
  long v_81;
  long v_80;
  long v_102;
  long v_101;
  long v_100;
  long v_99;
  long v_98;
  long v_97;
  long v_96;
  long v_95;
  long v_94;
  long v_93;
  long v_92;
  long v_91;
  long v_90;
  long v_89;
  long v_88;
  long v_117;
  long v_116;
  long v_115;
  long v_114;
  long v_113;
  long v_112;
  long v_111;
  long v_110;
  long v_109;
  long v_108;
  long v_107;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_125;
  long v_124;
  long v_123;
  long v_122;
  long v_121;
  long v_120;
  long v_119;
  long v_118;
  long v_134;
  Line_follower__st_1 v_133;
  long v_132;
  long v_131;
  long v_130;
  long v_129;
  long v_128;
  long v_127;
  long v_126;
  long v_143;
  Line_follower__st_1 v_142;
  long v_141;
  long v_140;
  long v_139;
  long v_138;
  long v_137;
  long v_136;
  long v_135;
  long v_162;
  Line_follower__st_1 v_161;
  long v_160;
  Line_follower__st_1 v_159;
  long v_158;
  long v_157;
  long v_156;
  long v_155;
  long v_154;
  long v_153;
  long v_152;
  long v_151;
  long v_150;
  long v_149;
  long v_148;
  long v_147;
  long v_146;
  long v_145;
  long v_144;
  long v_188;
  Line_follower__st_1 v_187;
  long v_186;
  Line_follower__st_1 v_185;
  long v_184;
  Line_follower__st_1 v_183;
  long v_182;
  long v_181;
  long v_180;
  long v_179;
  long v_178;
  long v_177;
  long v_176;
  long v_175;
  long v_174;
  long v_173;
  long v_172;
  long v_171;
  long v_170;
  long v_169;
  long v_168;
  long v_167;
  long v_166;
  long v_165;
  long v_164;
  long v_163;
  long r_1_St_1_Parked;
  Line_follower__st_1 s_1_St_1_Parked;
  long r_1_St_1_Backleft;
  Line_follower__st_1 s_1_St_1_Backleft;
  long r_1_St_1_Backright;
  Line_follower__st_1 s_1_St_1_Backright;
  long r_1_St_1_Parkingrestart;
  Line_follower__st_1 s_1_St_1_Parkingrestart;
  long r_1_St_1_Parkright;
  Line_follower__st_1 s_1_St_1_Parkright;
  long r_1_St_1_Parkleft;
  Line_follower__st_1 s_1_St_1_Parkleft;
  long r_1_St_1_Parkingcheck;
  Line_follower__st_1 s_1_St_1_Parkingcheck;
  long r_1_St_1_Parkingstart;
  Line_follower__st_1 s_1_St_1_Parkingstart;
  long r_1_St_1_Parkingpid;
  Line_follower__st_1 s_1_St_1_Parkingpid;
  long r_1_St_1_Parkingright;
  Line_follower__st_1 s_1_St_1_Parkingright;
  long r_1_St_1_Parkingleft;
  Line_follower__st_1 s_1_St_1_Parkingleft;
  long r_1_St_1_Boxpid;
  Line_follower__st_1 s_1_St_1_Boxpid;
  long r_1_St_1_Boxturnright;
  Line_follower__st_1 s_1_St_1_Boxturnright;
  long r_1_St_1_Boxturnleft;
  Line_follower__st_1 s_1_St_1_Boxturnleft;
  long r_1_St_1_Box;
  Line_follower__st_1 s_1_St_1_Box;
  long r_1_St_1_Stop;
  Line_follower__st_1 s_1_St_1_Stop;
  long r_1_St_1_Turnright;
  Line_follower__st_1 s_1_St_1_Turnright;
  long r_1_St_1_Turnleft;
  Line_follower__st_1 s_1_St_1_Turnleft;
  long r_1_St_1_Pid;
  Line_follower__st_1 s_1_St_1_Pid;
  long r_1_St_1_Idle;
  Line_follower__st_1 s_1_St_1_Idle;
  Line_follower__st_1 ck_4;
  long v_197;
  long v_195;
  long v_193;
  long v_192;
  long v_190;
  long time_6;
  long v_205;
  long v_203;
  long v_201;
  long v_200;
  long v_198;
  long time_5;
  long v_212;
  long v_210;
  long v_208;
  long v_207;
  long time_4;
  long v_220;
  long v_218;
  long v_216;
  long v_215;
  long v_213;
  long time_3;
  long v_228;
  long v_226;
  long v_224;
  long v_223;
  long v_221;
  long time_2;
  long v_234;
  Line_follower__st_1 v_233;
  long v_232;
  Line_follower__st_1 v_231;
  long v_230;
  long v_229;
  long v_251;
  long v_250;
  long v_249;
  long v_248;
  long v_247;
  long v_246;
  long v_244;
  long v_242;
  long v_241;
  long v_239;
  long v_238;
  long v_237;
  long v_236;
  long v_235;
  long r_4;
  long time_1;
  long v_256;
  long v_255;
  long v_254;
  long v_253;
  long v_252;
  long r_5;
  long v_261;
  long v_260;
  long v_259;
  long v_258;
  long v_257;
  long r_6;
  long v_276;
  long v_275;
  long v_274;
  long v_273;
  long v_272;
  long v_271;
  long v_270;
  long v_269;
  long v_268;
  long v_267;
  long v_266;
  long v_265;
  long v_264;
  long v_263;
  long v_262;
  long v_291;
  long v_290;
  long v_289;
  long v_288;
  long v_287;
  long v_286;
  long v_285;
  long v_284;
  long v_283;
  long v_282;
  long v_281;
  long v_280;
  long v_279;
  long v_278;
  long v_277;
  long v_330;
  Line_follower__st_1 v_329;
  long v_328;
  Line_follower__st_1 v_327;
  long v_326;
  Line_follower__st_1 v_325;
  long v_324;
  long v_323;
  long v_322;
  long v_321;
  long v_320;
  long v_319;
  long v_318;
  long v_317;
  long v_316;
  long v_315;
  long v_314;
  long v_313;
  long v_312;
  long v_311;
  long v_310;
  long v_309;
  long v_308;
  long v_307;
  long v_306;
  long v_305;
  long v_304;
  long v_303;
  long v_302;
  long v_301;
  long v_300;
  long v_299;
  long v_298;
  long v_297;
  long v_296;
  long v_295;
  long v_294;
  long v_293;
  long v_292;
  long v_338;
  long v_336;
  long v_334;
  long v_333;
  long v_331;
  long time;
  long v_343;
  long v_342;
  long v_341;
  long v_340;
  long v_339;
  long r_7;
  long nr_1_St_1_Parked;
  Line_follower__st_1 ns_1_St_1_Parked;
  long bound_right_St_1_Parked;
  long bound_left_St_1_Parked;
  long count_St_1_Parked;
  long dir_St_3_Black_St_1_Parked;
  long v_r_St_3_Black_St_1_Parked;
  long v_l_St_3_Black_St_1_Parked;
  long nr_1_St_1_Backleft;
  Line_follower__st_1 ns_1_St_1_Backleft;
  long bound_right_St_1_Backleft;
  long bound_left_St_1_Backleft;
  long count_St_1_Backleft;
  long dir_St_3_Black_St_1_Backleft;
  long v_r_St_3_Black_St_1_Backleft;
  long v_l_St_3_Black_St_1_Backleft;
  long nr_1_St_1_Backright;
  Line_follower__st_1 ns_1_St_1_Backright;
  long bound_right_St_1_Backright;
  long bound_left_St_1_Backright;
  long count_St_1_Backright;
  long dir_St_3_Black_St_1_Backright;
  long v_r_St_3_Black_St_1_Backright;
  long v_l_St_3_Black_St_1_Backright;
  long nr_1_St_1_Parkingrestart;
  Line_follower__st_1 ns_1_St_1_Parkingrestart;
  long bound_right_St_1_Parkingrestart;
  long bound_left_St_1_Parkingrestart;
  long count_St_1_Parkingrestart;
  long dir_St_3_Black_St_1_Parkingrestart;
  long v_r_St_3_Black_St_1_Parkingrestart;
  long v_l_St_3_Black_St_1_Parkingrestart;
  long nr_1_St_1_Parkright;
  Line_follower__st_1 ns_1_St_1_Parkright;
  long bound_right_St_1_Parkright;
  long bound_left_St_1_Parkright;
  long count_St_1_Parkright;
  long dir_St_3_Black_St_1_Parkright;
  long v_r_St_3_Black_St_1_Parkright;
  long v_l_St_3_Black_St_1_Parkright;
  long nr_1_St_1_Parkleft;
  Line_follower__st_1 ns_1_St_1_Parkleft;
  long bound_right_St_1_Parkleft;
  long bound_left_St_1_Parkleft;
  long count_St_1_Parkleft;
  long dir_St_3_Black_St_1_Parkleft;
  long v_r_St_3_Black_St_1_Parkleft;
  long v_l_St_3_Black_St_1_Parkleft;
  long nr_1_St_1_Parkingcheck;
  Line_follower__st_1 ns_1_St_1_Parkingcheck;
  long bound_right_St_1_Parkingcheck;
  long bound_left_St_1_Parkingcheck;
  long count_St_1_Parkingcheck;
  long dir_St_3_Black_St_1_Parkingcheck;
  long v_r_St_3_Black_St_1_Parkingcheck;
  long v_l_St_3_Black_St_1_Parkingcheck;
  long nr_1_St_1_Parkingstart;
  Line_follower__st_1 ns_1_St_1_Parkingstart;
  long bound_right_St_1_Parkingstart;
  long bound_left_St_1_Parkingstart;
  long count_St_1_Parkingstart;
  long dir_St_3_Black_St_1_Parkingstart;
  long v_r_St_3_Black_St_1_Parkingstart;
  long v_l_St_3_Black_St_1_Parkingstart;
  long nr_1_St_1_Parkingpid;
  Line_follower__st_1 ns_1_St_1_Parkingpid;
  long bound_right_St_1_Parkingpid;
  long bound_left_St_1_Parkingpid;
  long count_St_1_Parkingpid;
  long dir_St_3_Black_St_1_Parkingpid;
  long v_r_St_3_Black_St_1_Parkingpid;
  long v_l_St_3_Black_St_1_Parkingpid;
  long nr_1_St_1_Parkingright;
  Line_follower__st_1 ns_1_St_1_Parkingright;
  long bound_right_St_1_Parkingright;
  long bound_left_St_1_Parkingright;
  long count_St_1_Parkingright;
  long dir_St_3_Black_St_1_Parkingright;
  long v_r_St_3_Black_St_1_Parkingright;
  long v_l_St_3_Black_St_1_Parkingright;
  long nr_1_St_1_Parkingleft;
  Line_follower__st_1 ns_1_St_1_Parkingleft;
  long bound_right_St_1_Parkingleft;
  long bound_left_St_1_Parkingleft;
  long count_St_1_Parkingleft;
  long dir_St_3_Black_St_1_Parkingleft;
  long v_r_St_3_Black_St_1_Parkingleft;
  long v_l_St_3_Black_St_1_Parkingleft;
  long nr_1_St_1_Boxpid;
  Line_follower__st_1 ns_1_St_1_Boxpid;
  long bound_right_St_1_Boxpid;
  long bound_left_St_1_Boxpid;
  long count_St_1_Boxpid;
  long dir_St_3_Black_St_1_Boxpid;
  long v_r_St_3_Black_St_1_Boxpid;
  long v_l_St_3_Black_St_1_Boxpid;
  long nr_1_St_1_Boxturnright;
  Line_follower__st_1 ns_1_St_1_Boxturnright;
  long bound_right_St_1_Boxturnright;
  long bound_left_St_1_Boxturnright;
  long count_St_1_Boxturnright;
  long dir_St_3_Black_St_1_Boxturnright;
  long v_r_St_3_Black_St_1_Boxturnright;
  long v_l_St_3_Black_St_1_Boxturnright;
  long nr_1_St_1_Boxturnleft;
  Line_follower__st_1 ns_1_St_1_Boxturnleft;
  long bound_right_St_1_Boxturnleft;
  long bound_left_St_1_Boxturnleft;
  long count_St_1_Boxturnleft;
  long dir_St_3_Black_St_1_Boxturnleft;
  long v_r_St_3_Black_St_1_Boxturnleft;
  long v_l_St_3_Black_St_1_Boxturnleft;
  long nr_1_St_1_Box;
  Line_follower__st_1 ns_1_St_1_Box;
  long bound_right_St_1_Box;
  long bound_left_St_1_Box;
  long count_St_1_Box;
  long dir_St_3_Black_St_1_Box;
  long v_r_St_3_Black_St_1_Box;
  long v_l_St_3_Black_St_1_Box;
  long nr_1_St_1_Stop;
  Line_follower__st_1 ns_1_St_1_Stop;
  long bound_right_St_1_Stop;
  long bound_left_St_1_Stop;
  long count_St_1_Stop;
  long dir_St_3_Black_St_1_Stop;
  long v_r_St_3_Black_St_1_Stop;
  long v_l_St_3_Black_St_1_Stop;
  long nr_1_St_1_Turnright;
  Line_follower__st_1 ns_1_St_1_Turnright;
  long bound_right_St_1_Turnright;
  long bound_left_St_1_Turnright;
  long count_St_1_Turnright;
  long dir_St_3_Black_St_1_Turnright;
  long v_r_St_3_Black_St_1_Turnright;
  long v_l_St_3_Black_St_1_Turnright;
  long nr_1_St_1_Turnleft;
  Line_follower__st_1 ns_1_St_1_Turnleft;
  long bound_right_St_1_Turnleft;
  long bound_left_St_1_Turnleft;
  long count_St_1_Turnleft;
  long dir_St_3_Black_St_1_Turnleft;
  long v_r_St_3_Black_St_1_Turnleft;
  long v_l_St_3_Black_St_1_Turnleft;
  long nr_1_St_1_Pid;
  Line_follower__st_1 ns_1_St_1_Pid;
  long bound_right_St_1_Pid;
  long bound_left_St_1_Pid;
  long count_St_1_Pid;
  long dir_St_3_Black_St_1_Pid;
  long v_r_St_3_Black_St_1_Pid;
  long v_l_St_3_Black_St_1_Pid;
  long nr_1_St_1_Idle;
  Line_follower__st_1 ns_1_St_1_Idle;
  long bound_right_St_1_Idle;
  long bound_left_St_1_Idle;
  long count_St_1_Idle;
  long dir_St_3_Black_St_1_Idle;
  long v_r_St_3_Black_St_1_Idle;
  long v_l_St_3_Black_St_1_Idle;
  Line_follower__st_1 ck_5;
  Line_follower__st_1 s_1;
  Line_follower__st_1 ns_1;
  long r_1;
  long nr_1;
  long pnr_1;
  long bound_right_1;
  long bound_left_1;
  long count_1;
  long count;
  long bound_left;
  long bound_right;
  long v_365;
  Line_follower__st v_364;
  long v_363;
  Line_follower__st v_362;
  long v_361;
  long v_360;
  long v_359;
  long v_358;
  long v_357;
  long v_356;
  long v_355;
  long v_354;
  long v_353;
  long v_377;
  Line_follower__st v_376;
  long v_375;
  long v_374;
  long v_373;
  long v_372;
  long v_371;
  long v_370;
  long v_369;
  long v_368;
  long v_367;
  long v_366;
  long v_389;
  Line_follower__st v_388;
  long v_387;
  long v_386;
  long v_385;
  long v_384;
  long v_383;
  long v_382;
  long v_381;
  long v_380;
  long v_379;
  long v_378;
  long v_395;
  Line_follower__st v_394;
  long v_393;
  long v_392;
  long v_391;
  long v_390;
  long v_408;
  Line_follower__st v_407;
  long v_406;
  Line_follower__st v_405;
  long v_404;
  long v_403;
  long v_402;
  long v_401;
  long v_400;
  long v_399;
  long v_398;
  long v_397;
  long v_396;
  long r_St_Stop;
  Line_follower__st s_St_Stop;
  long r_St_Turnright;
  Line_follower__st s_St_Turnright;
  long r_St_Turnleft;
  Line_follower__st s_St_Turnleft;
  long r_St_Pid;
  Line_follower__st s_St_Pid;
  long r_St_Idle;
  Line_follower__st s_St_Idle;
  Line_follower__st ck_2;
  long v_414;
  long v_413;
  long v_412;
  long v_411;
  long v_410;
  long r_8;
  long nr_St_Stop;
  Line_follower__st ns_St_Stop;
  long dir_St_3_White_St_Stop;
  long v_r_St_3_White_St_Stop;
  long v_l_St_3_White_St_Stop;
  long nr_St_Turnright;
  Line_follower__st ns_St_Turnright;
  long dir_St_3_White_St_Turnright;
  long v_r_St_3_White_St_Turnright;
  long v_l_St_3_White_St_Turnright;
  long nr_St_Turnleft;
  Line_follower__st ns_St_Turnleft;
  long dir_St_3_White_St_Turnleft;
  long v_r_St_3_White_St_Turnleft;
  long v_l_St_3_White_St_Turnleft;
  long nr_St_Pid;
  Line_follower__st ns_St_Pid;
  long dir_St_3_White_St_Pid;
  long v_r_St_3_White_St_Pid;
  long v_l_St_3_White_St_Pid;
  long nr_St_Idle;
  Line_follower__st ns_St_Idle;
  long dir_St_3_White_St_Idle;
  long v_r_St_3_White_St_Idle;
  long v_l_St_3_White_St_Idle;
  Line_follower__st ck_3;
  long v_352;
  long v_351;
  long v_350;
  long v_349;
  long v_348;
  Line_follower__st s;
  Line_follower__st ns;
  long r;
  long nr;
  long pnr;
  long v_422;
  long v_421;
  long v_420;
  long v_419;
  long v_418;
  long v_417;
  long v_416;
  long nr_3_St_3_Joystick;
  Line_follower__st_3 ns_3_St_3_Joystick;
  long inputvalue_St_3_Joystick;
  long sen_St_3_Joystick[5];
  long dir_St_3_Joystick;
  long v_r_St_3_Joystick;
  long v_l_St_3_Joystick;
  long nr_3_St_3_Black;
  Line_follower__st_3 ns_3_St_3_Black;
  long inputvalue_St_3_Black;
  long sen_St_3_Black[5];
  long dir_St_3_Black;
  long v_r_St_3_Black;
  long v_l_St_3_Black;
  long nr_3_St_3_White;
  Line_follower__st_3 ns_3_St_3_White;
  long inputvalue_St_3_White;
  long sen_St_3_White[5];
  long dir_St_3_White;
  long v_r_St_3_White;
  long v_l_St_3_White;
  long nr_3_St_3_Inputval;
  Line_follower__st_3 ns_3_St_3_Inputval;
  long inputvalue_St_3_Inputval;
  long sen_St_3_Inputval[5];
  long dir_St_3_Inputval;
  long v_r_St_3_Inputval;
  long v_l_St_3_Inputval;
  Line_follower__st_3 ck_1;
  Line_follower__st_3 s_3;
  Line_follower__st_3 ns_3;
  long r_3;
  long nr_3;
  long sen[5];
  long inputvalue;
  switch (self->ck) {
    case Line_follower__St_3_Inputval:
      v_27 = (j_input==6);
      if (v_27) {
        r_3_St_3_Inputval = true;
        s_3_St_3_Inputval = Line_follower__St_3_White;
      } else {
        r_3_St_3_Inputval = self->pnr_3;
        s_3_St_3_Inputval = Line_follower__St_3_Inputval;
      };
      s_3 = s_3_St_3_Inputval;
      r_3 = r_3_St_3_Inputval;
      break;
    case Line_follower__St_3_White:
      v_21 = (sen2<600);
      v_19 = (sen4>600);
      v_18 = (sen0>600);
      v_20 = (v_18&&v_19);
      v_22 = (v_20&&v_21);
      if (v_22) {
        v_24 = true;
        v_23 = Line_follower__St_3_Black;
      } else {
        v_24 = self->pnr_3;
        v_23 = Line_follower__St_3_White;
      };
      v_17 = (j_input==7);
      if (v_17) {
        v_26 = true;
        v_25 = Line_follower__St_3_Inputval;
      } else {
        v_26 = v_24;
        v_25 = v_23;
      };
      v_16 = (j_input==1);
      if (v_16) {
        r_3_St_3_White = true;
        s_3_St_3_White = Line_follower__St_3_Joystick;
      } else {
        r_3_St_3_White = v_26;
        s_3_St_3_White = v_25;
      };
      s_3 = s_3_St_3_White;
      r_3 = r_3_St_3_White;
      break;
    case Line_follower__St_3_Black:
      v_15 = (j_input==1);
      if (v_15) {
        r_3_St_3_Black = true;
        s_3_St_3_Black = Line_follower__St_3_Joystick;
      } else {
        r_3_St_3_Black = self->pnr_3;
        s_3_St_3_Black = Line_follower__St_3_Black;
      };
      s_3 = s_3_St_3_Black;
      r_3 = r_3_St_3_Black;
      break;
    case Line_follower__St_3_Joystick:
      v = (j_input==6);
      if (v) {
        r_3_St_3_Joystick = false;
        s_3_St_3_Joystick = Line_follower__St_3_White;
      } else {
        r_3_St_3_Joystick = self->pnr_3;
        s_3_St_3_Joystick = Line_follower__St_3_Joystick;
      };
      s_3 = s_3_St_3_Joystick;
      r_3 = r_3_St_3_Joystick;
      break;
    default:
      break;
  };
  ck_1 = s_3;
  switch (ck_1) {
    case Line_follower__St_3_Inputval:
      v_421 = (j_input==0);
      v_422 = !(v_421);
      if (v_422) {
        inputvalue_St_3_Inputval = j_input;
      } else {
        inputvalue_St_3_Inputval = self->inputvalue_1;
      };
      dir_St_3_Inputval = 0;
      v_r_St_3_Inputval = 0;
      v_l_St_3_Inputval = 0;
      v_420 = (1023-sen4);
      v_419 = (1023-sen3);
      v_418 = (1023-sen2);
      v_417 = (1023-sen1);
      v_416 = (1023-sen0);
      nr_3_St_3_Inputval = false;
      ns_3_St_3_Inputval = Line_follower__St_3_Inputval;
      inputvalue = inputvalue_St_3_Inputval;
      ns_3 = ns_3_St_3_Inputval;
      nr_3 = nr_3_St_3_Inputval;
      break;
    case Line_follower__St_3_White:
      inputvalue_St_3_White = self->inputvalue_1;
      if (r_3) {
        pnr = false;
        ck_2 = Line_follower__St_Idle;
      } else {
        pnr = self->v_415;
        ck_2 = self->v_409;
      };
      v_352 = (1023-sen4);
      v_351 = (1023-sen3);
      v_350 = (1023-sen2);
      v_349 = (1023-sen1);
      v_348 = (1023-sen0);
      nr_3_St_3_White = false;
      ns_3_St_3_White = Line_follower__St_3_White;
      inputvalue = inputvalue_St_3_White;
      ns_3 = ns_3_St_3_White;
      nr_3 = nr_3_St_3_White;
      break;
    case Line_follower__St_3_Black:
      if (r_3) {
        bound_right_1 = 0;
        bound_left_1 = 0;
        count_1 = 0;
      } else {
        bound_right_1 = self->v_347;
        bound_left_1 = self->v_346;
        count_1 = self->v_345;
      };
      inputvalue_St_3_Black = self->inputvalue_1;
      if (r_3) {
        pnr_1 = false;
        ck_4 = Line_follower__St_1_Idle;
      } else {
        pnr_1 = self->v_344;
        ck_4 = self->v_189;
      };
      nr_3_St_3_Black = false;
      ns_3_St_3_Black = Line_follower__St_3_Black;
      inputvalue = inputvalue_St_3_Black;
      ns_3 = ns_3_St_3_Black;
      nr_3 = nr_3_St_3_Black;
      switch (ck_4) {
        case Line_follower__St_1_Stop:
          r_1_St_1_Stop = pnr_1;
          s_1_St_1_Stop = Line_follower__St_1_Stop;
          break;
        case Line_follower__St_1_Box:
          r_1_St_1_Box = pnr_1;
          s_1_St_1_Box = Line_follower__St_1_Box;
          break;
        case Line_follower__St_1_Boxturnleft:
          r_1_St_1_Boxturnleft = pnr_1;
          s_1_St_1_Boxturnleft = Line_follower__St_1_Boxturnleft;
          break;
        case Line_follower__St_1_Boxturnright:
          r_1_St_1_Boxturnright = pnr_1;
          s_1_St_1_Boxturnright = Line_follower__St_1_Boxturnright;
          break;
        case Line_follower__St_1_Parkingstart:
          r_1_St_1_Parkingstart = pnr_1;
          s_1_St_1_Parkingstart = Line_follower__St_1_Parkingstart;
          break;
        case Line_follower__St_1_Parkingcheck:
          r_1_St_1_Parkingcheck = pnr_1;
          s_1_St_1_Parkingcheck = Line_follower__St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkleft:
          r_1_St_1_Parkleft = pnr_1;
          s_1_St_1_Parkleft = Line_follower__St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkright:
          r_1_St_1_Parkright = pnr_1;
          s_1_St_1_Parkright = Line_follower__St_1_Parkright;
          break;
        case Line_follower__St_1_Parkingrestart:
          r_1_St_1_Parkingrestart = pnr_1;
          s_1_St_1_Parkingrestart = Line_follower__St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Backright:
          r_1_St_1_Backright = pnr_1;
          s_1_St_1_Backright = Line_follower__St_1_Backright;
          break;
        case Line_follower__St_1_Backleft:
          r_1_St_1_Backleft = pnr_1;
          s_1_St_1_Backleft = Line_follower__St_1_Backleft;
          break;
        case Line_follower__St_1_Parked:
          r_1_St_1_Parked = pnr_1;
          s_1_St_1_Parked = Line_follower__St_1_Parked;
          break;
        default:
          break;
      };
      break;
    case Line_follower__St_3_Joystick:
      inputvalue_St_3_Joystick = self->inputvalue_1;
      if (r_3) {
        pnr_2 = false;
        ck_6 = Line_follower__St_2_Idle;
      } else {
        pnr_2 = self->v_79;
        ck_6 = self->v_78;
      };
      nr_3_St_3_Joystick = false;
      ns_3_St_3_Joystick = Line_follower__St_3_Joystick;
      inputvalue = inputvalue_St_3_Joystick;
      ns_3 = ns_3_St_3_Joystick;
      nr_3 = nr_3_St_3_Joystick;
      switch (ck_6) {
        case Line_follower__St_2_Idle:
          v_71 = (j_input==5);
          if (v_71) {
            v_73 = true;
            v_72 = Line_follower__St_2_Right;
          } else {
            v_73 = pnr_2;
            v_72 = Line_follower__St_2_Idle;
          };
          v_70 = (j_input==4);
          if (v_70) {
            v_75 = true;
            v_74 = Line_follower__St_2_Left;
          } else {
            v_75 = v_73;
            v_74 = v_72;
          };
          v_69 = (j_input==3);
          if (v_69) {
            v_77 = true;
            v_76 = Line_follower__St_2_Backward;
          } else {
            v_77 = v_75;
            v_76 = v_74;
          };
          v_68 = (j_input==2);
          if (v_68) {
            r_2_St_2_Idle = true;
            s_2_St_2_Idle = Line_follower__St_2_Forward;
          } else {
            r_2_St_2_Idle = v_77;
            s_2_St_2_Idle = v_76;
          };
          s_2 = s_2_St_2_Idle;
          r_2 = r_2_St_2_Idle;
          break;
        case Line_follower__St_2_Left:
          v_61 = (j_input==5);
          if (v_61) {
            v_63 = true;
            v_62 = Line_follower__St_2_Right;
          } else {
            v_63 = pnr_2;
            v_62 = Line_follower__St_2_Left;
          };
          v_60 = (j_input==0);
          if (v_60) {
            v_65 = true;
            v_64 = Line_follower__St_2_Idle;
          } else {
            v_65 = v_63;
            v_64 = v_62;
          };
          v_59 = (j_input==3);
          if (v_59) {
            v_67 = true;
            v_66 = Line_follower__St_2_Backward;
          } else {
            v_67 = v_65;
            v_66 = v_64;
          };
          v_58 = (j_input==2);
          if (v_58) {
            r_2_St_2_Left = true;
            s_2_St_2_Left = Line_follower__St_2_Forward;
          } else {
            r_2_St_2_Left = v_67;
            s_2_St_2_Left = v_66;
          };
          s_2 = s_2_St_2_Left;
          r_2 = r_2_St_2_Left;
          break;
        case Line_follower__St_2_Right:
          v_51 = (j_input==4);
          if (v_51) {
            v_53 = true;
            v_52 = Line_follower__St_2_Left;
          } else {
            v_53 = pnr_2;
            v_52 = Line_follower__St_2_Right;
          };
          v_50 = (j_input==0);
          if (v_50) {
            v_55 = true;
            v_54 = Line_follower__St_2_Idle;
          } else {
            v_55 = v_53;
            v_54 = v_52;
          };
          v_49 = (j_input==3);
          if (v_49) {
            v_57 = true;
            v_56 = Line_follower__St_2_Backward;
          } else {
            v_57 = v_55;
            v_56 = v_54;
          };
          v_48 = (j_input==2);
          if (v_48) {
            r_2_St_2_Right = true;
            s_2_St_2_Right = Line_follower__St_2_Forward;
          } else {
            r_2_St_2_Right = v_57;
            s_2_St_2_Right = v_56;
          };
          s_2 = s_2_St_2_Right;
          r_2 = r_2_St_2_Right;
          break;
        case Line_follower__St_2_Forward:
          v_41 = (j_input==5);
          if (v_41) {
            v_43 = true;
            v_42 = Line_follower__St_2_Right;
          } else {
            v_43 = pnr_2;
            v_42 = Line_follower__St_2_Forward;
          };
          v_40 = (j_input==0);
          if (v_40) {
            v_45 = true;
            v_44 = Line_follower__St_2_Idle;
          } else {
            v_45 = v_43;
            v_44 = v_42;
          };
          v_39 = (j_input==3);
          if (v_39) {
            v_47 = true;
            v_46 = Line_follower__St_2_Backward;
          } else {
            v_47 = v_45;
            v_46 = v_44;
          };
          v_38 = (j_input==4);
          if (v_38) {
            r_2_St_2_Forward = true;
            s_2_St_2_Forward = Line_follower__St_2_Left;
          } else {
            r_2_St_2_Forward = v_47;
            s_2_St_2_Forward = v_46;
          };
          s_2 = s_2_St_2_Forward;
          r_2 = r_2_St_2_Forward;
          break;
        case Line_follower__St_2_Backward:
          v_31 = (j_input==5);
          if (v_31) {
            v_33 = true;
            v_32 = Line_follower__St_2_Right;
          } else {
            v_33 = pnr_2;
            v_32 = Line_follower__St_2_Backward;
          };
          v_30 = (j_input==0);
          if (v_30) {
            v_35 = true;
            v_34 = Line_follower__St_2_Idle;
          } else {
            v_35 = v_33;
            v_34 = v_32;
          };
          v_29 = (j_input==4);
          if (v_29) {
            v_37 = true;
            v_36 = Line_follower__St_2_Left;
          } else {
            v_37 = v_35;
            v_36 = v_34;
          };
          v_28 = (j_input==2);
          if (v_28) {
            r_2_St_2_Backward = true;
            s_2_St_2_Backward = Line_follower__St_2_Forward;
          } else {
            r_2_St_2_Backward = v_37;
            s_2_St_2_Backward = v_36;
          };
          s_2 = s_2_St_2_Backward;
          r_2 = r_2_St_2_Backward;
          break;
        default:
          break;
      };
      ck_7 = s_2;
      switch (ck_7) {
        case Line_follower__St_2_Idle:
          dir_St_3_Joystick_St_2_Idle = 0;
          v_r_St_3_Joystick_St_2_Idle = 0;
          v_l_St_3_Joystick_St_2_Idle = 0;
          nr_2_St_2_Idle = false;
          ns_2_St_2_Idle = Line_follower__St_2_Idle;
          v_l_St_3_Joystick = v_l_St_3_Joystick_St_2_Idle;
          v_r_St_3_Joystick = v_r_St_3_Joystick_St_2_Idle;
          dir_St_3_Joystick = dir_St_3_Joystick_St_2_Idle;
          ns_2 = ns_2_St_2_Idle;
          nr_2 = nr_2_St_2_Idle;
          break;
        case Line_follower__St_2_Left:
          dir_St_3_Joystick_St_2_Left = 3;
          v_r_St_3_Joystick_St_2_Left = 30;
          v_l_St_3_Joystick_St_2_Left = 30;
          nr_2_St_2_Left = false;
          ns_2_St_2_Left = Line_follower__St_2_Left;
          v_l_St_3_Joystick = v_l_St_3_Joystick_St_2_Left;
          v_r_St_3_Joystick = v_r_St_3_Joystick_St_2_Left;
          dir_St_3_Joystick = dir_St_3_Joystick_St_2_Left;
          ns_2 = ns_2_St_2_Left;
          nr_2 = nr_2_St_2_Left;
          break;
        case Line_follower__St_2_Right:
          dir_St_3_Joystick_St_2_Right = 4;
          v_r_St_3_Joystick_St_2_Right = 30;
          v_l_St_3_Joystick_St_2_Right = 30;
          nr_2_St_2_Right = false;
          ns_2_St_2_Right = Line_follower__St_2_Right;
          v_l_St_3_Joystick = v_l_St_3_Joystick_St_2_Right;
          v_r_St_3_Joystick = v_r_St_3_Joystick_St_2_Right;
          dir_St_3_Joystick = dir_St_3_Joystick_St_2_Right;
          ns_2 = ns_2_St_2_Right;
          nr_2 = nr_2_St_2_Right;
          break;
        case Line_follower__St_2_Forward:
          dir_St_3_Joystick_St_2_Forward = 1;
          v_r_St_3_Joystick_St_2_Forward = 30;
          v_l_St_3_Joystick_St_2_Forward = 30;
          nr_2_St_2_Forward = false;
          ns_2_St_2_Forward = Line_follower__St_2_Forward;
          v_l_St_3_Joystick = v_l_St_3_Joystick_St_2_Forward;
          v_r_St_3_Joystick = v_r_St_3_Joystick_St_2_Forward;
          dir_St_3_Joystick = dir_St_3_Joystick_St_2_Forward;
          ns_2 = ns_2_St_2_Forward;
          nr_2 = nr_2_St_2_Forward;
          break;
        case Line_follower__St_2_Backward:
          dir_St_3_Joystick_St_2_Backward = 4;
          v_r_St_3_Joystick_St_2_Backward = 30;
          v_l_St_3_Joystick_St_2_Backward = 30;
          nr_2_St_2_Backward = false;
          ns_2_St_2_Backward = Line_follower__St_2_Backward;
          v_l_St_3_Joystick = v_l_St_3_Joystick_St_2_Backward;
          v_r_St_3_Joystick = v_r_St_3_Joystick_St_2_Backward;
          dir_St_3_Joystick = dir_St_3_Joystick_St_2_Backward;
          ns_2 = ns_2_St_2_Backward;
          nr_2 = nr_2_St_2_Backward;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  _out->inputgiven = inputvalue;
  switch (ck_1) {
    case Line_follower__St_3_Inputval:
      sen_St_3_Inputval[0] = v_416;
      sen_St_3_Inputval[1] = v_417;
      sen_St_3_Inputval[2] = v_418;
      sen_St_3_Inputval[3] = v_419;
      sen_St_3_Inputval[4] = v_420;
      {
        long _4;
        for (_4 = 0; _4 < 5; ++_4) {
          sen[_4] = sen_St_3_Inputval[_4];
        }
      };
      _out->v_l = v_l_St_3_Inputval;
      _out->v_r = v_r_St_3_Inputval;
      _out->dir = dir_St_3_Inputval;
      break;
    case Line_follower__St_3_White:
      sen_St_3_White[0] = v_348;
      sen_St_3_White[1] = v_349;
      sen_St_3_White[2] = v_350;
      sen_St_3_White[3] = v_351;
      sen_St_3_White[4] = v_352;
      {
        long _5;
        for (_5 = 0; _5 < 5; ++_5) {
          sen[_5] = sen_St_3_White[_5];
        }
      };
      switch (ck_2) {
        case Line_follower__St_Idle:
          v_403 = sen[4];
          v_404 = (v_403<500);
          if (v_404) {
            v_406 = true;
            v_405 = Line_follower__St_Turnright;
          } else {
            v_406 = pnr;
            v_405 = Line_follower__St_Idle;
          };
          v_401 = sen[0];
          v_402 = (v_401<500);
          if (v_402) {
            v_408 = true;
            v_407 = Line_follower__St_Turnleft;
          } else {
            v_408 = v_406;
            v_407 = v_405;
          };
          v_398 = sen[3];
          v_399 = (v_398<500);
          v_396 = sen[1];
          v_397 = (v_396<500);
          v_400 = (v_397||v_399);
          if (v_400) {
            r_St_Idle = true;
            s_St_Idle = Line_follower__St_Pid;
          } else {
            r_St_Idle = v_408;
            s_St_Idle = v_407;
          };
          s = s_St_Idle;
          r = r_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_392 = sen[4];
          v_393 = (v_392<500);
          if (v_393) {
            v_395 = true;
            v_394 = Line_follower__St_Turnright;
          } else {
            v_395 = pnr;
            v_394 = Line_follower__St_Pid;
          };
          v_390 = sen[0];
          v_391 = (v_390<500);
          if (v_391) {
            r_St_Pid = true;
            s_St_Pid = Line_follower__St_Turnleft;
          } else {
            r_St_Pid = v_395;
            s_St_Pid = v_394;
          };
          s = s_St_Pid;
          r = r_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_386 = sen[4];
          v_387 = (v_386<500);
          if (v_387) {
            v_389 = true;
            v_388 = Line_follower__St_Turnright;
          } else {
            v_389 = pnr;
            v_388 = Line_follower__St_Turnleft;
          };
          v_383 = sen[2];
          v_384 = (v_383<600);
          v_380 = sen[3];
          v_381 = (v_380<600);
          v_378 = sen[1];
          v_379 = (v_378<600);
          v_382 = (v_379||v_381);
          v_385 = (v_382||v_384);
          if (v_385) {
            r_St_Turnleft = true;
            s_St_Turnleft = Line_follower__St_Pid;
          } else {
            r_St_Turnleft = v_389;
            s_St_Turnleft = v_388;
          };
          s = s_St_Turnleft;
          r = r_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_374 = sen[0];
          v_375 = (v_374<500);
          if (v_375) {
            v_377 = true;
            v_376 = Line_follower__St_Turnleft;
          } else {
            v_377 = pnr;
            v_376 = Line_follower__St_Turnright;
          };
          v_371 = sen[2];
          v_372 = (v_371<600);
          v_368 = sen[3];
          v_369 = (v_368<600);
          v_366 = sen[1];
          v_367 = (v_366<600);
          v_370 = (v_367||v_369);
          v_373 = (v_370||v_372);
          if (v_373) {
            r_St_Turnright = true;
            s_St_Turnright = Line_follower__St_Pid;
          } else {
            r_St_Turnright = v_377;
            s_St_Turnright = v_376;
          };
          s = s_St_Turnright;
          r = r_St_Turnright;
          break;
        case Line_follower__St_Stop:
          v_360 = sen[4];
          v_361 = (v_360<500);
          if (v_361) {
            v_363 = true;
            v_362 = Line_follower__St_Turnright;
          } else {
            v_363 = pnr;
            v_362 = Line_follower__St_Stop;
          };
          v_358 = sen[0];
          v_359 = (v_358<500);
          if (v_359) {
            v_365 = true;
            v_364 = Line_follower__St_Turnleft;
          } else {
            v_365 = v_363;
            v_364 = v_362;
          };
          v_355 = sen[3];
          v_356 = (v_355<500);
          v_353 = sen[1];
          v_354 = (v_353<500);
          v_357 = (v_354||v_356);
          if (v_357) {
            r_St_Stop = true;
            s_St_Stop = Line_follower__St_Pid;
          } else {
            r_St_Stop = v_365;
            s_St_Stop = v_364;
          };
          s = s_St_Stop;
          r = r_St_Stop;
          break;
        default:
          break;
      };
      ck_3 = s;
      switch (ck_3) {
        case Line_follower__St_Idle:
          v_r_St_3_White_St_Idle = 50;
          v_l_St_3_White_St_Idle = 50;
          dir_St_3_White_St_Idle = 1;
          nr_St_Idle = false;
          ns_St_Idle = Line_follower__St_Idle;
          v_l_St_3_White = v_l_St_3_White_St_Idle;
          v_r_St_3_White = v_r_St_3_White_St_Idle;
          dir_St_3_White = dir_St_3_White_St_Idle;
          ns = ns_St_Idle;
          nr = nr_St_Idle;
          break;
        case Line_follower__St_Pid:
          v_414 = sen[4];
          v_413 = sen[3];
          v_412 = sen[2];
          v_411 = sen[1];
          v_410 = sen[0];
          dir_St_3_White_St_Pid = 2;
          nr_St_Pid = false;
          ns_St_Pid = Line_follower__St_Pid;
          r_8 = (r_3||r);
          if (r_8) {
            Line_follower__pid_reset(&self->pid_9);
          };
          Line_follower__pid_step(v_410, v_411, v_412, v_413, v_414,
                                  &Line_follower__pid_out_st, &self->pid_9);
          v_l_St_3_White_St_Pid = Line_follower__pid_out_st.v_l;
          v_r_St_3_White_St_Pid = Line_follower__pid_out_st.v_r;
          v_l_St_3_White = v_l_St_3_White_St_Pid;
          v_r_St_3_White = v_r_St_3_White_St_Pid;
          dir_St_3_White = dir_St_3_White_St_Pid;
          ns = ns_St_Pid;
          nr = nr_St_Pid;
          break;
        case Line_follower__St_Turnleft:
          v_r_St_3_White_St_Turnleft = 100;
          v_l_St_3_White_St_Turnleft = 100;
          dir_St_3_White_St_Turnleft = 3;
          nr_St_Turnleft = false;
          ns_St_Turnleft = Line_follower__St_Turnleft;
          v_l_St_3_White = v_l_St_3_White_St_Turnleft;
          v_r_St_3_White = v_r_St_3_White_St_Turnleft;
          dir_St_3_White = dir_St_3_White_St_Turnleft;
          ns = ns_St_Turnleft;
          nr = nr_St_Turnleft;
          break;
        case Line_follower__St_Turnright:
          v_r_St_3_White_St_Turnright = 100;
          v_l_St_3_White_St_Turnright = 100;
          dir_St_3_White_St_Turnright = 4;
          nr_St_Turnright = false;
          ns_St_Turnright = Line_follower__St_Turnright;
          v_l_St_3_White = v_l_St_3_White_St_Turnright;
          v_r_St_3_White = v_r_St_3_White_St_Turnright;
          dir_St_3_White = dir_St_3_White_St_Turnright;
          ns = ns_St_Turnright;
          nr = nr_St_Turnright;
          break;
        case Line_follower__St_Stop:
          v_r_St_3_White_St_Stop = 0;
          v_l_St_3_White_St_Stop = 0;
          dir_St_3_White_St_Stop = 0;
          nr_St_Stop = false;
          ns_St_Stop = Line_follower__St_Stop;
          v_l_St_3_White = v_l_St_3_White_St_Stop;
          v_r_St_3_White = v_r_St_3_White_St_Stop;
          dir_St_3_White = dir_St_3_White_St_Stop;
          ns = ns_St_Stop;
          nr = nr_St_Stop;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_3_White;
      _out->v_r = v_r_St_3_White;
      _out->dir = dir_St_3_White;
      self->v_415 = nr;
      self->v_409 = ns;
      break;
    case Line_follower__St_3_Black:
      sen_St_3_Black[0] = sen0;
      sen_St_3_Black[1] = sen1;
      sen_St_3_Black[2] = sen2;
      sen_St_3_Black[3] = sen3;
      sen_St_3_Black[4] = sen4;
      {
        long _6;
        for (_6 = 0; _6 < 5; ++_6) {
          sen[_6] = sen_St_3_Black[_6];
        }
      };
      switch (ck_4) {
        case Line_follower__St_1_Idle:
          v_181 = sen[4];
          v_182 = (v_181<500);
          if (v_182) {
            v_184 = true;
            v_183 = Line_follower__St_1_Turnright;
          } else {
            v_184 = pnr_1;
            v_183 = Line_follower__St_1_Idle;
          };
          v_179 = sen[0];
          v_180 = (v_179<500);
          if (v_180) {
            v_186 = true;
            v_185 = Line_follower__St_1_Turnleft;
          } else {
            v_186 = v_184;
            v_185 = v_183;
          };
          v_176 = sen[3];
          v_177 = (v_176<500);
          v_174 = sen[1];
          v_175 = (v_174<500);
          v_178 = (v_175||v_177);
          if (v_178) {
            v_188 = true;
            v_187 = Line_follower__St_1_Pid;
          } else {
            v_188 = v_186;
            v_187 = v_185;
          };
          v_171 = sen[4];
          v_172 = (v_171<600);
          v_168 = sen[3];
          v_169 = (v_168<600);
          v_165 = sen[2];
          v_166 = (v_165<600);
          v_163 = sen[1];
          v_164 = (v_163<600);
          v_167 = (v_164&&v_166);
          v_170 = (v_167&&v_169);
          v_173 = (v_170&&v_172);
          if (v_173) {
            r_1_St_1_Idle = true;
            s_1_St_1_Idle = Line_follower__St_1_Box;
          } else {
            r_1_St_1_Idle = v_188;
            s_1_St_1_Idle = v_187;
          };
          s_1 = s_1_St_1_Idle;
          r_1 = r_1_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          v_157 = sen[4];
          v_158 = (v_157<500);
          if (v_158) {
            v_160 = true;
            v_159 = Line_follower__St_1_Turnright;
          } else {
            v_160 = pnr_1;
            v_159 = Line_follower__St_1_Pid;
          };
          v_155 = sen[0];
          v_156 = (v_155<500);
          if (v_156) {
            v_162 = true;
            v_161 = Line_follower__St_1_Turnleft;
          } else {
            v_162 = v_160;
            v_161 = v_159;
          };
          v_152 = sen[4];
          v_153 = (v_152<600);
          v_149 = sen[3];
          v_150 = (v_149<600);
          v_146 = sen[2];
          v_147 = (v_146<600);
          v_144 = sen[1];
          v_145 = (v_144<600);
          v_148 = (v_145&&v_147);
          v_151 = (v_148&&v_150);
          v_154 = (v_151&&v_153);
          if (v_154) {
            r_1_St_1_Pid = true;
            s_1_St_1_Pid = Line_follower__St_1_Box;
          } else {
            r_1_St_1_Pid = v_162;
            s_1_St_1_Pid = v_161;
          };
          s_1 = s_1_St_1_Pid;
          r_1 = r_1_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          v_140 = sen[4];
          v_141 = (v_140<500);
          if (v_141) {
            v_143 = true;
            v_142 = Line_follower__St_1_Turnright;
          } else {
            v_143 = pnr_1;
            v_142 = Line_follower__St_1_Turnleft;
          };
          v_137 = sen[3];
          v_138 = (v_137<500);
          v_135 = sen[1];
          v_136 = (v_135<500);
          v_139 = (v_136||v_138);
          if (v_139) {
            r_1_St_1_Turnleft = true;
            s_1_St_1_Turnleft = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Turnleft = v_143;
            s_1_St_1_Turnleft = v_142;
          };
          s_1 = s_1_St_1_Turnleft;
          r_1 = r_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          v_131 = sen[0];
          v_132 = (v_131<500);
          if (v_132) {
            v_134 = true;
            v_133 = Line_follower__St_1_Turnleft;
          } else {
            v_134 = pnr_1;
            v_133 = Line_follower__St_1_Turnright;
          };
          v_128 = sen[3];
          v_129 = (v_128<500);
          v_126 = sen[1];
          v_127 = (v_126<500);
          v_130 = (v_127||v_129);
          if (v_130) {
            r_1_St_1_Turnright = true;
            s_1_St_1_Turnright = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Turnright = v_134;
            s_1_St_1_Turnright = v_133;
          };
          s_1 = s_1_St_1_Turnright;
          r_1 = r_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Boxpid:
          v_123 = sen[2];
          v_124 = (v_123<600);
          v_120 = sen[4];
          v_121 = (v_120>600);
          v_118 = sen[0];
          v_119 = (v_118>600);
          v_122 = (v_119&&v_121);
          v_125 = (v_122&&v_124);
          if (v_125) {
            r_1_St_1_Boxpid = true;
            s_1_St_1_Boxpid = Line_follower__St_1_Pid;
          } else {
            r_1_St_1_Boxpid = pnr_1;
            s_1_St_1_Boxpid = Line_follower__St_1_Boxpid;
          };
          s_1 = s_1_St_1_Boxpid;
          r_1 = r_1_St_1_Boxpid;
          break;
        case Line_follower__St_1_Parkingleft:
          v_113 = sen[4];
          v_114 = (v_113<600);
          v_111 = sen[0];
          v_112 = (v_111<600);
          v_115 = (v_112||v_114);
          v_108 = sen[3];
          v_109 = (v_108<600);
          v_105 = sen[2];
          v_106 = (v_105<600);
          v_103 = sen[1];
          v_104 = (v_103<600);
          v_107 = (v_104&&v_106);
          v_110 = (v_107&&v_109);
          v_116 = (v_110&&v_115);
          v_117 = !(v_116);
          if (v_117) {
            r_1_St_1_Parkingleft = true;
            s_1_St_1_Parkingleft = Line_follower__St_1_Parkingpid;
          } else {
            r_1_St_1_Parkingleft = pnr_1;
            s_1_St_1_Parkingleft = Line_follower__St_1_Parkingleft;
          };
          s_1 = s_1_St_1_Parkingleft;
          r_1 = r_1_St_1_Parkingleft;
          break;
        case Line_follower__St_1_Parkingright:
          v_98 = sen[4];
          v_99 = (v_98<600);
          v_96 = sen[0];
          v_97 = (v_96<600);
          v_100 = (v_97||v_99);
          v_93 = sen[3];
          v_94 = (v_93<600);
          v_90 = sen[2];
          v_91 = (v_90<600);
          v_88 = sen[1];
          v_89 = (v_88<600);
          v_92 = (v_89&&v_91);
          v_95 = (v_92&&v_94);
          v_101 = (v_95&&v_100);
          v_102 = !(v_101);
          if (v_102) {
            r_1_St_1_Parkingright = true;
            s_1_St_1_Parkingright = Line_follower__St_1_Parkingpid;
          } else {
            r_1_St_1_Parkingright = pnr_1;
            s_1_St_1_Parkingright = Line_follower__St_1_Parkingright;
          };
          s_1 = s_1_St_1_Parkingright;
          r_1 = r_1_St_1_Parkingright;
          break;
        case Line_follower__St_1_Parkingpid:
          v_85 = sen[3];
          v_86 = (v_85<600);
          v_82 = sen[2];
          v_83 = (v_82<600);
          v_80 = sen[1];
          v_81 = (v_80<600);
          v_84 = (v_81&&v_83);
          v_87 = (v_84&&v_86);
          if (v_87) {
            r_1_St_1_Parkingpid = true;
            s_1_St_1_Parkingpid = Line_follower__St_1_Stop;
          } else {
            r_1_St_1_Parkingpid = pnr_1;
            s_1_St_1_Parkingpid = Line_follower__St_1_Parkingpid;
          };
          s_1 = s_1_St_1_Parkingpid;
          r_1 = r_1_St_1_Parkingpid;
          break;
        case Line_follower__St_1_Parked:
          s_1 = s_1_St_1_Parked;
          r_1 = r_1_St_1_Parked;
          break;
        case Line_follower__St_1_Backleft:
          s_1 = s_1_St_1_Backleft;
          r_1 = r_1_St_1_Backleft;
          break;
        case Line_follower__St_1_Backright:
          s_1 = s_1_St_1_Backright;
          r_1 = r_1_St_1_Backright;
          break;
        case Line_follower__St_1_Parkingrestart:
          s_1 = s_1_St_1_Parkingrestart;
          r_1 = r_1_St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Parkright:
          s_1 = s_1_St_1_Parkright;
          r_1 = r_1_St_1_Parkright;
          break;
        case Line_follower__St_1_Parkleft:
          s_1 = s_1_St_1_Parkleft;
          r_1 = r_1_St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkingcheck:
          s_1 = s_1_St_1_Parkingcheck;
          r_1 = r_1_St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkingstart:
          s_1 = s_1_St_1_Parkingstart;
          r_1 = r_1_St_1_Parkingstart;
          break;
        case Line_follower__St_1_Boxturnright:
          s_1 = s_1_St_1_Boxturnright;
          r_1 = r_1_St_1_Boxturnright;
          break;
        case Line_follower__St_1_Boxturnleft:
          s_1 = s_1_St_1_Boxturnleft;
          r_1 = r_1_St_1_Boxturnleft;
          break;
        case Line_follower__St_1_Box:
          s_1 = s_1_St_1_Box;
          r_1 = r_1_St_1_Box;
          break;
        case Line_follower__St_1_Stop:
          s_1 = s_1_St_1_Stop;
          r_1 = r_1_St_1_Stop;
          break;
        default:
          break;
      };
      ck_5 = s_1;
      switch (ck_5) {
        case Line_follower__St_1_Idle:
          bound_right_St_1_Idle = bound_right_1;
          bound_left_St_1_Idle = bound_left_1;
          count_St_1_Idle = count_1;
          v_r_St_3_Black_St_1_Idle = 50;
          v_l_St_3_Black_St_1_Idle = 50;
          dir_St_3_Black_St_1_Idle = 1;
          nr_1_St_1_Idle = false;
          ns_1_St_1_Idle = Line_follower__St_1_Idle;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Idle;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Idle;
          dir_St_3_Black = dir_St_3_Black_St_1_Idle;
          count = count_St_1_Idle;
          bound_left = bound_left_St_1_Idle;
          bound_right = bound_right_St_1_Idle;
          ns_1 = ns_1_St_1_Idle;
          nr_1 = nr_1_St_1_Idle;
          break;
        case Line_follower__St_1_Pid:
          bound_right_St_1_Pid = bound_right_1;
          bound_left_St_1_Pid = bound_left_1;
          count_St_1_Pid = count_1;
          v_343 = sen[4];
          v_342 = sen[3];
          v_341 = sen[2];
          v_340 = sen[1];
          v_339 = sen[0];
          dir_St_3_Black_St_1_Pid = 2;
          nr_1_St_1_Pid = false;
          ns_1_St_1_Pid = Line_follower__St_1_Pid;
          r_7 = (r_3||r_1);
          if (r_7) {
            Line_follower__pid_reset(&self->pid_8);
          };
          Line_follower__pid_step(v_339, v_340, v_341, v_342, v_343,
                                  &Line_follower__pid_out_st, &self->pid_8);
          v_l_St_3_Black_St_1_Pid = Line_follower__pid_out_st.v_l;
          v_r_St_3_Black_St_1_Pid = Line_follower__pid_out_st.v_r;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Pid;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Pid;
          dir_St_3_Black = dir_St_3_Black_St_1_Pid;
          count = count_St_1_Pid;
          bound_left = bound_left_St_1_Pid;
          bound_right = bound_right_St_1_Pid;
          ns_1 = ns_1_St_1_Pid;
          nr_1 = nr_1_St_1_Pid;
          break;
        case Line_follower__St_1_Turnleft:
          bound_right_St_1_Turnleft = bound_right_1;
          bound_left_St_1_Turnleft = bound_left_1;
          count_St_1_Turnleft = count_1;
          v_r_St_3_Black_St_1_Turnleft = 90;
          v_l_St_3_Black_St_1_Turnleft = 90;
          dir_St_3_Black_St_1_Turnleft = 3;
          nr_1_St_1_Turnleft = false;
          ns_1_St_1_Turnleft = Line_follower__St_1_Turnleft;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Turnleft;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Turnleft;
          dir_St_3_Black = dir_St_3_Black_St_1_Turnleft;
          count = count_St_1_Turnleft;
          bound_left = bound_left_St_1_Turnleft;
          bound_right = bound_right_St_1_Turnleft;
          ns_1 = ns_1_St_1_Turnleft;
          nr_1 = nr_1_St_1_Turnleft;
          break;
        case Line_follower__St_1_Turnright:
          bound_right_St_1_Turnright = bound_right_1;
          bound_left_St_1_Turnright = bound_left_1;
          count_St_1_Turnright = count_1;
          v_r_St_3_Black_St_1_Turnright = 90;
          v_l_St_3_Black_St_1_Turnright = 90;
          dir_St_3_Black_St_1_Turnright = 4;
          nr_1_St_1_Turnright = false;
          ns_1_St_1_Turnright = Line_follower__St_1_Turnright;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Turnright;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Turnright;
          dir_St_3_Black = dir_St_3_Black_St_1_Turnright;
          count = count_St_1_Turnright;
          bound_left = bound_left_St_1_Turnright;
          bound_right = bound_right_St_1_Turnright;
          ns_1 = ns_1_St_1_Turnright;
          nr_1 = nr_1_St_1_Turnright;
          break;
        case Line_follower__St_1_Stop:
          bound_right_St_1_Stop = bound_right_1;
          bound_left_St_1_Stop = bound_left_1;
          count_St_1_Stop = count_1;
          v_r_St_3_Black_St_1_Stop = 0;
          v_l_St_3_Black_St_1_Stop = 0;
          dir_St_3_Black_St_1_Stop = 0;
          v_336 = (self->v_335-1);
          if (sec) {
            v_338 = v_336;
          } else {
            v_338 = self->v_337;
          };
          v_333 = (r_3||r_1);
          if (self->v_332) {
            v_334 = true;
          } else {
            v_334 = v_333;
          };
          if (v_334) {
            time = 2;
          } else {
            time = v_338;
          };
          v_331 = (time==0);
          if (v_331) {
            nr_1_St_1_Stop = true;
            ns_1_St_1_Stop = Line_follower__St_1_Parkingstart;
          } else {
            nr_1_St_1_Stop = false;
            ns_1_St_1_Stop = Line_follower__St_1_Stop;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Stop;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Stop;
          dir_St_3_Black = dir_St_3_Black_St_1_Stop;
          count = count_St_1_Stop;
          bound_left = bound_left_St_1_Stop;
          bound_right = bound_right_St_1_Stop;
          ns_1 = ns_1_St_1_Stop;
          nr_1 = nr_1_St_1_Stop;
          break;
        case Line_follower__St_1_Box:
          bound_right_St_1_Box = bound_right_1;
          bound_left_St_1_Box = bound_left_1;
          count_St_1_Box = (count_1+1);
          v_r_St_3_Black_St_1_Box = 100;
          v_l_St_3_Black_St_1_Box = 100;
          dir_St_3_Black_St_1_Box = 1;
          if (true) {
            v_326 = true;
          } else {
            v_326 = false;
          };
          if (true) {
            v_325 = Line_follower__St_1_Boxturnleft;
          } else {
            v_325 = Line_follower__St_1_Box;
          };
          v_322 = (inputvalue==5);
          v_321 = (inputvalue==3);
          v_323 = (v_321||v_322);
          v_317 = (inputvalue==4);
          v_316 = (inputvalue==2);
          v_318 = (v_316||v_317);
          v_312 = (inputvalue==5);
          v_308 = (inputvalue==5);
          v_304 = (inputvalue==3);
          v_300 = (inputvalue==4);
          v_296 = (inputvalue==4);
          v_293 = (inputvalue==2);
          v_l_St_3_Black = v_l_St_3_Black_St_1_Box;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Box;
          dir_St_3_Black = dir_St_3_Black_St_1_Box;
          count = count_St_1_Box;
          v_320 = (count==4);
          v_324 = (v_320&&v_323);
          if (v_324) {
            v_328 = true;
            v_327 = Line_follower__St_1_Parkingright;
          } else {
            v_328 = v_326;
            v_327 = v_325;
          };
          v_315 = (count==4);
          v_319 = (v_315&&v_318);
          if (v_319) {
            v_330 = true;
            v_329 = Line_follower__St_1_Parkingleft;
          } else {
            v_330 = v_328;
            v_329 = v_327;
          };
          v_311 = (count==3);
          v_313 = (v_311&&v_312);
          v_307 = (count==1);
          v_309 = (v_307&&v_308);
          v_303 = (count==3);
          v_305 = (v_303&&v_304);
          v_299 = (count==2);
          v_301 = (v_299&&v_300);
          v_295 = (count==1);
          v_297 = (v_295&&v_296);
          v_292 = (count==2);
          v_294 = (v_292&&v_293);
          v_298 = (v_294||v_297);
          v_302 = (v_298||v_301);
          v_306 = (v_302||v_305);
          v_310 = (v_306||v_309);
          v_314 = (v_310||v_313);
          if (v_314) {
            nr_1_St_1_Box = true;
            ns_1_St_1_Box = Line_follower__St_1_Boxturnright;
          } else {
            nr_1_St_1_Box = v_330;
            ns_1_St_1_Box = v_329;
          };
          bound_left = bound_left_St_1_Box;
          bound_right = bound_right_St_1_Box;
          ns_1 = ns_1_St_1_Box;
          nr_1 = nr_1_St_1_Box;
          break;
        case Line_follower__St_1_Boxturnleft:
          bound_right_St_1_Boxturnleft = bound_right_1;
          bound_left_St_1_Boxturnleft = bound_left_1;
          count_St_1_Boxturnleft = count_1;
          v_r_St_3_Black_St_1_Boxturnleft = 90;
          v_l_St_3_Black_St_1_Boxturnleft = 90;
          dir_St_3_Black_St_1_Boxturnleft = 3;
          v_287 = sen[4];
          v_288 = (v_287<600);
          v_285 = sen[0];
          v_286 = (v_285<600);
          v_289 = (v_286||v_288);
          v_282 = sen[3];
          v_283 = (v_282<600);
          v_279 = sen[2];
          v_280 = (v_279<600);
          v_277 = sen[1];
          v_278 = (v_277<600);
          v_281 = (v_278&&v_280);
          v_284 = (v_281&&v_283);
          v_290 = (v_284&&v_289);
          v_291 = !(v_290);
          if (v_291) {
            nr_1_St_1_Boxturnleft = true;
            ns_1_St_1_Boxturnleft = Line_follower__St_1_Boxpid;
          } else {
            nr_1_St_1_Boxturnleft = false;
            ns_1_St_1_Boxturnleft = Line_follower__St_1_Boxturnleft;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Boxturnleft;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Boxturnleft;
          dir_St_3_Black = dir_St_3_Black_St_1_Boxturnleft;
          count = count_St_1_Boxturnleft;
          bound_left = bound_left_St_1_Boxturnleft;
          bound_right = bound_right_St_1_Boxturnleft;
          ns_1 = ns_1_St_1_Boxturnleft;
          nr_1 = nr_1_St_1_Boxturnleft;
          break;
        case Line_follower__St_1_Boxturnright:
          bound_right_St_1_Boxturnright = bound_right_1;
          bound_left_St_1_Boxturnright = bound_left_1;
          count_St_1_Boxturnright = count_1;
          v_r_St_3_Black_St_1_Boxturnright = 90;
          v_l_St_3_Black_St_1_Boxturnright = 90;
          dir_St_3_Black_St_1_Boxturnright = 4;
          v_272 = sen[4];
          v_273 = (v_272<600);
          v_270 = sen[0];
          v_271 = (v_270<600);
          v_274 = (v_271||v_273);
          v_267 = sen[3];
          v_268 = (v_267<600);
          v_264 = sen[2];
          v_265 = (v_264<600);
          v_262 = sen[1];
          v_263 = (v_262<600);
          v_266 = (v_263&&v_265);
          v_269 = (v_266&&v_268);
          v_275 = (v_269&&v_274);
          v_276 = !(v_275);
          if (v_276) {
            nr_1_St_1_Boxturnright = true;
            ns_1_St_1_Boxturnright = Line_follower__St_1_Boxpid;
          } else {
            nr_1_St_1_Boxturnright = false;
            ns_1_St_1_Boxturnright = Line_follower__St_1_Boxturnright;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Boxturnright;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Boxturnright;
          dir_St_3_Black = dir_St_3_Black_St_1_Boxturnright;
          count = count_St_1_Boxturnright;
          bound_left = bound_left_St_1_Boxturnright;
          bound_right = bound_right_St_1_Boxturnright;
          ns_1 = ns_1_St_1_Boxturnright;
          nr_1 = nr_1_St_1_Boxturnright;
          break;
        case Line_follower__St_1_Boxpid:
          bound_right_St_1_Boxpid = bound_right_1;
          bound_left_St_1_Boxpid = bound_left_1;
          count_St_1_Boxpid = count_1;
          v_261 = sen[4];
          v_260 = sen[3];
          v_259 = sen[2];
          v_258 = sen[1];
          v_257 = sen[0];
          dir_St_3_Black_St_1_Boxpid = 2;
          nr_1_St_1_Boxpid = false;
          ns_1_St_1_Boxpid = Line_follower__St_1_Boxpid;
          r_6 = (r_3||r_1);
          if (r_6) {
            Line_follower__pid_reset(&self->pid_7);
          };
          Line_follower__pid_step(v_257, v_258, v_259, v_260, v_261,
                                  &Line_follower__pid_out_st, &self->pid_7);
          v_l_St_3_Black_St_1_Boxpid = Line_follower__pid_out_st.v_l;
          v_r_St_3_Black_St_1_Boxpid = Line_follower__pid_out_st.v_r;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Boxpid;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Boxpid;
          dir_St_3_Black = dir_St_3_Black_St_1_Boxpid;
          count = count_St_1_Boxpid;
          bound_left = bound_left_St_1_Boxpid;
          bound_right = bound_right_St_1_Boxpid;
          ns_1 = ns_1_St_1_Boxpid;
          nr_1 = nr_1_St_1_Boxpid;
          break;
        case Line_follower__St_1_Parkingleft:
          bound_right_St_1_Parkingleft = bound_right_1;
          bound_left_St_1_Parkingleft = bound_left_1;
          count_St_1_Parkingleft = count_1;
          v_r_St_3_Black_St_1_Parkingleft = 100;
          v_l_St_3_Black_St_1_Parkingleft = 100;
          dir_St_3_Black_St_1_Parkingleft = 3;
          nr_1_St_1_Parkingleft = false;
          ns_1_St_1_Parkingleft = Line_follower__St_1_Parkingleft;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingleft;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingleft;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingleft;
          count = count_St_1_Parkingleft;
          bound_left = bound_left_St_1_Parkingleft;
          bound_right = bound_right_St_1_Parkingleft;
          ns_1 = ns_1_St_1_Parkingleft;
          nr_1 = nr_1_St_1_Parkingleft;
          break;
        case Line_follower__St_1_Parkingright:
          bound_right_St_1_Parkingright = bound_right_1;
          bound_left_St_1_Parkingright = bound_left_1;
          count_St_1_Parkingright = count_1;
          v_r_St_3_Black_St_1_Parkingright = 100;
          v_l_St_3_Black_St_1_Parkingright = 100;
          dir_St_3_Black_St_1_Parkingright = 4;
          nr_1_St_1_Parkingright = false;
          ns_1_St_1_Parkingright = Line_follower__St_1_Parkingright;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingright;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingright;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingright;
          count = count_St_1_Parkingright;
          bound_left = bound_left_St_1_Parkingright;
          bound_right = bound_right_St_1_Parkingright;
          ns_1 = ns_1_St_1_Parkingright;
          nr_1 = nr_1_St_1_Parkingright;
          break;
        case Line_follower__St_1_Parkingpid:
          bound_right_St_1_Parkingpid = bound_right_1;
          bound_left_St_1_Parkingpid = bound_left_1;
          count_St_1_Parkingpid = count_1;
          v_256 = sen[4];
          v_255 = sen[3];
          v_254 = sen[2];
          v_253 = sen[1];
          v_252 = sen[0];
          dir_St_3_Black_St_1_Parkingpid = 2;
          nr_1_St_1_Parkingpid = false;
          ns_1_St_1_Parkingpid = Line_follower__St_1_Parkingpid;
          r_5 = (r_3||r_1);
          if (r_5) {
            Line_follower__pid_reset(&self->pid_6);
          };
          Line_follower__pid_step(v_252, v_253, v_254, v_255, v_256,
                                  &Line_follower__pid_out_st, &self->pid_6);
          v_l_St_3_Black_St_1_Parkingpid = Line_follower__pid_out_st.v_l;
          v_r_St_3_Black_St_1_Parkingpid = Line_follower__pid_out_st.v_r;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingpid;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingpid;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingpid;
          count = count_St_1_Parkingpid;
          bound_left = bound_left_St_1_Parkingpid;
          bound_right = bound_right_St_1_Parkingpid;
          ns_1 = ns_1_St_1_Parkingpid;
          nr_1 = nr_1_St_1_Parkingpid;
          break;
        case Line_follower__St_1_Parkingstart:
          count_St_1_Parkingstart = count_1;
          v_251 = sen[4];
          v_250 = sen[3];
          v_249 = sen[2];
          v_248 = sen[1];
          v_247 = sen[0];
          v_244 = (self->v_243-1);
          if (sec) {
            v_246 = v_244;
          } else {
            v_246 = self->v_245;
          };
          v_241 = (r_3||r_1);
          if (self->v_240) {
            v_242 = true;
          } else {
            v_242 = v_241;
          };
          if (v_242) {
            time_1 = 7;
          } else {
            time_1 = v_246;
          };
          v_238 = (ir_right==0);
          if (v_238) {
            v_239 = 1;
          } else {
            v_239 = 0;
          };
          bound_right_St_1_Parkingstart = (bound_right_1+v_239);
          v_236 = (ir_left==0);
          if (v_236) {
            v_237 = 1;
          } else {
            v_237 = 0;
          };
          bound_left_St_1_Parkingstart = (bound_left_1+v_237);
          dir_St_3_Black_St_1_Parkingstart = 2;
          v_235 = (time_1==0);
          if (v_235) {
            nr_1_St_1_Parkingstart = true;
            ns_1_St_1_Parkingstart = Line_follower__St_1_Parkingcheck;
          } else {
            nr_1_St_1_Parkingstart = false;
            ns_1_St_1_Parkingstart = Line_follower__St_1_Parkingstart;
          };
          r_4 = (r_3||r_1);
          if (r_4) {
            Line_follower__pid_reset(&self->pid_5);
          };
          Line_follower__pid_step(v_247, v_248, v_249, v_250, v_251,
                                  &Line_follower__pid_out_st, &self->pid_5);
          v_l_St_3_Black_St_1_Parkingstart = Line_follower__pid_out_st.v_l;
          v_r_St_3_Black_St_1_Parkingstart = Line_follower__pid_out_st.v_r;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingstart;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingstart;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingstart;
          count = count_St_1_Parkingstart;
          bound_left = bound_left_St_1_Parkingstart;
          bound_right = bound_right_St_1_Parkingstart;
          ns_1 = ns_1_St_1_Parkingstart;
          nr_1 = nr_1_St_1_Parkingstart;
          break;
        case Line_follower__St_1_Parkingcheck:
          bound_right_St_1_Parkingcheck = bound_right_1;
          bound_left_St_1_Parkingcheck = bound_left_1;
          count_St_1_Parkingcheck = count_1;
          dir_St_3_Black_St_1_Parkingcheck = 0;
          v_r_St_3_Black_St_1_Parkingcheck = 0;
          v_l_St_3_Black_St_1_Parkingcheck = 0;
          if (true) {
            v_232 = true;
          } else {
            v_232 = false;
          };
          if (true) {
            v_231 = Line_follower__St_1_Parkingrestart;
          } else {
            v_231 = Line_follower__St_1_Parkingcheck;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingcheck;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingcheck;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingcheck;
          count = count_St_1_Parkingcheck;
          bound_left = bound_left_St_1_Parkingcheck;
          v_229 = (bound_left==0);
          bound_right = bound_right_St_1_Parkingcheck;
          v_230 = (bound_right==0);
          if (v_230) {
            v_234 = true;
          } else {
            v_234 = v_232;
          };
          if (v_229) {
            nr_1_St_1_Parkingcheck = true;
          } else {
            nr_1_St_1_Parkingcheck = v_234;
          };
          if (v_230) {
            v_233 = Line_follower__St_1_Parkright;
          } else {
            v_233 = v_231;
          };
          if (v_229) {
            ns_1_St_1_Parkingcheck = Line_follower__St_1_Parkleft;
          } else {
            ns_1_St_1_Parkingcheck = v_233;
          };
          ns_1 = ns_1_St_1_Parkingcheck;
          nr_1 = nr_1_St_1_Parkingcheck;
          break;
        case Line_follower__St_1_Parkleft:
          bound_right_St_1_Parkleft = bound_right_1;
          bound_left_St_1_Parkleft = bound_left_1;
          count_St_1_Parkleft = count_1;
          v_226 = (self->v_225-1);
          if (sec) {
            v_228 = v_226;
          } else {
            v_228 = self->v_227;
          };
          v_223 = (r_3||r_1);
          if (self->v_222) {
            v_224 = true;
          } else {
            v_224 = v_223;
          };
          if (v_224) {
            time_2 = 2;
          } else {
            time_2 = v_228;
          };
          dir_St_3_Black_St_1_Parkleft = 0;
          v_r_St_3_Black_St_1_Parkleft = 0;
          v_l_St_3_Black_St_1_Parkleft = 0;
          v_221 = (time_2==0);
          if (v_221) {
            nr_1_St_1_Parkleft = true;
            ns_1_St_1_Parkleft = Line_follower__St_1_Backleft;
          } else {
            nr_1_St_1_Parkleft = false;
            ns_1_St_1_Parkleft = Line_follower__St_1_Parkleft;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkleft;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkleft;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkleft;
          count = count_St_1_Parkleft;
          bound_left = bound_left_St_1_Parkleft;
          bound_right = bound_right_St_1_Parkleft;
          ns_1 = ns_1_St_1_Parkleft;
          nr_1 = nr_1_St_1_Parkleft;
          break;
        case Line_follower__St_1_Parkright:
          bound_right_St_1_Parkright = bound_right_1;
          bound_left_St_1_Parkright = bound_left_1;
          count_St_1_Parkright = count_1;
          v_218 = (self->v_217-1);
          if (sec) {
            v_220 = v_218;
          } else {
            v_220 = self->v_219;
          };
          v_215 = (r_3||r_1);
          if (self->v_214) {
            v_216 = true;
          } else {
            v_216 = v_215;
          };
          if (v_216) {
            time_3 = 2;
          } else {
            time_3 = v_220;
          };
          dir_St_3_Black_St_1_Parkright = 0;
          v_r_St_3_Black_St_1_Parkright = 0;
          v_l_St_3_Black_St_1_Parkright = 0;
          v_213 = (time_3==0);
          if (v_213) {
            nr_1_St_1_Parkright = true;
            ns_1_St_1_Parkright = Line_follower__St_1_Backright;
          } else {
            nr_1_St_1_Parkright = false;
            ns_1_St_1_Parkright = Line_follower__St_1_Parkright;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkright;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkright;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkright;
          count = count_St_1_Parkright;
          bound_left = bound_left_St_1_Parkright;
          bound_right = bound_right_St_1_Parkright;
          ns_1 = ns_1_St_1_Parkright;
          nr_1 = nr_1_St_1_Parkright;
          break;
        case Line_follower__St_1_Parkingrestart:
          count_St_1_Parkingrestart = count_1;
          dir_St_3_Black_St_1_Parkingrestart = 0;
          v_r_St_3_Black_St_1_Parkingrestart = 0;
          v_l_St_3_Black_St_1_Parkingrestart = 0;
          bound_right_St_1_Parkingrestart = 0;
          bound_left_St_1_Parkingrestart = 0;
          v_210 = (self->v_209-1);
          if (sec) {
            v_212 = v_210;
          } else {
            v_212 = self->v_211;
          };
          v_207 = (r_3||r_1);
          if (self->v_206) {
            v_208 = true;
          } else {
            v_208 = v_207;
          };
          if (v_208) {
            time_4 = 2;
          } else {
            time_4 = v_212;
          };
          if (true) {
            nr_1_St_1_Parkingrestart = true;
          } else {
            nr_1_St_1_Parkingrestart = false;
          };
          if (true) {
            ns_1_St_1_Parkingrestart = Line_follower__St_1_Parkingstart;
          } else {
            ns_1_St_1_Parkingrestart = Line_follower__St_1_Parkingrestart;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parkingrestart;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parkingrestart;
          dir_St_3_Black = dir_St_3_Black_St_1_Parkingrestart;
          count = count_St_1_Parkingrestart;
          bound_left = bound_left_St_1_Parkingrestart;
          bound_right = bound_right_St_1_Parkingrestart;
          ns_1 = ns_1_St_1_Parkingrestart;
          nr_1 = nr_1_St_1_Parkingrestart;
          break;
        case Line_follower__St_1_Backright:
          bound_right_St_1_Backright = bound_right_1;
          bound_left_St_1_Backright = bound_left_1;
          count_St_1_Backright = count_1;
          v_203 = (self->v_202-1);
          if (sec) {
            v_205 = v_203;
          } else {
            v_205 = self->v_204;
          };
          v_200 = (r_3||r_1);
          if (self->v_199) {
            v_201 = true;
          } else {
            v_201 = v_200;
          };
          if (v_201) {
            time_5 = 2;
          } else {
            time_5 = v_205;
          };
          dir_St_3_Black_St_1_Backright = 5;
          v_r_St_3_Black_St_1_Backright = 63;
          v_l_St_3_Black_St_1_Backright = 40;
          v_198 = (time_5==0);
          if (v_198) {
            nr_1_St_1_Backright = true;
            ns_1_St_1_Backright = Line_follower__St_1_Parked;
          } else {
            nr_1_St_1_Backright = false;
            ns_1_St_1_Backright = Line_follower__St_1_Backright;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Backright;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Backright;
          dir_St_3_Black = dir_St_3_Black_St_1_Backright;
          count = count_St_1_Backright;
          bound_left = bound_left_St_1_Backright;
          bound_right = bound_right_St_1_Backright;
          ns_1 = ns_1_St_1_Backright;
          nr_1 = nr_1_St_1_Backright;
          break;
        case Line_follower__St_1_Backleft:
          bound_right_St_1_Backleft = bound_right_1;
          bound_left_St_1_Backleft = bound_left_1;
          count_St_1_Backleft = count_1;
          v_195 = (self->v_194-1);
          if (sec) {
            v_197 = v_195;
          } else {
            v_197 = self->v_196;
          };
          v_192 = (r_3||r_1);
          if (self->v_191) {
            v_193 = true;
          } else {
            v_193 = v_192;
          };
          if (v_193) {
            time_6 = 2;
          } else {
            time_6 = v_197;
          };
          dir_St_3_Black_St_1_Backleft = 6;
          v_r_St_3_Black_St_1_Backleft = 40;
          v_l_St_3_Black_St_1_Backleft = 63;
          v_190 = (time_6==0);
          if (v_190) {
            nr_1_St_1_Backleft = true;
            ns_1_St_1_Backleft = Line_follower__St_1_Parked;
          } else {
            nr_1_St_1_Backleft = false;
            ns_1_St_1_Backleft = Line_follower__St_1_Backleft;
          };
          v_l_St_3_Black = v_l_St_3_Black_St_1_Backleft;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Backleft;
          dir_St_3_Black = dir_St_3_Black_St_1_Backleft;
          count = count_St_1_Backleft;
          bound_left = bound_left_St_1_Backleft;
          bound_right = bound_right_St_1_Backleft;
          ns_1 = ns_1_St_1_Backleft;
          nr_1 = nr_1_St_1_Backleft;
          break;
        case Line_follower__St_1_Parked:
          bound_right_St_1_Parked = bound_right_1;
          bound_left_St_1_Parked = bound_left_1;
          count_St_1_Parked = count_1;
          dir_St_3_Black_St_1_Parked = 0;
          v_r_St_3_Black_St_1_Parked = 0;
          v_l_St_3_Black_St_1_Parked = 0;
          nr_1_St_1_Parked = false;
          ns_1_St_1_Parked = Line_follower__St_1_Parked;
          v_l_St_3_Black = v_l_St_3_Black_St_1_Parked;
          v_r_St_3_Black = v_r_St_3_Black_St_1_Parked;
          dir_St_3_Black = dir_St_3_Black_St_1_Parked;
          count = count_St_1_Parked;
          bound_left = bound_left_St_1_Parked;
          bound_right = bound_right_St_1_Parked;
          ns_1 = ns_1_St_1_Parked;
          nr_1 = nr_1_St_1_Parked;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_3_Black;
      _out->v_r = v_r_St_3_Black;
      _out->dir = dir_St_3_Black;
      self->v_347 = bound_right;
      self->v_346 = bound_left;
      self->v_345 = count;
      self->v_344 = nr_1;
      self->v_189 = ns_1;
      break;
    case Line_follower__St_3_Joystick:
      sen_St_3_Joystick[0] = sen0;
      sen_St_3_Joystick[1] = sen1;
      sen_St_3_Joystick[2] = sen2;
      sen_St_3_Joystick[3] = sen3;
      sen_St_3_Joystick[4] = sen4;
      {
        long _7;
        for (_7 = 0; _7 < 5; ++_7) {
          sen[_7] = sen_St_3_Joystick[_7];
        }
      };
      _out->v_l = v_l_St_3_Joystick;
      _out->v_r = v_r_St_3_Joystick;
      _out->dir = dir_St_3_Joystick;
      self->v_79 = nr_2;
      self->v_78 = ns_2;
      break;
    default:
      break;
  };
  self->inputvalue_1 = inputvalue;
  self->pnr_3 = nr_3;
  self->ck = ns_3;
  switch (ck_1) {
    case Line_follower__St_3_Black:
      switch (ck_5) {
        case Line_follower__St_1_Stop:
          self->v_337 = time;
          self->v_335 = time;
          self->v_332 = false;
          break;
        case Line_follower__St_1_Parkingstart:
          self->v_245 = time_1;
          self->v_243 = time_1;
          self->v_240 = false;
          break;
        case Line_follower__St_1_Parkleft:
          self->v_227 = time_2;
          self->v_225 = time_2;
          self->v_222 = false;
          break;
        case Line_follower__St_1_Parkright:
          self->v_219 = time_3;
          self->v_217 = time_3;
          self->v_214 = false;
          break;
        case Line_follower__St_1_Parkingrestart:
          self->v_211 = time_4;
          self->v_209 = time_4;
          self->v_206 = false;
          break;
        case Line_follower__St_1_Backright:
          self->v_204 = time_5;
          self->v_202 = time_5;
          self->v_199 = false;
          break;
        case Line_follower__St_1_Backleft:
          self->v_196 = time_6;
          self->v_194 = time_6;
          self->v_191 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };;
}

