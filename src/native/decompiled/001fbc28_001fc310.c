#include "001fbc28_001fc310.h"



void fn_001fc310(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar4 = *param_1;
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  uVar1 = *(undefined1 *)(iVar2 + 0x104);
  uVar3 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b6f3c(uVar3,uVar1,0);
  fVar7 = *(float *)(iVar2 + 8);
  fVar6 = 0.0;
  fVar5 = -*(float *)(iVar2 + 0x10);
  iVar2 = *(int *)(iVar4 + 0x14);
  uVar3 = *(undefined4 *)(iVar2 + 0x28);
  uVar8 = *(undefined4 *)(iVar2 + 0x2c);
  fVar5 = (fVar7 * 0.0 + fVar5 * -1.0) / (SQRT(fVar7 * fVar7 + fVar5 * fVar5) * 1.0);
  fn_006f9b80();
  fVar5 = fVar5 * 57.295776;
  if (fVar6 < fVar7) {
    fVar5 = -fVar5;
  }
  fn_00144810(DAT_008977e8);
  iVar2 = fn_001cc324();
  if (iVar2 == 3) {
    fVar5 = fVar6;
  }
  iVar2 = *(int *)(iVar4 + 0x14);
  *(float *)(iVar2 + 0x30) = fVar5;
  *(undefined4 *)(iVar2 + 0x28) = uVar3;
  *(undefined4 *)(iVar2 + 0x2c) = uVar8;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  return;
}



void fn_001fc104(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_s0;
  undefined4 in_s1;
  
  iVar3 = 0;
  iVar4 = *param_1;
  do {
    uVar1 = fn_0014481c(DAT_008977e8);
    iVar2 = fn_006b71a8(uVar1,param_2 & 0xff);
    fn_001fd428(iVar4,iVar2 + 8);
    iVar2 = iVar4 + param_2 * 0x28c + iVar3 * 8;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x3ec) = in_s0;
    *(undefined4 *)(iVar2 + 0x3f0) = in_s1;
  } while (iVar3 < 0x51);
  return;
}



int fn_001fc040(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((*(uint *)(&DAT_008cd180)[iVar2] != (uint)DAT_00896cbc || DAT_00896cbc != 0 ||
         (iVar1 = (int)*(char *)((int)(&DAT_008cd180)[iVar2] + 0x2d), iVar1 < 0))) {
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 0;
    }
  }
  return iVar1;
}



void fn_001fbe80(uint *param_1,int param_2)

{
  if (*(uint *)(&DAT_008cd180)[param_2] == (uint)DAT_00896cbc && DAT_00896cbc == 5) {
    *param_1 = ((uint *)(&DAT_008cd180)[param_2])[5];
    param_1[1] = *(uint *)((&DAT_008cd180)[param_2] + 0x18);
  }
  return;
}



undefined4 fn_001fbdfc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = fn_0066eb64(DAT_00897850,0,DAT_00896cc0,DAT_00897850,unaff_r4,in_lr);
  }
  else if (iVar1 == 1) {
    uVar2 = fn_0066eb64(DAT_00897850,1,&DAT_008cd190,DAT_00897850,unaff_r4,in_lr);
  }
  return uVar2;
}



int fn_001fbdcc(int param_1)

{
  int iVar1;
  
  if (*(uint *)(&DAT_008cd180)[param_1] == (uint)DAT_00896cbc && DAT_00896cbc == 0) {
    iVar1 = (int)(short)((uint *)(&DAT_008cd180)[param_1])[8];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



undefined * fn_001fbd64(int *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  puVar2 = (undefined *)0x0;
  if (iVar1 == 0) {
    puVar2 = (undefined *)(&DAT_008cd180)[param_2];
  }
  else if (iVar1 == 1) {
    puVar2 = &DAT_008cd224 + param_2 * 0x94;
  }
  return puVar2;
}



uint fn_001fbd34(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(&DAT_008cd180)[param_1] == (uint)DAT_00896cbc && DAT_00896cbc == 5) {
    uVar1 = ((uint *)(&DAT_008cd180)[param_1])[1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001fbcb8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_001fbc38(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_001287d4(0x34,&DAT_00812c8c);
  DAT_00896cc0 = puVar1;
  puVar1[2] = 0xffffffff;
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 8) = 0xffff;
  *(undefined2 *)((int)puVar1 + 0x22) = 0xffff;
  *(undefined2 *)(puVar1 + 9) = 0xffff;
  *(undefined2 *)((int)puVar1 + 0x26) = 0xffff;
  *(undefined1 *)(puVar1 + 10) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x2a) = 0;
  *(undefined1 *)((int)puVar1 + 0x2b) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x2e) = 0;
  *(undefined1 *)((int)puVar1 + 0x2f) = 0;
  *(undefined1 *)((int)puVar1 + 0x31) = 1;
  iVar2 = 0;
  *puVar1 = 0;
  do {
    puVar1 = (undefined4 *)fn_001287d4(0x34,&DAT_00812c8c);
    (&DAT_008cd180)[iVar2] = puVar1;
    puVar1[2] = 0xffffffff;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 8) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x22) = 0xffff;
    *(undefined2 *)(puVar1 + 9) = 0xffff;
    *(undefined2 *)((int)puVar1 + 0x26) = 0xffff;
    *(undefined1 *)(puVar1 + 10) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2a) = 0;
    *(undefined1 *)((int)puVar1 + 0x2b) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2e) = 0;
    *(undefined1 *)((int)puVar1 + 0x2f) = 0;
    iVar2 = iVar2 + 1;
    *(undefined1 *)((int)puVar1 + 0x31) = 1;
    *puVar1 = 0;
  } while (iVar2 < 4);
  DAT_00896cbc = 0;
  return;
}



void fn_001fbc28(undefined4 param_1)

{
  DAT_00896cc4 = param_1;
  return;
}


