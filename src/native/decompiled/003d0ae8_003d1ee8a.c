#include "003d0ae8_003d1ee8a.h"



undefined4 fn_003d121c(undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(char *)((int)param_1 + 0x7f) != '\0';
  if (bVar2) {
    param_1 = (undefined4 *)param_1[0x15];
  }
  uVar1 = 0;
  if (bVar2) {
    uVar1 = *param_1;
  }
  return uVar1;
}



undefined1 fn_003d11f8(int param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x68)) ||
     (uVar1 = 0, *(char *)(param_1 + 0x7c) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_003d10c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = 0x3f800000;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar1 = fn_002cd49c((int)(char)(*(char *)(param_1 + 0x74) + -1),*(undefined1 *)(param_1 + 0x88)
                        );
    iVar2 = fn_002cd49c((int)*(char *)(param_1 + 0x74),*(undefined1 *)(param_1 + 0x88));
    iVar3 = *(int *)(param_1 + 0x80);
    iVar4 = *(int *)(param_1 + 0x68);
    fVar6 = (float)VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    iVar5 = (int)(fVar6 * (in_s0 + 1.1920929e-07)) - ((iVar3 + *(int *)(param_1 + 0x6c)) - iVar1);
    if (iVar4 <= *(int *)(param_1 + 0x6c) + iVar5) {
      *(int *)(param_1 + 0x6c) = iVar4;
      iVar5 = 0;
      fVar6 = (float)VectorSignedToFloat(iVar2 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
      in_s0 = (float)VectorSignedToFloat((iVar4 + iVar3) - iVar1,(byte)(in_fpscr >> 0x16) & 3);
      in_s0 = in_s0 / fVar6;
    }
    fVar6 = 0.0;
    if (iVar2 <= *(int *)(param_1 + 0x6c) + iVar3 + iVar5) {
      *(int *)(param_1 + 0x6c) = iVar2 - iVar3;
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      in_s0 = fVar6;
      fn_003d1030(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    fVar7 = in_s0 * 206.0;
    if (in_s0 * 206.0 <= fVar6) {
      fVar7 = fVar6;
    }
    *(float *)(iVar1 + 0x34) = fVar7;
    *(undefined4 *)(iVar1 + 0x38) = uVar8;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}



void fn_003d1030(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x34) + 0x44) = *(byte *)(*(int *)(param_1 + 0x34) + 0x44) & 0xfe | 1
  ;
  *(byte *)(*(int *)(param_1 + 0x38) + 0x44) = *(byte *)(*(int *)(param_1 + 0x38) + 0x44) & 0xfe | 1
  ;
  fn_003d1b0c(param_1,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x74));
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) = *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe | 1
  ;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  if ((float)(*(int **)(param_1 + 0x24))[9] == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x003d10b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x24) + 0x54))();
    return;
  }
  return;
}



undefined4 fn_003d0fe4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x7d) == '\0') || (*(char *)(param_1 + 0x7e) != '\0')) {
    *(undefined1 *)(param_1 + 0x7e) = 1;
  }
  else {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    uVar1 = fn_003d0bc0();
  }
  return uVar1;
}



void fn_003d0b80(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 8) + 0x44) = *(byte *)(*(int *)(param_1 + 8) + 0x44) & 0xfe | param_2
  ;
  *(byte *)(*(int *)(param_1 + 0xc) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xc) + 0x44) & 0xfe;
  return;
}



void fn_003d0ae8(int param_1,byte param_2,int param_3)

{
  int iVar1;
  
  *(byte *)(*(int *)(param_1 + 0x10) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x10) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | param_2;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
         param_2 | *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}


