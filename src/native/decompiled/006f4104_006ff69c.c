#include "006f4104_006ff69c.h"



void fn_006ff69c(void)

{
  DAT_008c06e8 = 0x1000001;
  DAT_008c06ec = 0;
  DAT_008c06f4 = 1;
  DAT_008c06f0 = 0x1000008;
  DAT_008c06fc = 0;
  DAT_008c06f8 = 0x1000008;
  DAT_008c0704 = 1;
  DAT_008c0700 = 0x5000002;
  DAT_008c070c = 0xffffffff;
  DAT_008c0708 = 0x5000002;
  fn_00303b10(&DAT_008c0708,fn_00202f7c,0x100000);
  return;
}



void fn_006f94f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return;
}



void fn_006f94bc(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



void fn_006f733c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006f7354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4) + 0x68
              ))();
  return;
}



void fn_006f6e50(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f6e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 0xc))();
  return;
}



void fn_006f6c9c(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),5,param_2);
  return;
}



void fn_006f6c7c(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),4,param_2);
  return;
}



void fn_006f6c40(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),3,param_2);
  return;
}



void fn_006f6c20(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),2,param_2);
  return;
}



void fn_006f6b8c(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),6,param_2);
  return;
}



void fn_006f6b6c(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),1,param_2);
  return;
}



void fn_006f6b4c(int *param_1,undefined4 param_2)

{
  if (*(int *)(*param_1 + 800) == 0) {
    return;
  }
  fn_00350228(*(undefined4 *)(*(int *)(*param_1 + 0x328) + 4),0,param_2);
  return;
}



void fn_006f612c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006f5f58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 auStack_8 [2];
  
  auStack_8[0] = param_4;
  fn_006f5f68(param_1,param_2,auStack_8);
  return;
}



void fn_006f5dbc(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_0017821c(param_2,param_1,0xa88);
  return;
}



int fn_006f5438(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_00656bb8(&DAT_008eef58);
  puVar3 = DAT_008eef44 + DAT_008eef3c;
  for (puVar2 = DAT_008eef44; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    iVar1 = fn_00656f68(*puVar2,param_2);
    if (iVar1 != 0) goto LAB_006f54b8;
  }
  puVar3 = DAT_008eef7c + DAT_008eef74;
  puVar2 = DAT_008eef7c;
  while( true ) {
    if (puVar2 == puVar3) {
      fn_00656ca4(&DAT_008eef58);
      return 0;
    }
    iVar1 = fn_00656f68(*puVar2,param_2);
    if (iVar1 != 0) break;
    puVar2 = puVar2 + 1;
  }
LAB_006f54b8:
  fn_00656ca4(&DAT_008eef58);
  return iVar1;
}



void fn_006f4104(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 uStack_20;
  
  psVar4 = (short *)&uStack_20;
  psVar6 = (short *)&uStack_20;
  uStack_20 = param_4;
  iVar3 = fn_006924c4(param_3);
  uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)iVar3) & 0xffff);
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 == 10000) {
    iVar3 = (int)(short)(*(short *)(param_2 + 0x26) + 1U & 0xfffe) / 2;
    uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)iVar3) & 0xffff);
    if (iVar3 < 1) {
LAB_006f4460:
      psVar6 = &DAT_007d5db2;
    }
LAB_006f41f8:
    uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*psVar6) & 0xffff);
  }
  else {
    if (iVar3 == 0x2711) {
      uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*(short *)(param_2 + 0x26)) & 0xffff);
      if (*(short *)(param_2 + 0x26) < 1) {
        psVar4 = &DAT_007d5db2;
      }
      uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*psVar4) & 0xffff);
    }
    else {
      if (iVar3 != 0x2712) {
        if ('\0' < *(char *)(param_2 + 0x94)) {
          uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(0) & 0xffff);
          return;
        }
        if ((*(byte *)(param_2 + 0x336) >> 4 & 1) == 0) {
          if ((*(byte *)(param_2 + 0x336) >> 5 & 1) != 0) {
            uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(iVar3 / 2)) & 0xffff);
          }
        }
        else {
          uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)((int)(iVar3 * 3 + ((uint)(iVar3 * 3 >> 0x1f) >> 0x1e)) >> 2)) & 0xffff);
        }
        bVar1 = *(byte *)(param_2 + 0x32d);
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              if ((bVar1 >> 6 & 1) != 0) {
                uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 6) / 2)) & 0xffff);
              }
            }
            else {
              uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 5) / 2)) & 0xffff);
            }
          }
          else {
            uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 4) / 2)) & 0xffff);
          }
        }
        else {
          uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 3) / 2)) & 0xffff);
        }
        if (*(char *)(param_2 + 0x332) < '\0') {
          uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 3) / 2)) & 0xffff);
        }
        else if ((*(byte *)(param_2 + 0x333) & 1) == 0) {
          if ((*(byte *)(param_2 + 0x333) >> 1 & 1) != 0) {
            uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 5) / 2)) & 0xffff);
          }
        }
        else {
          uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)uStack_20 * 4) / 2)) & 0xffff);
        }
        iVar3 = (int)(short)uStack_20;
        iVar7 = 0;
        do {
          psVar4 = (short *)fn_00660bd8((int)(short)iVar7);
          if ((*(byte *)(param_2 + ((int)*psVar4 >> 3) + 0x324) >> ((int)*psVar4 & 7U) & 1) != 0) {
            iVar5 = fn_00660bd8((int)(short)iVar7);
            iVar5 = fn_00691a0c(param_3,*(undefined1 *)(iVar5 + 2));
            if (iVar5 != 0) {
              iVar3 = iVar3 / 2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        if ((((*(byte *)(param_2 + 0x329) >> 1 & 1) != 0) &&
            (iVar7 = fn_00163a00(param_3), iVar7 == 4)) ||
           (((*(byte *)(param_2 + 0x329) >> 2 & 1) != 0 &&
            (iVar7 = fn_00163a00(param_3), iVar7 == 5)))) {
          iVar3 = iVar3 / 2;
        }
        if (((*(byte *)(param_2 + 0x329) & 1) != 0) &&
           ((iVar7 = fn_006924f4(param_3), iVar7 != 0 ||
            (iVar7 = fn_006925f4(param_3), iVar7 != 0)))) {
          iVar3 = iVar3 / 2;
        }
        sVar2 = (short)iVar3;
        if ('\0' < *(char *)(param_2 + 0xb4)) {
          sVar2 = (short)(iVar3 << 1);
        }
        if (*(char *)(param_2 + 0x358) < '\0') {
          sVar2 = sVar2 << 1;
        }
        if (sVar2 < 1) goto LAB_006f4460;
        goto LAB_006f41f8;
      }
      uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*(short *)(param_2 + 0x26)) & 0xffff);
      if ((short)uStack_20 < 0x96) {
        uStack_20 = (uStack_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(0x96) & 0xffff);
      }
    }
  }
  return;
}


