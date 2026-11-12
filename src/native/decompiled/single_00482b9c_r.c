#include "single_00482b9c_r.h"


extern undefined4 H_DataAbort;

uint fn_00482b9c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = param_1 + 0x1fffffe8;
  if (param_1 == -0x1fffffe8) {
    uVar1 = DAT_008a6400 + 0x39e;
    goto LAB_00482f60;
  }
  if (-0x1fffffe9 < param_1) {
    puVar3 = (undefined1 *)(param_1 + 0x1ffefff5);
    if (param_1 == -0x1ffefff5) {
      uVar1 = DAT_008a6400 + 0x3c2;
    }
    else if (param_1 < -0x1ffefff4) {
      if (puVar3 == (undefined1 *)0xfffffff7) {
        uVar1 = DAT_008a6400 + 0x3b9;
      }
      else if ((int)puVar3 < -8) {
        if (puVar3 == (undefined1 *)0xffff0011) {
          uVar1 = DAT_008a6400 + 0x3a2;
        }
        else if ((int)puVar3 < -0xffee) {
          if (puVar3 == (undefined1 *)0xffff000e) {
            uVar1 = DAT_008a6400 + 0x39f;
          }
          else if (puVar3 == (undefined1 *)0xffff000f) {
            uVar1 = DAT_008a6400 + 0x3a0;
          }
          else {
            if (puVar3 != &H_DataAbort) goto switchD_00482bf8_caseD_a0000008;
            uVar1 = DAT_008a6400 + 0x3a1;
          }
        }
        else if (param_1 == -0x1fffffe2) {
          uVar1 = DAT_008a6400 + 0x3a4;
        }
        else if (param_1 == -0x1fff0000) {
          uVar1 = DAT_008a6400 + 0x3b7;
        }
        else {
          if (param_1 != -0x1ffeffff) goto switchD_00482bf8_caseD_a0000008;
          uVar1 = DAT_008a6400 + 0x3b8;
        }
      }
      else {
        switch(param_1) {
        case -0x1ffefffb:
          uVar1 = DAT_008a6400 + 0x3bc;
          break;
        case -0x1ffefffa:
          uVar1 = DAT_008a6400 + 0x3bd;
          break;
        case -0x1ffefff9:
          uVar1 = DAT_008a6400 + 0x3be;
          break;
        case -0x1ffefff8:
          uVar1 = DAT_008a6400 + 0x3bf;
          break;
        case -0x1ffefff7:
          uVar1 = DAT_008a6400 + 0x3c0;
          break;
        case -0x1ffefff6:
          uVar1 = DAT_008a6400 + 0x3c1;
          break;
        default:
          goto switchD_00482bf8_caseD_a0000008;
        }
      }
    }
    else if (param_1 == -0x1ffeffeb) {
      uVar1 = DAT_008a6400 + 0x3cc;
    }
    else if (param_1 < -0x1ffeffea) {
      switch(param_1) {
      case -0x1ffefff4:
        uVar1 = DAT_008a6400 + 0x3c3;
        break;
      case -0x1ffefff3:
        uVar1 = DAT_008a6400 + 0x3c4;
        break;
      case -0x1ffefff2:
        uVar1 = DAT_008a6400 + 0x3c5;
        break;
      default:
        goto switchD_00482bf8_caseD_a0000008;
      case -0x1ffefff0:
        uVar1 = DAT_008a6400 + 0x3c7;
        break;
      case -0x1ffeffef:
        uVar1 = DAT_008a6400 + 0x3c8;
        break;
      case -0x1ffeffee:
        uVar1 = DAT_008a6400 + 0x3c9;
        break;
      case -0x1ffeffed:
        uVar1 = DAT_008a6400 + 0x3ca;
      }
    }
    else if (param_1 == -0x1ffeffe7) {
      uVar1 = DAT_008a6400 + 0x3d0;
    }
    else if (param_1 < -0x1ffeffe6) {
      if (param_1 == -0x1ffeffea) {
        uVar1 = DAT_008a6400 + 0x3cd;
      }
      else if (param_1 == -0x1ffeffe9) {
        uVar1 = DAT_008a6400 + 0x3ce;
      }
      else {
        if (param_1 != -0x1ffeffe8) goto switchD_00482bf8_caseD_a0000008;
        uVar1 = DAT_008a6400 + 0x3cf;
      }
    }
    else if (param_1 == -0x1ff00000) {
      uVar1 = DAT_008a6400 + 0x385;
    }
    else {
      if (param_1 != 0x60010014) goto switchD_00482bf8_caseD_a0000008;
      uVar1 = DAT_008a6400 + 0x3cb;
    }
    goto LAB_00482f60;
  }
  if (iVar2 == -0x16) {
    uVar1 = DAT_008a6400 + 0x388;
    goto LAB_00482f60;
  }
  if (iVar2 < -0x16) {
    if (iVar2 == -0x3ffffffb) {
      uVar1 = DAT_008a6400 + 0x3a3;
    }
    else if (iVar2 < -0x3ffffffb) {
      switch(param_1) {
      case -0x5ffffffc:
        uVar1 = DAT_008a6400 + 0x38a;
        break;
      case -0x5ffffffb:
        uVar1 = DAT_008a6400 + 0x38b;
        break;
      case -0x5ffffffa:
        uVar1 = DAT_008a6400 + 0x38c;
        break;
      case -0x5ffffff9:
        uVar1 = DAT_008a6400 + 0x38d;
        break;
      default:
        goto switchD_00482bf8_caseD_a0000008;
      case -0x5ffffff6:
        uVar1 = DAT_008a6400 + 0x390;
        break;
      case -0x5ffffff5:
        uVar1 = DAT_008a6400 + 0x391;
        break;
      case -0x5ffffff3:
        uVar1 = DAT_008a6400 + 0x393;
      }
    }
    else if (iVar2 == -0x3ffefffd) {
      uVar1 = DAT_008a6400 + 0x3d2;
    }
    else if (iVar2 < -0x3ffefffd) {
      if (iVar2 == -0x3fff0015) {
        uVar1 = DAT_008a6400 + 0x3ba;
      }
      else if (iVar2 == -0x3fff0014) {
        uVar1 = DAT_008a6400 + 0x3bb;
      }
      else {
        if (iVar2 != -0x3fff0009) goto switchD_00482bf8_caseD_a0000008;
        uVar1 = DAT_008a6400 + 0x3c6;
      }
    }
    else if (iVar2 == -0x18) {
      uVar1 = DAT_008a6400 + 0x386;
    }
    else {
      if (iVar2 != -0x17) goto switchD_00482bf8_caseD_a0000008;
      uVar1 = DAT_008a6400 + 0x387;
    }
    goto LAB_00482f60;
  }
  switch(param_1) {
  case -0x1ffffffd:
    uVar1 = DAT_008a6400 + 0x389;
    break;
  default:
    goto switchD_00482bf8_caseD_a0000008;
  case -0x1ffffff8:
    uVar1 = DAT_008a6400 + 0x38e;
    break;
  case -0x1ffffff7:
    uVar1 = DAT_008a6400 + 0x38f;
    break;
  case -0x1ffffff4:
    uVar1 = DAT_008a6400 + 0x392;
    break;
  case -0x1ffffff2:
    uVar1 = DAT_008a6400 + 0x394;
    break;
  case -0x1ffffff1:
    uVar1 = DAT_008a6400 + 0x395;
    break;
  case -0x1ffffff0:
    uVar1 = DAT_008a6400 + 0x396;
    break;
  case -0x1fffffef:
    uVar1 = DAT_008a6400 + 0x397;
    break;
  case -0x1fffffee:
    uVar1 = DAT_008a6400 + 0x398;
    break;
  case -0x1fffffed:
    uVar1 = DAT_008a6400 + 0x399;
    break;
  case -0x1fffffec:
    uVar1 = DAT_008a6400 + 0x39a;
    break;
  case -0x1fffffeb:
    uVar1 = DAT_008a6400 + 0x39b;
    break;
  case -0x1fffffea:
    uVar1 = DAT_008a6400 + 0x39c;
    break;
  case -0x1fffffe9:
    uVar1 = DAT_008a6400 + 0x39d;
  }
LAB_00482f60:
  if (uVar1 <= DAT_008a6400 + 900 || DAT_008a6400 + 1000 <= uVar1) {
switchD_00482bf8_caseD_a0000008:
    uVar1 = DAT_008a6400;
  }
  return uVar1;
}


