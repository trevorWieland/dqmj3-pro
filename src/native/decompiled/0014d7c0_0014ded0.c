#include "0014d7c0_0014ded0.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0014ded0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  do {
    while (*param_1 < 1) {
      ClearExclusiveLocal();
      piVar2 = param_1 + 1;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *(short *)piVar2 = (short)*piVar2 + 1;
      fn_00147e54(DAT_008c0334,param_1,1,1,0,0);
      piVar2 = param_1 + 1;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *(short *)piVar2 = (short)*piVar2 + -1;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}



void fn_0014ddec(int *param_1)

{
  bool bVar1;
  
  while (0 < *param_1) {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = -*param_1;
      return;
    }
  }
  ClearExclusiveLocal();
  do {
    while (*param_1 < 0) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = *param_1 + -1;
        do {
          fn_00147e54(DAT_008c0334,param_1,1,0,0,0);
          while (0 < *param_1) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = 1 - *param_1;
              return;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
    }
    ClearExclusiveLocal();
    while (0 < *param_1) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = -*param_1;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



undefined4 fn_0014ddb8(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fn_00123678(param_1 + 1);
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3;
  return uVar2;
}



int fn_0014dd88(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0014dd58(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x40000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0014dd28(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0014dcf8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x90000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0014dc74(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = fn_0015ddf8(&DAT_008f3264);
  DAT_008c3c33 = -1 < iVar2;
  if ((bool)DAT_008c3c33) {
    DAT_008f3250 = DAT_008f3264;
    DAT_008f3254 = DAT_008f3268;
    DAT_008f3258 = DAT_008f326c;
    uVar1 = DAT_008f3258;
    DAT_008f325c = 0x800;
    DAT_008f325e = 0x800;
    DAT_008f3260 = 0x800;
    DAT_008f3262 = 0x800;
    DAT_008f3258 = (DAT_008f3258 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((undefined2)DAT_008f326c) & 0xffff);
    DAT_008c3c34 = (undefined2)DAT_008f3258;
    DAT_008f3258 = (DAT_008f3258 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)DAT_008f326c >> 0x10)) & 0xffff) << 16);
    DAT_008c3c36 = ((unsigned int)(DAT_008f3258) >> 16) & 0xffff;
    iVar2 = 0;
    DAT_008f3258 = uVar1;
  }
  return iVar2;
}



undefined4 * fn_0014dc64(void)

{
  return &DAT_008ef400;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0014dc30(void)

{
  fn_0015d514(_DAT_008eefec,DAT_008eeff0,DAT_008eeff4,DAT_008eeff8,DAT_008eeffc);
  DAT_008c07e8 = 5;
  return;
}



int fn_0014d9ec(uint *param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  
  iVar3 = 0;
  if (param_4 == 0) {
LAB_0014da64:
    iVar1 = 0;
    *param_2 = iVar3;
  }
  else {
    while (iVar1 = fn_0014d760(&local_20,*param_1 & 0xfffffffe,param_1[1],param_1[2],param_3,
                                param_4), -1 < iVar1) {
      uVar2 = param_1[1];
      iVar3 = iVar3 + local_20;
      param_1[1] = uVar2 + local_20;
      param_1[2] = param_1[2] + ((int)local_20 >> 0x1f) + (uint)CARRY4(uVar2,local_20);
      if ((local_20 == param_4) || (local_20 == 0)) goto LAB_0014da64;
      param_3 = param_3 + local_20;
      param_4 = param_4 - local_20;
    }
  }
  return iVar1;
}



int fn_0014d9b8(void)

{
  if (DAT_0089a658 == 0) {
    fn_0015e590(0xe0a046db,0x14d9d4);
  }
  return DAT_0089a658;
}



void fn_0014d8d4(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x2e] = &DAT_008526d8;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[3] = 0;
  param_1[0x3d] = &DAT_008526d8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &DAT_00852560;
  param_1[7] = 0;
  return;
}



undefined4 fn_0014d7ec(void)

{
  undefined4 uVar1;
  undefined1 *extraout_r1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  fn_00170704(&DAT_008e3460);
  puVar2 = extraout_r1;
  if (((DAT_0089a66c & 1) == 0) &&
     (uVar3 = fn_00303afc(&DAT_0089a66c), puVar2 = (undefined1 *)((ulonglong)uVar3 >> 0x20),
     (int)uVar3 != 0)) {
    DAT_008e3374 = 0;
    DAT_008e3378 = 0;
    DAT_008e337c = 0;
    DAT_008e3380 = 0;
    DAT_008e3384 = 0;
    DAT_008e3394 = 0;
    DAT_008e33a0 = 0;
    DAT_008e3370 = &DAT_008526d8;
    DAT_008e33a8 = 0xffffffff;
    DAT_008e33a4 = 0;
    fn_0015e5e0(&DAT_008e3370,0x130,&DAT_0088d940,0x1300,4,0);
    fn_0013c500(&DAT_008e33a0);
    puVar2 = &LAB_00167690;
  }
  DAT_0089a664 = &DAT_008e3370;
  uVar1 = fn_001587b0(&DAT_008e3370,puVar2);
  fn_001707b4(&DAT_008e3460);
  return uVar1;
}



void fn_0014d7c0(int param_1,int *param_2)

{
  if (param_1 == 0 || param_2 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xc))(param_2,param_1);
  return;
}


