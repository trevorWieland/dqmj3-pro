#include "0038cc08_0038d8b0.h"



void fn_0038d8b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c,param_3,param_4,param_1,param_2,param_3,param_4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a6d4();
  }
  *param_1 = iVar2;
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a84c(iVar1,param_2);
  }
  param_1[1] = iVar2;
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a84c(iVar1,param_3);
  }
  param_1[2] = iVar2;
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_005532f8(iVar1,param_4);
  }
  param_1[3] = iVar2;
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a84c(iVar1,param_5);
  }
  param_1[4] = iVar2;
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a9fc(iVar1,param_6);
  }
  param_1[5] = iVar2;
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00194db0(iVar1,param_7);
  }
  param_1[6] = iVar2;
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a9fc(iVar1,param_8);
  }
  param_1[7] = iVar2;
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0018a9fc(iVar1,param_9);
  }
  param_1[8] = iVar2;
  fn_0018a69c(*param_1,param_1[1]);
  fn_0018a69c(*param_1,param_1[2]);
  fn_0018a69c(*param_1,param_1[3]);
  fn_0018a69c(*param_1,param_1[4]);
  fn_0018a69c(*param_1,param_1[5]);
  fn_0018a69c(*param_1,param_1[7]);
  fn_0018a69c(*param_1,param_1[6]);
  fn_0018a69c(*param_1,param_1[8]);
  *(byte *)(*param_1 + 0x44) = *(byte *)(*param_1 + 0x44) & 0xfe | 1;
  *(byte *)(param_1[1] + 0x44) = *(byte *)(param_1[1] + 0x44) & 0xfe;
  *(byte *)(param_1[2] + 0x44) = *(byte *)(param_1[2] + 0x44) & 0xfe;
  *(byte *)(param_1[3] + 0x44) = *(byte *)(param_1[3] + 0x44) & 0xfe;
  *(byte *)(param_1[4] + 0x44) = *(byte *)(param_1[4] + 0x44) & 0xfe;
  *(byte *)(param_1[5] + 0x44) = *(byte *)(param_1[5] + 0x44) & 0xfe;
  *(byte *)(param_1[7] + 0x44) = *(byte *)(param_1[7] + 0x44) & 0xfe;
  *(byte *)(param_1[8] + 0x44) = *(byte *)(param_1[8] + 0x44) & 0xfe;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x27) = 1;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  return;
}



byte fn_0038d80c(int param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2,uVar1);
  }
  if ((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + param_2 * 4) + 4) + 0x44) & 1) == 0) {
    uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    if (uVar1 <= param_2) {
      fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2,uVar1);
    }
    bVar2 = *(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + param_2 * 4) + 8) + 0x44);
    if ((bVar2 & 1) == 0) {
      return bVar2 & 1;
    }
  }
  return 1;
}



void fn_0038d5e8(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  piVar6 = *(int **)(param_1 + 0x18);
  iVar7 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x1c);
    bVar8 = SBORROW4((int)piVar2,(int)piVar6);
    iVar3 = (int)piVar2 - (int)piVar6;
    if (piVar2 != piVar6) {
      bVar8 = SBORROW4(iVar7,param_3);
      iVar3 = iVar7 - param_3;
    }
    if (iVar3 < 0 == bVar8) break;
    bVar1 = (byte)param_2;
    if (iVar7 < param_4) {
      if (param_2 == 0) {
        *(byte *)(*(int *)(*piVar6 + 4) + 0x44) = *(byte *)(*(int *)(*piVar6 + 4) + 0x44) & 0xfe;
        *(byte *)(*(int *)(*piVar6 + 8) + 0x44) = *(byte *)(*(int *)(*piVar6 + 8) + 0x44) & 0xfe;
      }
      else {
        iVar3 = *(int *)(*piVar6 + 4);
        *(byte *)(iVar3 + 0x44) = *(byte *)(*piVar6 + 0x27) | *(byte *)(iVar3 + 0x44) & 0xfe;
        iVar3 = *piVar6;
        piVar2 = (int *)(iVar3 + 8);
        bVar8 = *(char *)(iVar3 + 0x27) == '\0';
        if (bVar8) {
          iVar3 = 1;
        }
        bVar5 = (byte)iVar3;
        if (!bVar8) {
          bVar5 = 0;
        }
        *(byte *)(*piVar2 + 0x44) = bVar5 | *(byte *)(*piVar2 + 0x44) & 0xfe;
        if (*(char *)(*piVar6 + 0x27) == '\0') {
          fn_00689080(*(undefined4 *)(*piVar6 + 0x14));
        }
        else {
          fn_00688fd8();
        }
      }
      *(byte *)(*(int *)(*piVar6 + 0x20) + 0x44) =
           *(byte *)(*(int *)(*piVar6 + 0x20) + 0x44) & 0xfe | bVar1;
      *(byte *)(*(int *)(*piVar6 + 0xc) + 0x44) = *(byte *)(*(int *)(*piVar6 + 0xc) + 0x44) & 0xfe;
      *(byte *)(*(int *)(*piVar6 + 0x14) + 0x44) =
           *(byte *)(*(int *)(*piVar6 + 0x14) + 0x44) & 0xfe | bVar1;
      *(byte *)(*(int *)(*piVar6 + 0x1c) + 0x44) =
           *(byte *)(*(int *)(*piVar6 + 0x1c) + 0x44) & 0xfe | bVar1;
      for (piVar2 = *(int **)(*(int *)(*piVar6 + 0x18) + 0x14);
          piVar2 != (int *)(*(int *)(*piVar6 + 0x18) + 0x14); piVar2 = (int *)*piVar2) {
        *(byte *)(piVar2 + 0x10) = *(byte *)(piVar2 + 0x10) & 0xfe | bVar1;
      }
      iVar3 = *(int *)(*piVar6 + 0x18);
      bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe | bVar1;
    }
    else {
      iVar3 = *(int *)(*piVar6 + 0xc);
      bVar5 = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    *(byte *)(iVar3 + 0x44) = bVar5;
    iVar3 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar4 = *(int *)(iVar3 + 0x10);
    bVar5 = *(byte *)(iVar4 + 0x44) & 0xfe;
    if (*(char *)(iVar3 + 0x26) != '\0') {
      bVar5 = bVar5 | bVar1;
    }
    *(byte *)(iVar4 + 0x44) = bVar5;
    iVar7 = (int)(char)((char)iVar7 + '\x01');
  }
  return;
}



int fn_0038d598(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2,uVar1);
  }
  return (int)*(char *)(*(int *)(*(int *)(param_1 + 0x18) + param_2 * 4) + 0x27);
}



int fn_0038d58c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(char *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar3,uVar1);
  }
  return (int)*(char *)(*(int *)(*(int *)(iVar2 + 0x18) + uVar3 * 4) + 0x27);
}



void fn_0038d4c4(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x18);
  do {
    if (*(int **)(param_1 + 0x1c) == piVar4) {
LAB_0038d524:
      uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
      if (uVar1 <= param_2) {
        fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2,uVar1);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + param_2 * 4);
      iVar2 = *(int *)(iVar3 + 0x10);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      *(undefined1 *)(iVar3 + 0x26) = 1;
      if (*(char *)(param_1 + 0x24) != param_3) {
        *(char *)(param_1 + 0x24) = (char)param_3;
      }
      return;
    }
    if (*(char *)(*piVar4 + 0x26) != '\0') {
      *(byte *)(*(int *)(*piVar4 + 0x10) + 0x44) = *(byte *)(*(int *)(*piVar4 + 0x10) + 0x44) & 0xfe
      ;
      *(undefined1 *)(*piVar4 + 0x26) = 0;
      goto LAB_0038d524;
    }
    piVar4 = piVar4 + 1;
  } while( true );
}



void fn_0038cc24(int param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6,
                 undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  
  param_2 = param_2 % 10;
  uVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  uVar9 = param_4;
  if (uVar8 <= param_2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2,uVar8);
    uVar9 = uVar8;
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x18) + param_2 * 4);
  uVar1 = fn_0038cb10(param_1,param_4,param_3,param_6,uVar9);
  *(short *)(piVar4 + 9) = (short)param_3;
  fn_00190d50(piVar4[5],uVar1);
  fn_00101d80(param_7,&DAT_0038ce24);
  fn_00190d50(piVar4[8],param_7);
  fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  *(byte *)(piVar4[3] + 0x44) = *(byte *)(piVar4[3] + 0x44) & 0xfe;
  fVar5 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x2c);
  iVar2 = *piVar4;
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(float *)(iVar2 + 0x20) = fVar5 - fVar6 * fVar7;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  if (param_3 == 0) {
    *(byte *)(piVar4[1] + 0x44) = *(byte *)(piVar4[1] + 0x44) & 0xfe;
    *(byte *)(piVar4[2] + 0x44) = *(byte *)(piVar4[2] + 0x44) & 0xfe;
    *(byte *)(piVar4[5] + 0x44) = *(byte *)(piVar4[5] + 0x44) & 0xfe;
    *(byte *)(piVar4[8] + 0x44) = *(byte *)(piVar4[8] + 0x44) & 0xfe;
    iVar2 = piVar4[3];
    bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    *(char *)((int)piVar4 + 0x27) = (char)param_5;
    if (param_5 == 0) {
      fn_00689080(piVar4[5]);
      fn_00689080(piVar4[8]);
    }
    else {
      fn_00688fd8();
      fn_00688fd8(piVar4[8]);
    }
    *(byte *)(piVar4[1] + 0x44) = *(byte *)((int)piVar4 + 0x27) | *(byte *)(piVar4[1] + 0x44) & 0xfe
    ;
    *(byte *)(piVar4[2] + 0x44) =
         *(char *)((int)piVar4 + 0x27) == '\0' | *(byte *)(piVar4[2] + 0x44) & 0xfe;
    *(byte *)(piVar4[5] + 0x44) = *(byte *)(piVar4[5] + 0x44) & 0xfe | 1;
    iVar2 = piVar4[8];
    bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar2 + 0x44) = bVar3;
  return;
}



void fn_0038cc08(undefined4 param_1,int *param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0038cc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2c))(param_2,param_3,1);
  return;
}


