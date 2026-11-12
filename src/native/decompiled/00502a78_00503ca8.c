#include "00502a78_00503ca8.h"



void fn_00503ca8(int param_1)

{
  undefined4 *puVar1;
  
  fn_004f89b8(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),0);
  fn_004f3498(*(undefined4 *)(param_1 + 8),0);
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),0);
  fn_004f405c(*(undefined4 *)(param_1 + 0xc));
  (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),0);
  fn_00500648(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int **)(param_1 + 0x10),0);
  fn_004feb10(*(undefined4 *)(param_1 + 0x14));
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),0);
  fn_004f8dbc(*(undefined4 *)(param_1 + 0x18));
  (**(code **)(**(int **)(param_1 + 0x18) + 8))(*(int **)(param_1 + 0x18),0);
  fn_004ff7d8(*(undefined4 *)(param_1 + 0x1c));
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c),0);
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_00502890();
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_00503254();
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_004fb998();
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c),0);
  }
  fn_004fa300(*(undefined4 *)(param_1 + 0x30));
  (**(code **)(**(int **)(param_1 + 0x30) + 8))(*(int **)(param_1 + 0x30),0);
  for (puVar1 = (undefined4 *)(DAT_008bf4cc + 0x3c);
      puVar1 != (undefined4 *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
      puVar1 = puVar1 + 1) {
    fn_0051c5c8(*puVar1);
  }
  fn_004ed13c(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  return;
}



void fn_00503c80(int param_1)

{
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x00503c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    return;
  }
  return;
}



undefined1 * fn_00503410(int param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((((param_2 == (char *)0x0) || (*param_2 != '\x01')) && (*(char *)(param_1 + 100) != '\x01'))
     && (*(int *)(DAT_008bf4cc + 0xa4) == 0)) {
    iVar1 = fn_006d88c8(*(undefined4 *)(param_1 + 4));
    if ((iVar1 == 0) || (iVar1 = fn_006d88c8(*(undefined4 *)(param_1 + 4)), iVar1 == 5)) {
      puVar2 = (undefined1 *)fn_004f8a00(*(undefined4 *)(param_1 + 4),param_2);
      if (-1 < (int)puVar2) {
        fn_004efcf4(*(undefined4 *)(param_1 + 4),0);
      }
      return puVar2;
    }
    if (DAT_008c0630 != 0) {
      fn_006d88c8(*(undefined4 *)(param_1 + 4),8,0,(char *)&DAT_00503664,"session_Mesh.cpp",
                   "CreateMesh");
    }
  }
  return &DAT_e0a14827;
}



void fn_0050340c(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



undefined4 * fn_005033a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00856f94;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 5000;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x55) = 0xfd;
  fn_0011a604((int)puVar1 + 0x56);
  *(undefined1 *)((int)puVar1 + 0x62) = 0;
  return puVar1;
}



undefined4 fn_0050329c(int *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  int iStack_14;
  
  if ((char)param_1[0x15] == '\0') {
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar5 = param_1[0x14];
    puVar3 = (uint *)fn_004f0ce8();
    lVar1 = (ulonglong)uVar5 * (ulonglong)*puVar3;
    uVar4 = (uint)lVar1;
    param_1[0x13] =
         *puVar3 * ((int)uVar5 >> 0x1f) + puVar3[1] * uVar5 + (int)((ulonglong)lVar1 >> 0x20) +
         iStack_14 + (uint)CARRY4(uVar4,local_18);
    param_1[0x12] = uVar4 + local_18;
    if (param_2 != 0) {
      param_1[0x10] = param_2;
      fn_004ed050(param_2);
    }
    *(undefined1 *)(param_1 + 0x15) = 1;
    fn_00505a04(DAT_008bf4e0,2);
    (**(code **)(*param_1 + 8))(param_1,1);
    param_1[0xb] = (int)"LeaveWithHostMigrationJob::CheckHostMigrationProcess";
    param_1[9] = (int)&LAB_00502e60;
    param_1[10] = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00503254(int *param_1)

{
  if ((char *)param_1[0x10] != (char *)0x0) {
    if (*(char *)param_1[0x10] == '\x01') {
      fn_004ed068();
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



uint fn_00503168(int param_1)

{
  int iVar1;
  uint unaff_r5;
  uint in_r12;
  
  iVar1 = fn_004f6d58(*(undefined4 *)(DAT_008bf4e0 + 0x4c),param_1 + 0x56);
  if (iVar1 == 0) {
    *(code **)(param_1 + 0x24) = fn_00502b74;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LeaveWithHostMigrationJob::CleanupMesh";
    return in_r12 & 0xff00;
  }
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined1 **)(param_1 + 0x24) = &LAB_00502c54;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LeaveWithHostMigrationJob::WaitMigrationResponse";
  return unaff_r5 & 0xff00 | 5;
}



uint fn_0050300c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r7;
  
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  *(char *)((int)param_1 + 0x55) = (char)uVar2;
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if ((0xb < uVar2) || (uVar2 == bVar1)) {
    param_1[0xb] = (int)"LeaveWithHostMigrationJob::CleanupMesh";
    param_1[9] = (int)fn_00502b74;
    param_1[10] = 0;
    return param_4 & 0xff00;
  }
  uVar2 = 0;
  do {
    if (((uVar2 & 0xff) == (uint)bVar1) ||
       (iVar3 = fn_006d92e4(DAT_008bf4e0,uVar2 & 0xff), iVar3 == 0)) {
      *(undefined1 *)((int)param_1 + uVar2 + 0x56) = 0;
    }
    else {
      fn_004f5cb0(*(undefined4 *)(DAT_008bf4e0 + 0x4c),uVar2 & 0xff,
                   *(undefined1 *)((int)param_1 + 0x55));
      *(undefined1 *)((int)param_1 + uVar2 + 0x56) = 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xc);
  *(undefined1 *)((int)param_1 + 0x62) = 1;
  param_1[0xb] = (int)"LeaveWithHostMigrationJob::WaitMigrationResponse";
  param_1[9] = (int)&LAB_00502c54;
  param_1[10] = 0;
  return unaff_r7 & 0xff00 | 5;
}



void fn_00502c28(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0xfd;
  fn_0011a604(param_1 + 0x56);
  *(undefined1 *)(param_1 + 0x62) = 0;
  return;
}



uint fn_00502b74(int *param_1)

{
  char *pcVar1;
  int *piVar2;
  uint unaff_r6;
  
  for (piVar2 = (int *)(DAT_008bf4cc + 0x3c);
      piVar2 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
      piVar2 = piVar2 + 1) {
    (**(code **)(**(int **)(*piVar2 + 0x30) + 0x18))();
  }
  fn_00505974(DAT_008bf4e0);
  *(undefined1 *)(DAT_008bf4e0 + 0x65) = 2;
  fn_005044fc();
  pcVar1 = (char *)param_1[0x10];
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed0e4(pcVar1,0);
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  return unaff_r6 & 0xff00 | 1;
}



void fn_00502b60(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



undefined4 * fn_00502a78(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &PTR_FUN_00856f24;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 10000;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  *(undefined1 *)((int)puVar1 + 0x6d) = 0;
  *(undefined1 *)((int)puVar1 + 0x6f) = 0;
  fn_0011a604((int)puVar1 + 0x72);
  *(undefined1 *)((int)puVar1 + 0x7e) = 0;
  *(undefined1 *)((int)puVar1 + 0x7f) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0xfd;
  *(undefined1 *)((int)puVar1 + 0x81) = 0;
  *(undefined1 *)((int)puVar1 + 0x82) = 0;
  *(undefined1 *)((int)puVar1 + 0x71) = 0xfd;
  *(undefined1 *)(puVar1 + 0x1c) = 0xfd;
  *(bool *)(puVar1 + 0x21) = *(char *)(DAT_008bf4e0 + 0x66) == '\x02';
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  fn_00158f40((int)puVar1 + 0x85,0xc,0xfd);
  return puVar1;
}


