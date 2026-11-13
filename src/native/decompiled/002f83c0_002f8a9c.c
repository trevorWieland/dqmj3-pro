#include "002f83c0_002f8a9c.h"



void fn_002f8a9c(undefined4 param_1)

{
  DAT_008972d0 = param_1;
  return;
}



undefined4 fn_002f8974(void)

{
  undefined4 uVar1;
  
  if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined1 fn_002f88b4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f8904;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f8904:
  return *(undefined1 *)(puVar1 + 4);
}



void fn_002f86bc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = fn_002f8364();
  puVar2 = (undefined4 *)fn_001f74f8(uVar1,0xe1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00896fe0) goto LAB_002f8710;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f8710:
  iVar4 = param_2;
  if (param_2 < 1) {
    iVar4 = puVar2[5];
  }
  fn_002f873c(param_1,puVar2[5],iVar4,0 < param_2,0);
  return;
}



void fn_002f873c(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_54 [32];
  int local_34;
  
  uVar5 = (ulonglong)param_5;
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f87a4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f87a4:
  local_34 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),*(undefined1 *)(puVar1 + 4));
  iVar4 = param_2;
  if (param_2 <= param_3) {
    iVar4 = local_34 + 0x300;
  }
  for (; param_2 <= param_3; param_2 = param_2 + 1) {
    iVar3 = fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_2);
    fn_00301a9c(auStack_54,&DAT_007ba154,0x1e);
    fn_00294598(iVar3 + 0x4a,auStack_54);
    fn_002f4f1c(DAT_008977ec,param_2,local_34,**(undefined4 **)(DAT_00897804 + 0x3c),iVar3 + 0xd8,
                 iVar3 + 0x20,(int)*(char *)(iVar4 + 0xc0),(int)*(char *)(iVar4 + 0xc1),
                 (int)*(char *)(iVar3 + 0x498),(int)*(char *)(iVar3 + 0x499),auStack_54,
                 *(char *)(iVar3 + 0x45) != '\0',iVar3 + 0x50,param_4,(int)uVar5);
  }
  return;
}



void fn_002f8530(undefined4 param_1,ushort param_2,short param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = fn_00660ec0();
  if (iVar1 == 0x21) {
    fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18),(int)(short)param_2);
    return;
  }
  if (iVar1 != 0x22) {
    fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_2,(int)param_3);
    return;
  }
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = (uint)param_2;
  uVar2 = fn_002f8364(param_1);
  fn_003ca498(uVar2,&local_30,param_4);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  return;
}



undefined4 fn_002f84f4(int param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (((*param_2 == *(short *)(param_1 + 4)) && ((char)param_2[1] == *(char *)(param_1 + 6))) &&
     (*(char *)((int)param_2 + 3) == *(char *)(param_1 + 7))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_002f8464(int param_1,int param_2)

{
  float in_s0;
  int iVar1;
  undefined4 local_18 [3];
  
  iVar1 = (int)in_s0;
  if (param_1 != 0) {
    local_18[0] = 0xff000000;
    fn_00163988(DAT_00897808,local_18,iVar1);
  }
  if (param_2 != 0) {
    local_18[0] = 0xff000000;
    fn_00163988(DAT_0089780c,local_18,iVar1);
  }
  return;
}



void fn_002f8444(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002f83cc(void)

{
  fn_002f83d8();
  return;
}



void fn_002f83d8(int param_1,int param_2)

{
  float in_s0;
  int iVar1;
  undefined4 local_18 [3];
  
  iVar1 = (int)in_s0;
  if (param_1 != 0) {
    local_18[0] = 0;
    fn_00163988(DAT_00897808,local_18,iVar1);
  }
  if (param_2 != 0) {
    local_18[0] = 0;
    fn_00163988(DAT_0089780c,local_18,iVar1);
  }
  return;
}



undefined4 fn_002f83c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = 5;
  iStack_2c = 0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iVar1 = fn_002f8914();
  if (iVar1 != 0) {
    iVar1 = fn_006cd678(*(undefined4 *)(DAT_008977ec + 0x28));
    uVar4 = 0;
    do {
      iVar3 = iStack_2c;
      if (*(int *)(iVar1 + uVar4 * 8) == 5) {
        piVar5 = (int *)(iVar1 + uVar4 * 8);
        if (*piVar5 == 5) {
          iVar2 = piVar5[1];
          iVar3 = fn_002471d4(param_1,param_2);
          if (iStack_2c == 0) {
            iVar3 = fn_002473c0(iVar3);
          }
          else {
            iVar6 = fn_00247444();
            iVar3 = fn_002473c0(iVar6 + iVar3);
          }
          if (iVar2 < iVar3) {
            return 0;
          }
        }
        else if (iStack_2c == 0) {
          iVar3 = 0;
          if (0 < param_2) {
            do {
              iVar2 = *(int *)(param_1 + iVar3 * 4);
              if ((iVar2 != 0) && (iVar2 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c)), iVar2 != 0))
              {
                iVar6 = *(int *)(param_1 + iVar3 * 4);
                iVar2 = fn_002f8914();
                if (iVar2 != 0) {
                  iStack_38 = iVar6;
                  switch(*piVar5) {
                  case 0:
                    if (((piVar5[1] != 0) || (iVar2 = fn_006bfe90(&iStack_38), iVar2 != 1)) &&
                       (iVar2 = fn_006bfe90(&iStack_38), iVar2 != piVar5[1])) {
                      return 0;
                    }
                    break;
                  case 1:
                    iVar2 = fn_00661088(&iStack_38);
                    if (iVar2 != piVar5[1]) {
                      return 0;
                    }
                    break;
                  default:
                    goto switchD_002f7f34_caseD_2;
                  case 4:
                    iVar2 = fn_006bfdec(&iStack_38);
                    if (iVar2 != piVar5[1]) {
                      return 0;
                    }
                    break;
                  case 5:
                  case 9:
                    break;
                  }
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_2);
          }
        }
        else {
          iVar2 = fn_002f8914();
          if (iVar2 != 0) {
            iStack_38 = iVar3;
            switch(*piVar5) {
            case 0:
              if (((piVar5[1] != 0) || (iVar3 = fn_006bfe90(&iStack_38), iVar3 != 1)) &&
                 (iVar3 = fn_006bfe90(&iStack_38), iVar3 != piVar5[1])) {
                return 0;
              }
              break;
            case 1:
              iVar3 = fn_00661088(&iStack_38);
              if (iVar3 != piVar5[1]) {
                return 0;
              }
              break;
            default:
switchD_002f7f34_caseD_2:
              return 0;
            case 4:
              iVar3 = fn_006bfdec(&iStack_38);
              if (iVar3 != piVar5[1]) {
                return 0;
              }
              break;
            case 5:
            case 9:
              break;
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
  }
  return 1;
}



undefined1 fn_002f8914(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f8964;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f8964:
  return *(undefined1 *)(puVar1 + 4);
}


