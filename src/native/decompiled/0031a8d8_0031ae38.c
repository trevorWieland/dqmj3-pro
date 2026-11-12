#include "0031a8d8_0031ae38.h"



void fn_0031ae38(int param_1)

{
  fn_0031ad28(param_1,0);
  fn_00688844(param_1);
  if (*(short *)(param_1 + 0xe) != *(short *)(param_1 + 0x10)) {
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0x10);
  }
  if (*(char *)(param_1 + 0x12) != *(char *)(param_1 + 0x13)) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x13);
  }
  if (*(char *)(param_1 + 0x14) != *(char *)(param_1 + 0x15)) {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x15);
  }
  return;
}



void fn_0031ac6c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0xac) + 0x10);
  *(int **)(param_1 + 0x18) = piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_007c67ae,1);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  do {
    uVar1 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&DAT_00893184)[iVar2],1);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  fn_0031ad28(param_1,1);
  fn_00688844(param_1);
  if (*(short *)(param_1 + 0xe) != *(short *)(param_1 + 0x10)) {
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0x10);
  }
  if (*(char *)(param_1 + 0x12) != *(char *)(param_1 + 0x13)) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x13);
  }
  if (*(char *)(param_1 + 0x14) != *(char *)(param_1 + 0x15)) {
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x15);
  }
  return;
}



void fn_0031ad28(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  fn_00688818();
  if ((param_2 != 0) || (*(short *)(param_1 + 0xe) != *(short *)(param_1 + 0x10))) {
    fn_0031abf8(param_1);
    fn_0031aab0(param_1);
    if (param_2 != 0) goto LAB_0031ada0;
  }
  if (((*(short *)(param_1 + 0xe) == *(short *)(param_1 + 0x10)) &&
      (*(char *)(param_1 + 0x12) == *(char *)(param_1 + 0x13))) &&
     (*(char *)(param_1 + 0x14) == *(char *)(param_1 + 0x15))) {
    return;
  }
LAB_0031ada0:
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(char *)(param_1 + 0x15) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = 3;
  }
  iVar1 = 0;
  do {
    if (iVar1 == iVar4) {
      param_4 = 1;
    }
    if (iVar1 != iVar4) {
      param_4 = 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4);
    iVar1 = iVar1 + 1;
    param_4 = param_4 | *(byte *)(iVar3 + 0x44) & 0xfe;
    *(char *)(iVar3 + 0x44) = (char)param_4;
  } while (iVar1 < 4);
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar4 = fn_006e1ee4();
    if (*(char *)(param_1 + 0x15) == '\0') {
      sVar2 = 3;
    }
    else {
      sVar2 = 0;
    }
    *(ushort *)(iVar4 + 0x76) = sVar2 << 6 | *(ushort *)(iVar4 + 0x76) & 0xfe3f;
  }
  return;
}



void fn_0031abf8(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_00151954(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0xc));
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 4))();
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) != -1) {
    fn_00148348(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x2c) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}



void fn_0031aab0(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_210 [516];
  
  sVar2 = *(short *)(param_1 + 0x10);
  if (sVar2 < 9000) {
    return;
  }
  fn_00301f50(auStack_210,0x200);
  fn_0018a618(auStack_210,0x100,0xff,L"patch:/data/Icons/ic/ic_%04d.arc",(int)sVar2);
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 4),auStack_210,&DAT_0031abdc,1,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  fn_00301f50(auStack_210,0x100);
  fn_0017d96c(auStack_210,0x100,0xff,(char *)&DAT_0031abe0,(int)*(short *)(param_1 + 0x10));
  uVar3 = fn_001c8c60(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x2c),auStack_210);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = fn_001c8888(*(undefined4 *)(param_1 + 4),uVar3);
  iVar4 = fn_00145b00(0xc0,&DAT_00812c8c);
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = fn_001c99cc(iVar4,uVar3);
  }
  *(int *)(param_1 + 0x34) = iVar5;
  bVar1 = *(byte *)(iVar5 + 0x47);
  *(byte *)(iVar5 + 0x47) = bVar1 & 0xfc | 1;
  *(byte *)(*(int *)(param_1 + 0x34) + 0x47) = bVar1 & 0xf0 | 5;
  fn_001c9700(*(undefined4 *)(param_1 + 0x34));
  iVar5 = fn_006e1ee4(*(undefined4 *)(param_1 + 0x34));
  *(ushort *)(iVar5 + 0x76) = *(ushort *)(iVar5 + 0x76) & 0xfe3f;
  fn_0018a69c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x34));
  return;
}



void fn_0031aa80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &PTR_LAB_00822e60;
  return;
}



void fn_0031a9ec(int *param_1)

{
  fn_002c4304();
  switch(param_1[0x2c]) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0031aa2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x0031aa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x13c))(param_1);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0031aa54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x140))(param_1);
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0031aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x144))(param_1);
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0031aa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1);
    return;
  default:
    return;
  }
}



bool fn_0031a98c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
  return (uVar2 & uVar3) != 0;
}



void fn_0031a964(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14c))(param_1);
  if (iVar1 != 0) {
    param_1[0x2c] = 1;
  }
  return;
}



void fn_0031a940(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  *(undefined4 *)(iVar1 + 0x28) = uVar7;
  *(undefined4 *)(iVar1 + 0x2c) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xd];
  *(undefined4 *)(iVar1 + 0x30) = param_2[8];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  *(undefined4 *)(iVar1 + 0x40) = uVar5;
  *(undefined4 *)(iVar1 + 0x44) = uVar6;
  return;
}



void fn_0031a914(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x10) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x12) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x13) = param_4;
  return;
}



void fn_0031a8e4(int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined1 param_5)

{
  undefined2 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 4) + 8);
  }
  else if (param_2 == 1) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 4) + 0xc);
  }
  else {
    puVar1 = (undefined2 *)0x0;
  }
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = param_4;
  *(undefined1 *)((int)puVar1 + 3) = param_5;
  return;
}



void fn_0031a8d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}


