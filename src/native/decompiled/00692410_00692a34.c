#include "00692410_00692a34.h"



void fn_00692a34(int param_1)

{
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00692a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  return;
}



bool fn_00692708(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  
  fn_00154ae0(DAT_008977e4);
  uVar2 = fn_00164198();
  fn_00154ae0(DAT_008977e4);
  uVar1 = fn_006a8f54();
  fn_00154ae0(DAT_008977e4);
  iVar3 = fn_006a8efc();
  uVar4 = fn_0017481c(DAT_008977e4);
  uVar4 = fn_00254310(uVar4,uVar2);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  iVar5 = fn_00145b00(8,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    piVar6 = (int *)fn_005efdbc();
  }
  piVar9 = *(int **)(param_1 + 4);
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 4) = piVar6;
  }
  iVar5 = fn_0017481c(DAT_008977e4);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (((int)uVar7 < 0) || ((uint)((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0x34) <= uVar7)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4) + uVar7 * 0x34;
  }
  fn_00692a50(param_1,*(undefined4 *)(param_1 + 4),iVar5);
  uVar4 = fn_0017481c(DAT_008977e4);
  iVar5 = fn_002543a0(uVar4,uVar2);
  *(int *)(param_1 + 0x14) = iVar5;
  if (iVar5 != -1) {
    iVar5 = fn_00145b00(8,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar5 != 0) {
      piVar6 = (int *)fn_005efdbc();
    }
    piVar9 = *(int **)(param_1 + 8);
    if (piVar9 != piVar6) {
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))(piVar9);
      }
      *(int **)(param_1 + 8) = piVar6;
    }
    iVar5 = fn_0017481c(DAT_008977e4);
    uVar7 = *(uint *)(param_1 + 0x14);
    if (((int)uVar7 < 0) || ((uint)((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0x34) <= uVar7)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4) + uVar7 * 0x34;
    }
    fn_00692a50(param_1,*(undefined4 *)(param_1 + 8),iVar5);
    if (iVar3 == 0) {
      uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 8));
      iVar5 = fn_00190fb4(uVar4,(char *)&DAT_006926fc);
      if (iVar5 != 0xffff) {
        local_30 = 0xff;
        local_2f = 0xff;
        local_2e = 0xff;
        local_2d = 0;
        uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 8));
        fn_0017fc08(uVar4,iVar5,&local_30);
      }
    }
    iVar5 = fn_005ef124(*(undefined4 *)(param_1 + 8));
    if (0 < iVar5) {
      fn_005ef390(*(undefined4 *)(param_1 + 8),0);
      fn_0017fd4c(*(undefined4 *)(param_1 + 8));
    }
  }
  uVar4 = fn_0017481c(DAT_008977e4);
  uVar2 = fn_00254280(uVar4,uVar2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  iVar5 = fn_00145b00(0x1c,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    piVar6 = (int *)fn_00378838();
  }
  piVar9 = *(int **)(param_1 + 0xc);
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0xc) = piVar6;
  }
  iVar5 = fn_0017481c(DAT_008977e4);
  uVar7 = *(uint *)(param_1 + 0x18);
  if (((int)uVar7 < 0) || ((uint)((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4)) / 0x34) <= uVar7)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 4) + uVar7 * 0x34;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(iVar8 + 0x19) = uVar1;
  *(char *)(iVar8 + 0x1a) = (char)iVar3;
  iVar3 = fn_00174864(DAT_008977e4);
  iVar3 = fn_0033801c(iVar8,iVar5,*(undefined4 *)(iVar3 + 4));
  return iVar3 != 0;
}



void fn_00692634(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  if (param_3 == 0) {
    uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 8));
    iVar2 = fn_00190fb4(uVar1,(char *)&DAT_006926fc);
    if (iVar2 != 0xffff) {
      local_20 = 0xff;
      local_1f = 0xff;
      local_1e = 0xff;
      local_1d = 0;
      uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 8));
      fn_0017fc08(uVar1,iVar2,&local_20);
    }
  }
  iVar2 = fn_005ef124(*(undefined4 *)(param_1 + 8));
  if (iVar2 < 1) {
    return;
  }
  fn_005ef390(*(undefined4 *)(param_1 + 8),0);
  fn_0017fd4c(*(undefined4 *)(param_1 + 8));
  return;
}



undefined4 fn_006925f4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = *(char *)(DAT_008994a4 + param_1 * 0x60 + 10);
  if ((cVar1 == '\x17' || cVar1 == '\x19') || ((cVar1 == '/' || cVar1 == 'B') || cVar1 == 'C')) {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006925d4(int param_1,int param_2)

{
  return DAT_008994a4 + param_1 * 0x60 + param_2 * 4 + 0x2a;
}



int fn_006925b8(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x4c);
}



int fn_0069259c(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x20);
}



void fn_00692584(void)

{
  DAT_008994a4 = 0;
  DAT_008994a8 = 0;
  return;
}



int fn_00692568(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x4a);
}



undefined4 fn_006924f4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 != 0x177) {
    param_3 = param_1 + -0x100;
  }
  uVar2 = 0;
  if ((((param_1 == 0x177 || param_3 == 0xd3) || (param_1 == 0x23b || param_1 == 0x23c)) ||
      (cVar1 = *(char *)(DAT_008994a4 + param_1 * 0x60 + 10), cVar1 == ' ' || cVar1 == '\x14')) ||
     ((cVar1 == '&' || cVar1 == '\'' || ((cVar1 == '\x19' || cVar1 == '.') || cVar1 == ';')))) {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006924e0(void)

{
  return (int)(short)DAT_008994a8;
}



int fn_006924c4(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 8);
}



byte fn_006924a0(int param_1)

{
  return *(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) >> 7;
}



byte fn_00692498(undefined4 param_1,int param_2)

{
  return *(byte *)(DAT_008994a4 + param_2 * 0x60 + 0x40) >> 7;
}



uint fn_00692474(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1ff) >> 8;
}



uint fn_0069246c(undefined4 param_1,int param_2)

{
  return (*(ushort *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0x1ff) >> 8;
}



uint fn_00692448(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3fffff) >> 0x15;
}



undefined1 fn_0069242c(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x28);
}



undefined1 fn_00692410(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x27);
}


