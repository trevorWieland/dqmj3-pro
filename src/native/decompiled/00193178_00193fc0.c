#include "00193178_00193fc0.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_00193fc0(int param_1)

{
  undefined4 in_s0;
  
  if (DAT_008ef56c == '\0') {
    return;
  }
  *(undefined4 *)(&DAT_008ef578 + param_1 * 4) = in_s0;
  if (DAT_008f34bc == '\0') {
    return;
  }
  *(undefined4 *)(&DAT_008f34c8 + param_1 * 4) = in_s0;
  fn_0017d2b0(&DAT_008ef5bc);
  return;
}



void fn_00193f20(void)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = DAT_008ef5d0 + 1;
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
  DAT_008ef5d0 = iVar2;
  if (DAT_008c034d == '\0' && DAT_008c034f == '\0') {
    if (DAT_008c0351 != '\0') {
      fn_0019ebdc();
    }
    DAT_008c0350 = DAT_1ff810c0;
    fn_0015f1d0(&DAT_008ef56c);
    fn_0019ed84(&DAT_008ef5bc);
    DAT_008c0351 = 1;
  }
  else {
    DAT_008c0351 = 2;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
  DAT_008ef5d0 = DAT_008ef5d0 + -1;
  return;
}



bool fn_00193884(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0xd) != -1)) || (1 < param_2)) {
    return false;
  }
  uVar1 = fn_00189e28();
  iVar2 = fn_0019e9a0(uVar1,1,param_2);
  if (iVar2 != 0) {
    *(char *)(param_1 + 0xd) = (char)param_2;
  }
  return iVar2 != 0;
}



uint fn_0019338c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  bool bVar13;
  
  piVar5 = (int *)(param_1 + 0x3c);
  uVar9 = param_3 + 3U & 0xfffffffc;
  uVar6 = *(uint *)(param_2 + -0xc);
  if (uVar6 != uVar9) {
    if (uVar9 <= uVar6) {
      *(uint *)(param_2 + -0xc) = uVar9;
      puVar12 = (undefined2 *)(uVar6 + param_2);
      puVar2 = (undefined2 *)(param_2 + uVar9);
      puVar10 = (undefined2 *)0x0;
      puVar3 = (undefined2 *)0x0;
      puVar4 = (undefined2 *)*piVar5;
      if ((undefined2 *)*piVar5 != (undefined2 *)0x0) {
        do {
          if (puVar2 <= puVar4) {
            if (puVar12 == puVar4) {
              puVar12 = (undefined2 *)((int)puVar4 + *(int *)(puVar4 + 2) + 0x10);
              iVar7 = *(int *)(puVar4 + 4);
              iVar11 = *(int *)(puVar4 + 6);
              if (iVar7 == 0) {
                *piVar5 = iVar11;
              }
              else {
                *(int *)(iVar7 + 0xc) = iVar11;
              }
              if (iVar11 == 0) {
                *(int *)(param_1 + 0x40) = iVar7;
              }
              else {
                *(int *)(iVar11 + 8) = iVar7;
              }
            }
            break;
          }
          puVar8 = (undefined4 *)(puVar4 + 6);
          puVar3 = puVar4;
          puVar4 = (undefined2 *)*puVar8;
        } while ((undefined2 *)*puVar8 != (undefined2 *)0x0);
        puVar10 = puVar3;
        if ((puVar3 != (undefined2 *)0x0) &&
           ((undefined2 *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10) == puVar2)) {
          puVar10 = *(undefined2 **)(puVar3 + 4);
          iVar11 = *(int *)(puVar3 + 6);
          if (puVar10 == (undefined2 *)0x0) {
            *piVar5 = iVar11;
          }
          else {
            *(int *)(puVar10 + 6) = iVar11;
          }
          puVar2 = puVar3;
          if (iVar11 == 0) {
            *(undefined2 **)(param_1 + 0x40) = puVar10;
          }
          else {
            *(undefined2 **)(iVar11 + 8) = puVar10;
          }
        }
      }
      if ((uint)((int)puVar12 - (int)puVar2) < 0x10) {
        *(uint *)(param_2 + -0xc) = uVar6;
      }
      else {
        *puVar2 = 0x4652;
        puVar2[1] = 0;
        *(uint *)(puVar2 + 2) = ((int)puVar12 - (int)puVar2) - 0x10;
        *(undefined2 **)(puVar2 + 4) = puVar10;
        *(undefined4 *)(puVar2 + 6) = 0;
        if (puVar10 == (undefined2 *)0x0) {
          iVar11 = *piVar5;
          *piVar5 = (int)puVar2;
        }
        else {
          iVar11 = *(int *)(puVar10 + 6);
          *(undefined2 **)(puVar10 + 6) = puVar2;
        }
        *(int *)(puVar2 + 6) = iVar11;
        if (iVar11 == 0) {
          *(undefined2 **)(param_1 + 0x40) = puVar2;
        }
        else {
          *(undefined2 **)(iVar11 + 8) = puVar2;
        }
      }
LAB_001934ec:
      return *(uint *)(param_2 + -0xc);
    }
    for (iVar11 = *piVar5; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
      if (iVar11 == uVar6 + param_2) {
        if ((iVar11 != 0) && (uVar9 <= uVar6 + *(int *)(iVar11 + 4) + 0x10)) {
          puVar10 = (undefined2 *)(*(int *)(iVar11 + 4) + iVar11 + 0x10);
          puVar8 = (undefined4 *)(iVar11 - ((*(ushort *)(iVar11 + 2) & 0x7fff) >> 8));
          iVar7 = *(int *)(iVar11 + 8);
          iVar11 = *(int *)(iVar11 + 0xc);
          if (iVar7 == 0) {
            *piVar5 = iVar11;
          }
          else {
            *(int *)(iVar7 + 0xc) = iVar11;
          }
          if (iVar11 != 0) {
            *(int *)(iVar11 + 8) = iVar7;
          }
          if (iVar11 == 0) {
            *(int *)(param_1 + 0x40) = iVar7;
          }
          puVar3 = (undefined2 *)(param_2 + uVar9);
          if ((uint)((int)puVar10 - (int)(param_2 + uVar9)) < 0x10) {
            puVar3 = puVar10;
          }
          *(int *)(param_2 + -0xc) = (int)puVar3 - param_2;
          if (0xf < (uint)((int)puVar10 - (int)puVar3)) {
            *puVar3 = 0x4652;
            puVar3[1] = 0;
            *(uint *)(puVar3 + 2) = ((int)puVar10 - (int)puVar3) - 0x10;
            *(int *)(puVar3 + 4) = iVar7;
            *(undefined4 *)(puVar3 + 6) = 0;
            if (iVar7 == 0) {
              iVar11 = *piVar5;
              *piVar5 = (int)puVar3;
            }
            else {
              iVar11 = *(int *)(iVar7 + 0xc);
              *(undefined2 **)(iVar7 + 0xc) = puVar3;
            }
            *(int *)(puVar3 + 6) = iVar11;
            if (iVar11 == 0) {
              *(undefined2 **)(param_1 + 0x40) = puVar3;
            }
            else {
              *(undefined2 **)(iVar11 + 8) = puVar3;
            }
          }
          uVar9 = (int)puVar3 - (int)puVar8;
          bVar13 = (*(uint *)(param_1 + 0x38) & 1) != 0;
          if (bVar13) {
            puVar3 = (undefined2 *)0x0;
          }
          if (bVar13 && 3 < uVar9) {
            puVar1 = puVar8 + -1;
            if ((int)(uVar9 * 0x20000000) < 0) {
              *puVar8 = puVar3;
              puVar1 = puVar8;
            }
            for (uVar9 = uVar9 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              puVar1[1] = puVar3;
              puVar1 = puVar1 + 2;
              *puVar1 = puVar3;
            }
          }
          goto LAB_001934ec;
        }
        break;
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}



void fn_00193374(void)

{
  bool bVar1;
  
  do {
    while (DAT_008bfbbc < 1) {
      ClearExclusiveLocal();
      fn_00147e54(DAT_008c0334,&DAT_008bfbbc,1,0,0,0);
    }
    bVar1 = (bool)hasExclusiveAccess(0x8bfbbc);
  } while (!bVar1);
  DAT_008bfbbc = DAT_008bfbbc + 1;
  return;
}



int fn_00193338(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_001932fc(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x60040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



uint fn_00193220(int *param_1,int param_2,undefined1 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  uVar1 = *(int *)(*param_1 + param_2 * 8 + 4) - param_5;
  if (uVar1 <= param_4) {
    param_4 = uVar1;
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    iVar4 = param_1[7];
    puVar2 = (undefined1 *)(*(int *)(*param_1 + param_2 * 8) + iVar4 + param_5);
    if ((undefined1 *)(param_1[8] + iVar4) <= puVar2) {
      puVar2 = puVar2 + (iVar4 - (param_1[8] + iVar4));
    }
    if (0 < (int)param_4) {
      puVar3 = puVar2;
      puVar5 = param_3 + -1;
      if ((param_4 & 1) != 0) {
        *param_3 = *puVar2;
        puVar3 = puVar2 + 1;
        puVar5 = param_3;
        if ((undefined1 *)param_1[7] + param_1[8] == puVar2 + 1) {
          puVar3 = (undefined1 *)param_1[7];
        }
      }
      for (iVar4 = (int)param_4 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar5[1] = *puVar3;
        puVar2 = puVar3 + 1;
        if ((undefined1 *)param_1[7] + param_1[8] == puVar3 + 1) {
          puVar2 = (undefined1 *)param_1[7];
        }
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar2;
        puVar3 = puVar2 + 1;
        if ((undefined1 *)param_1[7] + param_1[8] == puVar2 + 1) {
          puVar3 = (undefined1 *)param_1[7];
        }
      }
    }
  }
  return param_4;
}



int fn_00193178(uint *param_1,int *param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_2c [2];
  
  iVar3 = 0;
  if (param_4 != 0) {
    while( true ) {
      if (param_5 == 0) {
        uVar2 = *param_1 | 1;
      }
      else {
        uVar2 = *param_1 & 0xfffffffe;
      }
      *param_1 = uVar2;
      iVar1 = fn_0019e8e8(local_2c,uVar2 & 0xfffffffe,param_1[1],param_1[2],param_3,param_4,param_5
                          );
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar2 = param_1[1];
      iVar3 = iVar3 + local_2c[0];
      param_1[1] = uVar2 + local_2c[0];
      param_1[2] = param_1[2] + ((int)local_2c[0] >> 0x1f) + (uint)CARRY4(uVar2,local_2c[0]);
      if ((local_2c[0] == param_4) || (local_2c[0] == 0)) break;
      param_3 = param_3 + local_2c[0];
      param_4 = param_4 - local_2c[0];
    }
  }
  *param_2 = iVar3;
  return 0;
}


