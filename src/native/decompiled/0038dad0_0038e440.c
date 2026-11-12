#include "0038dad0_0038e440.h"



undefined4 fn_0038e440(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0023c2a8();
  iVar2 = fn_006b8b70(uVar1,param_2);
  if (iVar2 == 0) {
    iVar2 = fn_0023c2a8(0);
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = fn_006f5e30(uVar3);
    uVar1 = 0;
    if (iVar2 != 0) {
      fn_00673354(uVar3);
      fn_0067a104(*(undefined4 *)(param_1 + 4),0,param_2,2);
      *(undefined4 *)(param_1 + 0xc) = param_2;
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 9) = 0;
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0038e41c(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_0082ad88;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_0038e330(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_1c = 0x50435342;
  uStack_18 = 0;
  iVar1 = fn_0011c1b4(L"patch:/data/Parameter/BattleScriptActionParam.tp",0,0,0,0,0,0,0,5);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_00145ac0();
    if ((iVar1 != 0) && (iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 4)), iVar1 == 1)) {
      iVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 4));
      iVar2 = fn_00147e6c(iVar1,&local_1c,4);
      if (iVar2 == 0) {
        iVar2 = fn_0012a26c(*(undefined4 *)(param_1 + 4));
        *(uint *)(param_1 + 0x14) = iVar2 - 4U >> 6;
        *(int *)(param_1 + 8) = iVar1 + 4;
        *(int *)(param_1 + 0xc) = iVar1 + 0xc;
        *(int *)(param_1 + 0x10) = iVar1 + 4 + *(int *)(iVar1 + 8);
        return;
      }
    }
    fn_0012d73c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_0038e30c(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_0038e2c4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    puVar3 = (undefined4 *)fn_001c2484();
    *puVar3 = &DAT_0081e754;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = uVar1;
  }
  return;
}



void fn_0038e2b4(void)

{
  fn_00339ae4();
  fn_002feef8();
  return;
}



void fn_0038e1cc(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00174828(DAT_008977e4);
  if (*(char *)(iVar1 + 0xc) == '\x02') {
    uVar3 = fn_00174828(DAT_008977e4);
    uVar4 = fn_006a7b78(DAT_008977e4);
    uVar5 = fn_00174834(DAT_008977e4);
    fn_001c41d0(uVar3,uVar4,uVar5);
    puVar2 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_0082ad40;
    }
  }
  else {
    puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = 1;
      *puVar2 = &DAT_0082deb8;
      *(undefined1 *)((int)puVar2 + 5) = 0;
    }
  }
  fn_005df93c(DAT_008977e4,puVar2);
  return;
}



void fn_0038df98(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x74,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0038dfe0(iVar1,param_1);
  return;
}



undefined4 * fn_0038dfe0(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  puVar3 = (undefined4 *)fn_0068ab5c();
  *puVar3 = &DAT_0082ac30;
  puVar3[0x19] = 0;
  *(undefined2 *)(puVar3 + 0x1c) = 0xffff;
  uVar7 = *(undefined4 *)(param_2 + 8);
  uVar4 = fn_005f65d4();
  sVar1 = fn_001481c8(uVar7,(&PTR_u_rom__data_Layout_battle_battle_u_008907f4)[uVar4 % 9],
                       &DAT_0038e100,1,1);
  *(short *)(puVar3 + 0x1b) = sVar1;
  uVar2 = fn_001480d0(uVar7,(int)sVar1,(&PTR_s_battle_wait_00_bflyt_00890818)[uVar4 % 9],
                       &DAT_0038e108,0,1,0);
  *(undefined2 *)((int)puVar3 + 0x6e) = uVar2;
  iVar5 = fn_00178f9c(uVar7);
  puVar3[0x19] = iVar5;
  iVar5 = (**(code **)(**(int **)(iVar5 + 0x10) + 0x2c))(*(int **)(iVar5 + 0x10),DAT_008907e4,1);
  puVar3[0x1a] = iVar5;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  uVar2 = fn_001853ec(uVar7,DAT_008907e0,(int)*(short *)((int)puVar3 + 0x6e));
  *(undefined2 *)(puVar3 + 0x1c) = uVar2;
  piVar6 = (int *)fn_001854ac(uVar7);
  (**(code **)(*piVar6 + 0x50))(piVar6,1);
  return puVar3;
}



undefined4 * fn_0038de48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  *param_1 = &DAT_0082ac20;
  do {
    uVar2 = (int)(param_1[7] - param_1[6]) >> 2;
    if (uVar2 <= uVar4) {
      fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar4,uVar2);
      param_4 = uVar2;
    }
    piVar3 = *(int **)(param_1[6] + uVar4 * 4);
    if (piVar3 != (int *)0x0) {
      if (*piVar3 != 0) {
        fn_00151954(*(undefined4 *)(*piVar3 + 0xc));
        if ((int *)*piVar3 != (int *)0x0) {
          (**(code **)(*(int *)*piVar3 + 4))();
        }
      }
      *piVar3 = 0;
      fn_002feef8(piVar3);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  uVar4 = param_1[7];
  uVar2 = param_1[6];
  if (uVar2 != uVar4) {
    uVar1 = uVar2;
    if (uVar4 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    param_1[7] = uVar4 - (uVar4 - uVar2 & 0xfffffffc);
  }
  uVar2 = param_1[6];
  uVar4 = uVar2;
  if ((uint)param_1[7] <= uVar2) {
    for (; uVar4 != param_1[7]; uVar4 = uVar4 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[8] - uVar2) >> 2,0,param_1 + 6,param_4);
  return param_1;
}



undefined4 * fn_0038ddac(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0082ac20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar2;
    DAT_008f9e30 = uVar2;
    DAT_008f9e34 = uVar2;
  }
  return param_1;
}



void fn_0038dad0(int param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  byte bVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_88 [25];
  
  uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  if (param_2 < uVar1) {
    if (uVar1 <= param_2) {
      local_88[0] = uVar1;
      fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,param_2);
    }
    piVar8 = *(int **)(*(int *)(param_1 + 0x18) + param_2 * 4);
    fVar11 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    *(short *)(piVar8 + 9) = (short)param_4;
    fVar9 = *(float *)(param_1 + 8);
    fVar10 = *(float *)(param_1 + 0x2c);
    iVar2 = *piVar8;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 4);
    *(float *)(iVar2 + 0x20) = fVar9 - fVar10 * fVar11;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    if (param_3 == 1) {
      uVar3 = fn_0038cb10(param_1,1,param_4,&DAT_0038dda0);
      fn_00190d50(piVar8[7],uVar3);
      fn_00190d50(piVar8[5],&DAT_0038dda0);
      fn_00190d50(piVar8[8],&DAT_0038dda0);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10);
      fn_00301f50(local_88,100);
      fn_00102d9a(local_88,param_6,100);
      piVar4 = (int *)fn_0038cc08(param_1,uVar3,local_88);
      if (piVar4 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
        do {
          if (puVar5 == &DAT_0089a92c) goto LAB_0038dcf0;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
      piVar4 = (int *)0x0;
LAB_0038dcf0:
      iVar6 = fn_00145b00(0xc0,&DAT_00812c8c);
      iVar2 = 0;
      if (iVar6 != 0) {
        iVar2 = fn_005532f8(iVar6,piVar4);
      }
      fn_0018a69c(piVar8[6],iVar2);
      *(byte *)(piVar4 + 0x11) = *(byte *)(piVar4 + 0x11) & 0xfe;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      *(byte *)(piVar8[7] + 0x44) = *(byte *)(piVar8[7] + 0x44) & 0xfe | 1;
    }
    else {
      uVar3 = fn_0038cb10(param_1,param_3,param_4,param_6);
      fn_00190d50(piVar8[5],uVar3);
      fn_00190d50(piVar8[7],&DAT_0038dda0);
      fn_00190d50(piVar8[8],param_7);
      *(byte *)(piVar8[5] + 0x44) = *(byte *)(piVar8[5] + 0x44) & 0xfe | 1;
      *(byte *)(piVar8[8] + 0x44) = *(byte *)(piVar8[8] + 0x44) & 0xfe | 1;
    }
    *(char *)((int)piVar8 + 0x27) = (char)param_5;
    *(byte *)(piVar8[2] + 0x44) = param_5 == 0 | *(byte *)(piVar8[2] + 0x44) & 0xfe;
    *(byte *)(piVar8[1] + 0x44) = *(byte *)((int)piVar8 + 0x27) | *(byte *)(piVar8[1] + 0x44) & 0xfe
    ;
    if (*(char *)((int)piVar8 + 0x27) == '\0') {
      fn_00689080(piVar8[5]);
      fn_00689080(piVar8[8]);
    }
    else {
      fn_00688fd8();
      fn_00688fd8(piVar8[8]);
    }
    *(byte *)(piVar8[3] + 0x44) = *(byte *)(piVar8[3] + 0x44) & 0xfe;
    bVar7 = *(byte *)(piVar8[4] + 0x44) & 0xfe;
    if (param_2 == 0) {
      bVar7 = bVar7 | 1;
    }
    *(byte *)(piVar8[4] + 0x44) = bVar7;
    if (param_2 == 0) {
      *(undefined1 *)((int)piVar8 + 0x26) = 1;
    }
    else {
      *(undefined1 *)((int)piVar8 + 0x26) = 0;
    }
  }
  return;
}


