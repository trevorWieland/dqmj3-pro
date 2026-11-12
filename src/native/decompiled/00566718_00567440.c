#include "00566718_00567440.h"



void fn_00567440(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0083fc04;
  if ((int *)param_1[0x72] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x72] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005673c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00211c48();
  *puVar1 = &PTR_FUN_0083fc04;
  *(undefined1 *)(puVar1 + 0x67) = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  *(undefined1 *)(puVar1 + 0x6e) = 0;
  puVar1[0x6f] = 0xffffffff;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0065fdf0();
  }
  puVar1[0x72] = uVar3;
  return puVar1;
}



void fn_00567378(int param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x58);
  fn_001dbb48();
  if (((int)cVar1 & ~param_2) != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0xe8) != -1) {
      fn_001daac0(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_005672f8(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = (char)param_1[0x6e];
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = (char)param_1[0x67];
  }
  if (bVar4 && cVar1 == '\x02') {
    iVar3 = (**(code **)(*param_1 + 0x134))(param_1);
    uVar2 = 0;
    if (iVar3 != 0) {
      fn_001eac78(param_2);
      *(undefined1 *)(param_2 + 0x3e3) = 1;
      *(undefined1 *)(param_1 + 0x6e) = 1;
      *(undefined1 *)(param_1 + 0x67) = 3;
      uVar2 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar2,0xffffffff);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0056700c(int param_1)

{
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  
  fn_001db0b0();
  local_18 = *(undefined4 *)(param_1 + 0x1c0);
  local_14 = *(float *)(param_1 + 0x1c4);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  local_2c = *(float *)(param_1 + 0x24) + local_14;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_10 = local_18;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1c8),&local_18,&local_24,param_1 + 0x2c,&local_30
              );
  return;
}



void fn_00566f94(int param_1)

{
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  
  fn_001daaf8();
  local_18 = *(undefined4 *)(param_1 + 0x1c0);
  local_14 = *(float *)(param_1 + 0x1c4);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  local_2c = *(float *)(param_1 + 0x24) + local_14;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_10 = local_18;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1c8),&local_18,&local_24,param_1 + 0x2c,&local_30
              );
  return;
}



undefined4 fn_00566f40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffff7;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  return uVar1;
}



void fn_00566f04(int param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  fn_001d9f9c(param_1);
  return;
}



void fn_00566ef8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  return;
}



void fn_00566c40(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  if ((*(char *)(iVar1 + 0x22d) == '\a') &&
     (iVar1 = fn_006f7a84(DAT_008977e0), *(float *)(iVar1 + 0xf8) <= 0.0)) {
    *(undefined1 *)(param_1 + 0x19c) = 4;
    local_18 = 0;
    local_14[0] = 0xff000000;
    fn_0068869c(DAT_00897810,&local_18,local_14,0x14);
    local_18 = 0xff000000;
    local_14[0] = 0;
    fn_0068869c(DAT_0089780c,local_14,&local_18,0x14);
  }
  return;
}



void fn_00566b20(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  if ((*(int *)(param_1 + 0x1a0) != -1) &&
     (iVar1 = *(int *)(param_1 + 0x1ac) + 1, *(int *)(param_1 + 0x1ac) = iVar1,
     *(int *)(param_1 + 0x1a0) < iVar1)) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x19c) = 1;
    fn_001da39c(param_1);
    fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1b0));
    fn_0023e2ac(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8));
    fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8),param_1 + 0x38
                );
    iVar1 = fn_006f7a20(DAT_008977e0);
    if ((iVar1 == 0) && (iVar1 = fn_006cc1e4(*(undefined4 *)(DAT_008977e0 + 0x50)), iVar1 == 0)) {
      iVar1 = fn_001d9a94(param_1,auStack_18,auStack_14);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
  }
  return;
}



void fn_00566a7c(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x3c))();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00566ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00566ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}



void fn_00566a14(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083f9b4;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = *(undefined4 *)(param_2 + 0x14);
  puVar1[0x1f] = 0;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  puVar1[0x23] = 0x3f800000;
  return;
}



void fn_00566910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    iVar1 = fn_00154a6c(*(undefined4 *)(param_1 + 0x74));
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
    if ((*(uint *)(param_1 + 0x80) < 6) &&
       (*(int *)(param_1 + 0x7c) == *(int *)(&DAT_00890ff0 + *(uint *)(param_1 + 0x80) * 8))) {
      if (*(int *)(param_1 + 0x84) != -1) {
        (**(code **)(**(int **)(param_1 + 0x78) + 0xc))();
        *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
      }
      uVar2 = fn_0023e194(*(undefined4 *)(param_1 + 0x78),
                           *(undefined4 *)(&DAT_00890fec + *(int *)(param_1 + 0x80) * 8),0);
      *(undefined4 *)(param_1 + 0x84) = uVar2;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x84) != -1) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0xc))();
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  }
  return;
}



void fn_00566748(int param_1)

{
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_00566718(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = &DAT_0083f86c;
  return;
}


