#include "006e810c_006e8654.h"



void fn_006e8654(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  
  if (*(uint *)(*param_2 + -8) < 0x200) {
    uVar1 = *(uint *)(*param_2 + -4);
    uVar9 = 0x200;
    if (uVar1 < 0x201) {
      uVar9 = uVar1;
    }
    if (0x200 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0x200);
    }
    puVar2 = (undefined4 *)fn_00100fc6(0x410,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    puVar2[2] = uVar9;
    puVar6 = (undefined2 *)((int)puVar2 + uVar9 * 2 + 0xc);
    puVar2[1] = 0x200;
    *puVar2 = 0;
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
    }
    fn_00301a9c(puVar2 + 3,*param_2,*(int *)(*param_2 + -4) << 1);
    if ((undefined4 *)*param_2 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*param_2 + -3;
      iVar7 = *piVar3;
      if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
        fn_001008c4(*param_2 + -0xc,*(int *)(*param_2 + -8) + 8,0);
      }
    }
    *param_2 = (int)(puVar2 + 3);
  }
  piVar8 = (int *)*param_1;
  iVar7 = *piVar8;
  piVar3 = (int *)(iVar7 + -0xc);
  if (*piVar3 == -1) {
    if (param_2 != piVar8) {
      fn_00177c88(param_2,0,*(undefined4 *)(*param_2 + -4),iVar7,*(undefined4 *)(iVar7 + -4),0,
                   *(undefined4 *)(iVar7 + -4));
    }
  }
  else {
    if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = *piVar3 + 1;
    }
    if ((undefined4 *)*param_2 != &DAT_008f9cf4) {
      piVar3 = (undefined4 *)*param_2 + -3;
      iVar7 = *piVar3;
      if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
        fn_001008c4(*param_2 + -0xc,*(int *)(*param_2 + -8) + 8,0);
      }
    }
    *param_2 = *piVar8;
  }
  uVar9 = 0;
  if ((int)(param_1[3] - param_1[2]) >> 1 != 0) {
    do {
      uVar4 = fn_0016a82c((int)*(short *)(param_1[2] + uVar9 * 2));
      uVar10 = *(undefined4 *)(*param_2 + -4);
      uVar5 = fn_00100b58();
      fn_00177c88(param_2,uVar10,0,uVar4,uVar5,0,uVar5);
      if (uVar9 != ((int)(param_1[3] - param_1[2]) >> 1) - 1U) {
        uVar5 = *(undefined4 *)(*param_2 + -4);
        uVar4 = fn_00100b58(&LAB_006e88c0);
        fn_00177c88(param_2,uVar5,0,&LAB_006e88c0,uVar4,0,uVar4);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((int)(param_1[3] - param_1[2]) >> 1));
  }
  return;
}



void fn_006e8554(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 local_24 [2];
  
  puVar1 = (undefined1 *)fn_00101a1c(local_24,&LAB_005df110,1,4);
  *(undefined4 *)(puVar1 + -0xc) = 0xffffffff;
  *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  cVar4 = '\x10';
  puVar1[3] = 0;
  iVar5 = 0;
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar3 = fn_006f447c(iVar2 + cVar4 * 0x418 + -0x4080);
    iVar2 = iVar5;
    if (iVar3 != 0) {
      iVar2 = iVar5 + 1;
      *(char *)((int)local_24 + iVar5) = cVar4;
    }
    cVar4 = cVar4 + '\x01';
    iVar5 = iVar2;
  } while (cVar4 < '\x14');
  *param_1 = 0;
  param_1[1] = iVar2 + -1;
  param_1[2] = iVar2;
  param_1[3] = local_24[0];
  return;
}



undefined4
fn_006e836c(int *param_1,undefined1 *param_2,char *param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = param_1[1];
  uVar5 = (uint)(char)(*(char *)((int)param_1 + *param_1 + 0xc) + -0x10);
  uVar4 = param_6[1] - *param_6 >> 2;
  if (uVar4 <= uVar5) {
    fn_002ff628(9,&DAT_008c7609,&DAT_008c7609,uVar5,uVar4);
  }
  iVar1 = fn_006e7420(*(undefined4 *)(*param_6 + uVar5 * 4));
  fVar10 = *(float *)(iVar1 + 4);
  uVar5 = (uint)(char)(*(char *)((int)param_1 + iVar3 + 0xc) + -0x10);
  uVar4 = param_6[1] - *param_6 >> 2;
  if (uVar4 <= uVar5) {
    fn_002ff628(9,&DAT_008c7609,&DAT_008c7609,uVar5,uVar4);
  }
  iVar3 = fn_006e7420(*(undefined4 *)(*param_6 + uVar5 * 4));
  fVar9 = *(float *)(iVar3 + 4);
  uVar5 = param_5 + (char)(*param_3 + -0x14);
  uVar4 = param_6[1] - *param_6 >> 2;
  if (uVar4 <= uVar5) {
    fn_002ff628(9,&DAT_008c7609,&DAT_008c7609,uVar5,uVar4);
  }
  iVar3 = fn_006e7420(*(undefined4 *)(*param_6 + uVar5 * 4));
  uVar4 = param_1[2];
  uVar6 = 1;
  fVar8 = *(float *)(iVar3 + 4) - 20.0;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4 & 1;
    iVar3 = 0;
    if (uVar5 != 0) {
      do {
        if (*(char *)((int)param_1 + iVar3 + 0xc) + -0x10 == param_4) goto LAB_006e8504;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar5);
    }
  }
  for (; (int)uVar5 < (int)uVar4; uVar5 = uVar5 + 2) {
    if ((*(char *)((int)param_1 + uVar5 + 0xc) + -0x10 == param_4) ||
       (*(char *)((int)param_1 + uVar5 + 0xd) + -0x10 == param_4)) goto LAB_006e8504;
  }
  uVar6 = 0;
LAB_006e8504:
  bVar7 = NAN(fVar8) || NAN(fVar10);
  *param_2 = uVar6;
  if (fVar8 >= fVar10) {
    bVar7 = NAN(fVar9) || NAN(fVar8);
  }
  if ((fVar8 < fVar10 || fVar9 < fVar8) == bVar7) {
    uVar2 = 8;
  }
  else if (fVar10 <= fVar8) {
    uVar2 = 10;
  }
  else if (fVar8 <= fVar9) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 9;
  }
  return uVar2;
}



undefined1 fn_006e8314(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      if (param_4 != 0) {
        if (param_4 == 1) {
          uVar1 = 3;
        }
        else {
          uVar1 = 5;
        }
        return uVar1;
      }
      uVar1 = 4;
    }
    else {
      if (param_4 != 0) {
        uVar1 = 0;
        if (param_4 != 1) {
          uVar1 = 2;
        }
        return uVar1;
      }
      uVar1 = 1;
    }
  }
  else if (param_4 == 0) {
    uVar1 = 7;
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}



int fn_006e82d4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    piVar2 = (int *)fn_0013d4ec();
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    if (*piVar2 != *(int *)(param_1 + iVar1 + 0xc)) {
      iVar4 = iVar4 + 1;
    }
  } while (iVar3 < 8);
  return iVar4;
}



int fn_006e8248(int param_1)

{
  return (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0xa88;
}



int fn_006e8230(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) + param_2 * 0xa88;
}



int fn_006e81e8(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 8;
}



int fn_006e8194(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3 != 0) {
    do {
      iVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      if (*(int *)(*(int *)(param_1 + 0xc) + iVar1) != 0) {
        iVar2 = iVar2 + 1;
      }
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3));
  }
  return iVar2;
}



int fn_006e8118(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
}



int fn_006e810c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 4;
}


