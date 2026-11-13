#include "0026c6dc_0026d0a0.h"



void fn_0026d0a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  DAT_008924e8 = 0;
  iVar5 = 0;
  DAT_008924f0 = 0;
  do {
    uVar4 = (&DAT_008c9634)[iVar5 * 3];
    uVar3 = (&DAT_008c9638)[iVar5 * 3];
    if (uVar4 != uVar3) {
      uVar1 = uVar4;
      if (uVar3 <= uVar4) {
        do {
          uVar1 = uVar1 + 0x1c;
        } while (uVar1 != uVar3);
      }
      iVar2 = (int)((longlong)(int)(uVar3 - uVar4) * -0x6db6db6d +
                    ((ulonglong)(uVar3 - uVar4) << 0x20) >> 0x20);
      (&DAT_008c9638)[iVar5 * 3] = uVar3 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}



void fn_0026d004(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  DAT_008924ec = 0;
  iVar5 = 0;
  DAT_008924f4 = 0;
  do {
    uVar4 = (&DAT_008c964c)[iVar5 * 3];
    uVar3 = (&DAT_008c9650)[iVar5 * 3];
    if (uVar4 != uVar3) {
      uVar1 = uVar4;
      if (uVar3 <= uVar4) {
        do {
          uVar1 = uVar1 + 0x1c;
        } while (uVar1 != uVar3);
      }
      iVar2 = (int)((longlong)(int)(uVar3 - uVar4) * -0x6db6db6d +
                    ((ulonglong)(uVar3 - uVar4) << 0x20) >> 0x20);
      (&DAT_008c9650)[iVar5 * 3] = uVar3 + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return;
}



int fn_0026ced0(int param_1)

{
  short sVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_28 [2];
  
  param_1 = param_1 + -1;
  piVar8 = &DAT_008c964c + param_1 * 3;
  iVar5 = (int)((longlong)((&DAT_008c9650)[param_1 * 3] - *piVar8) * -0x6db6db6d +
                ((ulonglong)(uint)((&DAT_008c9650)[param_1 * 3] - *piVar8) << 0x20) >> 0x20);
  local_28[0] = (iVar5 >> 4) - (iVar5 >> 0x1f);
  local_28[1] = 0x20;
  puVar2 = local_28;
  if (local_28[0] < 0x20) {
    puVar2 = local_28 + 1;
  }
  uVar9 = *puVar2;
  puVar3 = (undefined4 *)fn_00100fc6(uVar9 * 0x1c,0);
  puVar7 = (undefined4 *)(&DAT_008c9650)[param_1 * 3];
  puVar4 = puVar3;
  for (puVar6 = (undefined4 *)*piVar8; puVar6 != puVar7; puVar6 = puVar6 + 7) {
    if (puVar4 != (undefined4 *)0x0) {
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      uVar13 = puVar6[4];
      uVar14 = puVar6[5];
      uVar15 = puVar6[6];
      *puVar4 = *puVar6;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4[4] = uVar13;
      puVar4[5] = uVar14;
      puVar4[6] = uVar15;
    }
    puVar4 = puVar4 + 7;
  }
  iVar5 = (int)((longlong)((&DAT_008c9650)[param_1 * 3] - *piVar8) * -0x6db6db6d +
                ((ulonglong)(uint)((&DAT_008c9650)[param_1 * 3] - *piVar8) << 0x20) >> 0x20);
  uVar9 = uVar9 * 0x1c;
  puVar4 = puVar3 + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * 7;
  iVar5 = (int)((longlong)((int)puVar4 - (int)puVar3) * -0x6db6db6d +
                ((ulonglong)(uint)((int)puVar4 - (int)puVar3) << 0x20) >> 0x20);
  sVar1 = fn_00163868((iVar5 >> 4) - (iVar5 >> 0x1f));
  puVar6 = puVar3;
  if (puVar4 < puVar3) {
    do {
      puVar6 = puVar6 + 7;
    } while (puVar6 != puVar4);
  }
  iVar5 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
  fn_001008c4(puVar3,(iVar5 >> 4) - (iVar5 >> 0x1f),0);
  return (int)sVar1;
}



undefined4 fn_0026ce34(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0026cec0,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 0x1c;
  iVar3 = 0;
  uVar2 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar3 != 0) {
    param_1 = 0;
  }
  (&DAT_008924e8)[param_5] = param_1;
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    uVar2 = 0;
  }
  (&DAT_008924f0)[param_5] = uVar2;
  return 1;
}



void fn_0026cdec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 < 1) {
    return;
  }
  iVar3 = DAT_008924bc + param_1 * 6;
  do {
    iVar1 = iVar4 * 2;
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(param_2 + iVar2) = *(undefined2 *)(iVar3 + iVar1 + 2);
  } while (iVar4 < param_3);
  return;
}



int fn_0026cdd0(int param_1)

{
  return (int)*(short *)(DAT_008924bc + param_1 * 6);
}



void fn_0026cdb8(void)

{
  DAT_008924bc = 0;
  DAT_008924c0 = 0;
  return;
}



int fn_0026cda4(void)

{
  return (int)(short)DAT_008924c0;
}



int * fn_0026c6dc(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_1 = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0023e8ec(iVar1,4);
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  *(int *)(param_1[1] + 4) = *param_1;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0026ca90);
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[2] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0026ca90);
  }
  piVar4 = (int *)param_1[3];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[3] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0026ca90);
  }
  piVar4 = (int *)param_1[4];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[4] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0026ca90);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[5] = (int)piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[6];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[6] = (int)piVar2;
  }
  fn_0011050c(param_1[6],param_1[2],param_1[3]);
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar4 = (int *)param_1[7];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[7] = (int)piVar2;
  }
  fn_0011050c(param_1[7],param_1[4],param_1[5]);
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003789ec(iVar1,0);
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    param_1[8] = (int)piVar2;
  }
  *(int *)(param_1[8] + 8) = param_1[6];
  *(int *)(param_1[8] + 0xc) = param_1[7];
  *(int *)(param_1[8] + 0x10) = *param_1;
  *(int *)(param_1[8] + 0x14) = param_1[1];
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00378a8c(iVar1,param_1[8]);
  }
  piVar4 = (int *)param_1[9];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[9] = (int)piVar2;
  }
  iVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1[1] + 0x3c);
  uVar3 = fn_00129004();
  fn_002419f4(uVar3,iVar1,uVar5);
  iVar1 = param_1[2];
  iVar6 = param_1[3];
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,iVar1,iVar6);
  iVar1 = param_1[4];
  iVar6 = param_1[5];
  uVar3 = fn_00129004();
  fn_00241948(uVar3,iVar1,iVar6);
  fn_002cd71c();
  fn_00121838(DAT_00897800,DAT_00898250,1);
  return param_1;
}


