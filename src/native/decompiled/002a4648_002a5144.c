#include "002a4648_002a5144.h"



void fn_002a5144(char *param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(DAT_008977e0 + 0x170) == -1) {
    iVar1 = fn_006f7a84();
    fVar4 = *(float *)(iVar1 + 0x20) - *param_2;
    fVar6 = *(float *)(iVar1 + 0x24) - param_2[1];
    fVar5 = *(float *)(iVar1 + 0x28) - param_2[2];
    if (*(float *)(param_1 + 4) <= fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) {
      *param_1 = '\0';
    }
    else if (*param_1 == '\0') {
      uVar2 = fn_006f7a84(DAT_008977e0);
      fn_001e6b68(uVar2,(int)param_1[8]);
      piVar3 = (int *)fn_006f72e0(DAT_008977e0);
      (**(code **)(*piVar3 + 0x58))(piVar3,(int)param_1[8]);
      *param_1 = '\x01';
    }
  }
  return;
}



void fn_002a5020(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = 0;
  *param_1 = &DAT_0081e7e0;
  iVar3 = (int)(param_1[8] - param_1[7]) >> 0x1f;
  if ((int)(param_1[8] - param_1[7]) / 0x28 + iVar3 != iVar3) {
    do {
      fn_0012f208(param_1,uVar2);
      puVar4 = (undefined4 *)(param_1[7] + uVar2 * 0x28);
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      if (puVar4[4] != 0) {
        fn_0012d73c();
      }
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)(param_1[8] - param_1[7]) / 0x28));
  }
  iVar5 = param_1[8];
  for (iVar3 = param_1[7]; iVar3 != iVar5; iVar3 = iVar3 + 0x28) {
    uVar1 = *(uint *)(iVar3 + 0x18);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0x1c) < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != *(uint *)(iVar3 + 0x1c));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x20) - uVar1) >> 2,0);
  }
  iVar3 = param_1[7];
  fn_001008c4(iVar3,(param_1[9] - iVar3) / 0x28,0);
  fn_00241ddc(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002a4f40) */
/* WARNING: Removing unreachable block (ram,0x002a4f44) */
/* WARNING: Removing unreachable block (ram,0x002a4f50) */
/* WARNING: Removing unreachable block (ram,0x002a4fd4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x002a4f24 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002a4e24(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_001129d0(param_1,0x40);
  *puVar1 = &DAT_0081e7e0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0xa00,0);
  iVar4 = 0x40;
  puVar1[7] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      iVar3 = fn_00100fc6(0x80,0);
      puVar2[6] = iVar3;
      iVar3 = puVar2[6];
      puVar2[8] = iVar3 + 0x80;
      puVar2[7] = iVar3;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
    }
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 10;
  } while (iVar4 != 0);
  iVar4 = puVar1[7];
  puVar1[8] = iVar4 + 0xa00;
  puVar1[9] = iVar4 + 0xa00;
  fn_001008c4(0,0,0);
  puVar1[10] = param_2;
  return puVar1;
}



undefined4 fn_002a4d6c(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  for (iVar3 = iVar2; *(int *)(param_1 + 0x20) != iVar3; iVar3 = iVar3 + 0x28) {
    if (*(int *)(iVar3 + 8) == param_2) {
      if (-1 < iVar4) {
        piVar1 = (int *)(iVar2 + iVar4 * 0x28);
        *piVar1 = *piVar1 + 1;
        return 1;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0;
  do {
    iVar3 = -1;
    if (*(int *)(param_1 + 0x20) == iVar2) {
LAB_002a4e08:
      fn_002a4a48(param_1,iVar3,param_2,1,param_3);
      return 1;
    }
    if (*(int *)(iVar2 + 8) == 0) {
      iVar3 = iVar4;
      goto LAB_002a4e08;
    }
    iVar2 = iVar2 + 0x28;
    iVar4 = iVar4 + 1;
  } while( true );
}



undefined4 fn_002a4d40(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  uVar1 = fn_00692ec8(param_2);
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = 0;
  iVar4 = *(int *)(iVar3 + 0x1c);
  for (iVar5 = iVar4; *(int *)(iVar3 + 0x20) != iVar5; iVar5 = iVar5 + 0x28) {
    if (*(int *)(iVar5 + 8) == param_2) {
      if (-1 < iVar6) {
        piVar2 = (int *)(iVar4 + iVar6 * 0x28);
        *piVar2 = *piVar2 + 1;
        return 1;
      }
      break;
    }
    iVar6 = iVar6 + 1;
  }
  iVar6 = 0;
  do {
    iVar5 = -1;
    if (*(int *)(iVar3 + 0x20) == iVar4) {
LAB_002a4e08:
      fn_002a4a48(iVar3,iVar5,param_2,1,uVar1,unaff_r4,unaff_r5,unaff_r6);
      return 1;
    }
    if (*(int *)(iVar4 + 8) == 0) {
      iVar5 = iVar6;
      goto LAB_002a4e08;
    }
    iVar4 = iVar4 + 0x28;
    iVar6 = iVar6 + 1;
  } while( true );
}



undefined4 fn_002a4c38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = 0;
  iVar2 = *(int *)(iVar1 + 0x1c);
  while( true ) {
    if (*(int *)(iVar1 + 0x20) == iVar2) {
      return 1;
    }
    if (*(int *)(iVar2 + 8) == param_2) break;
    iVar2 = iVar2 + 0x28;
    iVar4 = iVar4 + 1;
  }
  if (iVar4 < 0) {
    return 1;
  }
  iVar2 = fn_00145aac(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 0x28 + 0x10));
  if (iVar2 == 0) {
    return 0;
  }
  piVar5 = (int *)(*(int *)(iVar1 + 0x1c) + iVar4 * 0x28);
  bVar6 = *piVar5 == 1;
  if (*piVar5 < 2) {
    bVar6 = *(char *)((int)piVar5 + 0x25) == '\0';
  }
  if (bVar6) {
    iVar2 = fn_00145aac(piVar5[4]);
    if (iVar2 == 1) {
      fn_0012f208(iVar1,iVar4);
      if ((char)piVar5[9] == '\0') {
        uVar3 = fn_00145ac0(piVar5[4]);
        iVar2 = fn_00179fc4(iVar1,iVar4,uVar3);
      }
      else {
        iVar2 = 1;
      }
      *(undefined1 *)((int)piVar5 + 0x25) = 1;
      if (iVar2 != 0) {
        return 1;
      }
    }
    fn_002a4b8c(iVar1,iVar4);
    return 1;
  }
  return 1;
}



void fn_002a4bd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (*(int *)(param_1 + 0x20) == iVar2) {
      return;
    }
    if (*(int *)(iVar2 + 8) == param_2) break;
    iVar2 = iVar2 + 0x28;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3 * 0x28);
  iVar2 = *piVar1 + -1;
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    fn_002a4b8c(param_1,iVar3);
    return;
  }
  return;
}



int fn_002a4648(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  bool bVar7;
  
  uVar1 = fn_00692ec8(param_2);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = 0;
  iVar3 = *(int *)(iVar5 + 0x1c);
  for (iVar6 = iVar3; *(int *)(iVar5 + 0x20) != iVar6; iVar6 = iVar6 + 0x28) {
    if (*(int *)(iVar6 + 8) == param_2) {
      if (-1 < iVar4) {
        piVar2 = (int *)(iVar3 + iVar4 * 0x28);
        *piVar2 = *piVar2 + 1;
        return 1;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  }
  iVar6 = 0;
  do {
    iVar4 = -1;
    if (*(int *)(iVar5 + 0x20) == iVar3) {
LAB_002a4710:
      fn_002a4a48(iVar5,iVar4,param_2,0,uVar1,unaff_r4,unaff_r5,unaff_r6);
      piVar2 = (int *)(*(int *)(iVar5 + 0x1c) + iVar4 * 0x28);
      bVar7 = *piVar2 == 1;
      if (*piVar2 < 2) {
        bVar7 = *(char *)((int)piVar2 + 0x25) == '\0';
      }
      if (bVar7) {
        iVar6 = fn_00145aac(piVar2[4]);
        if (iVar6 == 1) {
          fn_0012f208(iVar5,iVar4);
          if ((char)piVar2[9] == '\0') {
            uVar1 = fn_00145ac0(piVar2[4]);
            iVar6 = fn_00179fc4(iVar5,iVar4,uVar1);
          }
          else {
            iVar6 = 1;
          }
          *(undefined1 *)((int)piVar2 + 0x25) = 1;
          if (iVar6 != 0) {
            return iVar6;
          }
        }
        iVar6 = 0;
        fn_002a4b8c(iVar5,iVar4);
      }
      else {
        iVar6 = 1;
      }
      return iVar6;
    }
    if (*(int *)(iVar3 + 8) == 0) {
      iVar4 = iVar6;
      goto LAB_002a4710;
    }
    iVar3 = iVar3 + 0x28;
    iVar6 = iVar6 + 1;
  } while( true );
}


