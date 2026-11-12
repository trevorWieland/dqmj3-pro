#include "002fafa4_002fb6a8.h"



undefined4 fn_002fb6a8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  do {
    uVar3 = (&DAT_007bde18)[iVar2];
    iVar1 = fn_00154ac8(uVar3);
    if (iVar1 != 0) {
      return uVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return 0xffffffff;
}



void fn_002fb670(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_00144834((&DAT_007bde18)[iVar1],0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  fn_00144834(0x99,0);
  return;
}



void fn_002fb664(undefined4 param_1)

{
  fn_00144834(0x1f,param_1);
  return;
}



undefined4 fn_002fb5fc(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = fn_006f7a70(DAT_008977e0);
  iVar1 = *(int *)(iVar1 + 0x60);
  uVar2 = fn_002fb61c();
  uVar4 = (uint)(*(char *)(iVar1 + 0x10) != -1);
  if ((uVar2 & ~uVar4) == 0) {
    uVar3 = 0;
    if ((uVar4 & ~uVar2) != 0) {
      *(undefined1 *)(iVar1 + 0x10) = 0xff;
      return 1;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x10) = 0;
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_002fb61c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = fn_00154ac8((&DAT_007bde18)[iVar2]);
    if (iVar1 != 0) {
      uVar3 = 1;
      DAT_008912a0 = 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return uVar3;
}



undefined4 * fn_002fb59c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00821664;
  fn_0028e434(puVar1[4],&DAT_007bd7bc);
  fn_0028e434(puVar1[5],&DAT_007bd820);
  fn_0028e434(puVar1[3],&DAT_007bd884);
  return puVar1;
}



void fn_002fb4ec(undefined4 param_1)

{
  int iVar1;
  
  fn_001f7624();
  iVar1 = fn_00154ac8(0x33b);
  if (iVar1 != 0) {
    fn_001f748c(param_1,0xda,1);
    fn_001f7438(param_1,0xdb,0);
    return;
  }
  iVar1 = fn_00154ac8(0x4fe);
  if (iVar1 == 0) {
    fn_001f748c(param_1,0xd4,1);
    fn_001f7438(param_1,0xd6,0);
    return;
  }
  fn_001f748c(param_1,0xd8,1);
  fn_001f7438(param_1,0xd9,0);
  return;
}



void fn_002fb4c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_00821650;
  return;
}



void fn_002fb3e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  return;
}



void fn_002fb308(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  return;
}



undefined4 * fn_002fb244(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  local_10 = param_2[4];
  local_c = *(undefined2 *)(param_2 + 5);
  puVar1 = (undefined4 *)fn_002cd364(param_1,&local_20);
  puVar1[1] = 4;
  *puVar1 = &PTR_FUN_00821634;
  return puVar1;
}



undefined4 fn_002fb190(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  bVar2 = *(byte *)(param_1 + 0x1a);
  uVar5 = 0;
  iVar3 = (int)((longlong)(param_2[1] - *param_2) * -0x77777777 +
                ((ulonglong)(uint)(param_2[1] - *param_2) << 0x20) >> 0x20);
  if (iVar3 >> 7 != iVar3 >> 0x1f) {
    do {
      uVar4 = param_2[1] - *param_2;
      iVar3 = (int)((longlong)(int)uVar4 * -0x77777777 + ((ulonglong)uVar4 << 0x20) >> 0x20);
      uVar4 = fn_00246ec4(*param_2,(iVar3 >> 7) - (iVar3 >> 0x1f));
      if (uVar4 < bVar1 || bVar2 < uVar4) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar3 = (int)((longlong)(param_2[1] - *param_2) * -0x77777777 +
                    ((ulonglong)(uint)(param_2[1] - *param_2) << 0x20) >> 0x20);
    } while (uVar5 < (uint)((iVar3 >> 7) - (iVar3 >> 0x1f)));
  }
  return 0;
}



undefined4 fn_002fb124(void)

{
  undefined4 in_r3;
  int iVar1;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(DAT_00897804 + 8);
  uStack_10 = in_r3;
  fn_00246e68(&uStack_10);
  fn_00246e00(&uStack_10);
  iVar1 = fn_006b5424(&uStack_10,*(undefined4 *)(iVar1 + 4));
  if ((iVar1 == 0) && (iVar1 = fn_001f82ac(), iVar1 == 0)) {
    fn_00246e74(&uStack_10);
    return 0;
  }
  fn_00246e74(&uStack_10);
  return 1;
}



bool fn_002fb0f0(int param_1)

{
  short sVar1;
  undefined1 auStack_8e8 [88];
  short local_890;
  
  sVar1 = *(short *)(param_1 + 0x16);
  fn_002908c8(auStack_8e8);
  return local_890 != sVar1;
}



undefined4 fn_002fafa4(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  int local_20;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x13);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_002cd1dc(param_1,&local_28);
  if (param_2 == 0) {
    fn_002cd288(param_1,&local_28);
  }
  uVar6 = 0;
  uVar4 = local_24 - local_28;
  iVar5 = (int)((longlong)(int)uVar4 * -0x77777777 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  if (iVar5 >> 7 != iVar5 >> 0x1f) {
    do {
      bVar3 = *(byte *)(local_28 + uVar6 * 0xf0 + 0x2e);
      if (bVar3 < bVar1 || bVar2 < bVar3) {
        uVar4 = local_28;
        if (local_24 < local_28) {
          do {
            uVar4 = uVar4 + 0xf0;
          } while (uVar4 != local_24);
        }
        iVar5 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                      ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
        fn_001008c4(local_28,(iVar5 >> 7) - (iVar5 >> 0x1f),0);
        return 1;
      }
      iVar5 = (int)((longlong)(int)uVar4 * -0x77777777 + ((ulonglong)uVar4 << 0x20) >> 0x20);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((iVar5 >> 7) - (iVar5 >> 0x1f)));
  }
  uVar4 = local_28;
  if (local_24 < local_28) {
    do {
      uVar4 = uVar4 + 0xf0;
    } while (uVar4 != local_24);
  }
  iVar5 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
  fn_001008c4(local_28,(iVar5 >> 7) - (iVar5 >> 0x1f),0);
  return 0;
}


