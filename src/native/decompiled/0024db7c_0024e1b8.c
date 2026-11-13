#include "0024db7c_0024e1b8.h"



/* WARNING: Removing unreachable block (ram,0x0024e1f4) */

undefined4 fn_0024e1b8(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_28 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 7);
  bVar2 = *(byte *)((int)param_1 + 0xe);
  uVar5 = local_28 & 1;
  uVar7 = ~local_28;
  local_24 = (int)(short)param_1[1];
  local_20 = (uint)*(byte *)((int)param_1 + 6);
  local_1c = (int)(short)param_1[2];
  iVar6 = 0x18;
  local_18 = (int)*(short *)((int)param_1 + 10);
  local_14 = (int)(short)param_1[3];
  uVar3 = fn_005f5c50(0x259be9d4,&local_28);
  if ((((((uint)bVar2 << ((uVar7 & 1) << 3)) + ((uint)bVar1 << (uVar5 << 3) & 0xffff) & 0xffff) ==
        uVar3 >> 0x10) && (iVar4 = fn_00163940((int)(short)param_1[1]), iVar4 != 0)) &&
     (*(byte *)((int)param_1 + 6) < 4)) {
    uVar7 = 0;
    while (((*(short *)((int)param_1 + uVar7 * 2 + 8) == 0 || (iVar4 = fn_00163940(), iVar4 != 0))
           && (((int)uVar7 < (int)(uint)*(byte *)((int)param_1 + 6) ||
               (*(short *)((int)param_1 + uVar7 * 2 + 8) == 0))))) {
      if ((int)uVar7 < 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar7 & 1;
        if (uVar5 != 0) {
          iVar6 = (int)*(short *)((int)param_1 + uVar7 * 2 + 8);
        }
        iVar4 = 0;
        if (uVar5 != 0) {
          do {
            if ((iVar6 != 0) && (iVar6 == *(short *)((int)param_1 + iVar4 * 2 + 8))) {
              return 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar5);
        }
      }
      if ((int)uVar5 < (int)uVar7) {
        iVar4 = (int)*(short *)((int)param_1 + uVar7 * 2 + 8);
        do {
          if ((iVar4 != 0) &&
             (iVar6 = (int)*(short *)((int)param_1 + uVar5 * 2 + 8), iVar4 == iVar6)) {
            return 1;
          }
          if ((iVar4 != 0) &&
             (iVar6 = (int)*(short *)((int)param_1 + uVar5 * 2 + 10), iVar4 == iVar6)) {
            return 1;
          }
          uVar5 = uVar5 + 2;
        } while ((int)uVar5 < (int)uVar7);
      }
      uVar7 = uVar7 + 1;
      if (2 < (int)uVar7) {
        return 0;
      }
    }
  }
  return 1;
}



uint fn_0024e0d4(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    local_28 = *param_1;
    local_24 = (uint)*(byte *)(param_1 + 2);
    param_1 = (undefined4 *)fn_005f5c50(0x8a4c559f,&local_28,8);
  }
  else {
    if (cVar1 == '\x02') {
      local_20 = *param_1;
      local_1c = (int)*(short *)(param_1 + 3);
      local_18 = (int)*(short *)((int)param_1 + 0xe);
      local_14 = fn_005f5c50(0,param_1 + 4,8);
      local_10 = param_1[6];
      uVar2 = 0x14;
    }
    else {
      if (cVar1 != '\x03') goto LAB_0024e1a8;
      local_20 = *param_1;
      local_1c = fn_005f5c50(0,param_1 + 2,3);
      local_18 = param_1[4];
      uVar2 = 0xc;
    }
    param_1 = (undefined4 *)fn_005f5c50(0x8a4c559f,&local_20,uVar2);
  }
LAB_0024e1a8:
  return (uint)param_1 >> 0x10;
}



undefined4 fn_0024dfa4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = fn_0024eafc();
  if ((iVar3 == 0) && (bVar1 = *(byte *)(param_1 + 4), bVar1 != 0)) {
    bVar5 = 2 < bVar1;
    bVar4 = bVar1 == 3;
    if (bVar1 < 4) {
      bVar5 = *(char *)(param_1 + 5) != '\0';
      bVar4 = *(char *)(param_1 + 5) == '\x01';
    }
    if (!bVar5 || bVar4) {
      if (bVar1 == 1) {
        if (1 < *(byte *)(param_1 + 8)) {
          return 1;
        }
      }
      else if (bVar1 == 2) {
        if (0x3fe < (int)*(short *)(param_1 + 0xc) - 1U) {
          return 1;
        }
        iVar3 = fn_0013add0((int)*(short *)(param_1 + 0xe));
        if (iVar3 == 0) {
          return 1;
        }
        iVar3 = fn_0013add0((int)*(short *)(param_1 + 0x10));
        if (iVar3 == 0) {
          return 1;
        }
        if ((*(short *)(param_1 + 0x12) != 0) && (iVar3 = fn_0013add0(), iVar3 == 0)) {
          return 1;
        }
        if ((*(short *)(param_1 + 0x14) != 0) && (iVar3 = fn_0013add0(), iVar3 == 0)) {
          return 1;
        }
        if ((*(short *)(param_1 + 0x16) != 0) && (iVar3 = fn_0013add0(), iVar3 == 0)) {
          return 1;
        }
      }
      else if (bVar1 == 3) {
        bVar4 = *(char *)(param_1 + 8) != '\0';
        cVar2 = '\0';
        if (bVar4) {
          cVar2 = *(char *)(param_1 + 9);
        }
        if (!bVar4 || cVar2 == '\0') {
          return 1;
        }
        bVar4 = *(char *)(param_1 + 10) != '\0';
        bVar1 = 0;
        if (bVar4) {
          bVar1 = *(byte *)(param_1 + 0xb);
        }
        if (!bVar4 || bVar1 == 0) {
          return 1;
        }
        if (bVar1 < 0x65) {
          return 0;
        }
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



void fn_0024df68(undefined4 *param_1)

{
  *param_1 = &DAT_0081d724;
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_0024ddfc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_008224cc;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) / 0xc,0);
  return param_1;
}



void fn_0024dd94(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_008224cc;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) / 0xc,0);
  fn_002feef8(param_1);
  return;
}



void fn_0024dcc4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar1 == 0) {
    fVar6 = (float)param_1[1];
    fVar5 = (float)param_1[2];
    fVar4 = (float)param_1[3];
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1[5] + param_1[4] * 0xc);
      iVar1 = piVar2[1];
      iVar3 = piVar2[2];
      param_1[1] = *piVar2;
      param_1[2] = iVar1;
      param_1[3] = iVar3;
      param_1[4] = param_1[4] + 1;
    }
    fVar6 = (float)param_1[1] - fVar6;
    fVar4 = SQRT(fVar6 * fVar6 + ((float)param_1[2] - fVar5) * ((float)param_1[2] - fVar5) +
                 ((float)param_1[3] - fVar4) * ((float)param_1[3] - fVar4));
    param_1[8] = (int)fVar4;
    if (0.0 < fVar4) {
      fn_00525bd0();
      fVar6 = fVar6 * 0.024543693;
      fn_00163890();
      param_1[9] = (int)fVar6;
    }
  }
  return;
}



undefined4 * fn_0024dc68(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00128f40();
  }
  param_1[1] = uVar2;
  return param_1;
}



void fn_0024dbc8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = fn_001287b4();
  uVar1 = fn_0011c184(DAT_00891080,uVar1,0x80,5);
  iVar2 = fn_00145aac();
  if (iVar2 == 1) {
    uVar3 = fn_0012a26c(uVar1);
    uVar4 = fn_00145ac0(uVar1);
    fn_00128ee0(param_1[1],uVar4,uVar3);
    fn_0012d73c(uVar1);
    fn_005f6ce8(param_1[1],DAT_0089107c);
    iVar2 = fn_005f6ce8(param_1[1],DAT_0089107c);
    *param_1 = iVar2 / 2;
    return;
  }
  fn_0012d73c();
  return;
}



void fn_0024dbb0(undefined4 *param_1)

{
  uint in_fpscr;
  
  VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_0024db98(int param_1,int param_2)

{
  fn_00128eac(*(undefined4 *)(param_1 + 4),DAT_0089107c,param_2 << 1);
  return;
}



void fn_0024db7c(int param_1,int param_2)

{
  fn_00128e7c(*(undefined4 *)(param_1 + 4),DAT_0089107c,param_2 * 2 + 1);
  return;
}


