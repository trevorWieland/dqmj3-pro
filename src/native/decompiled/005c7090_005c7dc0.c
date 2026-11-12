#include "005c7090_005c7dc0.h"



int fn_005c7dc0(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 8);
  if ((*puVar1 & 0xfffffffe) != 0) {
    if ((*puVar1 & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(*puVar1 & 0xfffffffe);
    *puVar1 = 0;
  }
  return param_1;
}



int * fn_005c7b2c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  fn_0054ce20(param_1,param_2 + 0x20);
  fn_0054c548(param_1,(int)param_2 + 0x99);
  bVar4 = *(byte *)(param_2 + 0x11) & 2;
  if ((*(byte *)(param_2 + 0x11) & 2) != 0) {
    bVar4 = 1;
  }
  bVar4 = bVar4 << 1 | *(byte *)(param_1 + 0x11) & 0xfd;
  *(byte *)(param_1 + 0x11) = bVar4;
  *(byte *)(param_1 + 0x11) = bVar4 & 0xeb | ((*(byte *)(param_2 + 0x11) & 4) != 0) << 2 | 0x10;
  iVar3 = param_2[8];
  iVar5 = param_2[9];
  param_1[7] = param_2[7];
  param_1[8] = iVar3;
  param_1[9] = iVar5;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  iVar3 = param_2[0xb];
  iVar5 = param_2[0xc];
  param_1[10] = param_2[10];
  param_1[0xb] = iVar3;
  param_1[0xc] = iVar5;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  iVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = iVar3;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  iVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = iVar3;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  bVar4 = *(byte *)((int)param_1 + 0x47);
  bVar2 = *(byte *)((int)param_2 + 0x47) & 3;
  *(byte *)((int)param_1 + 0x47) = bVar4 & 0xfc | bVar2;
  *(byte *)((int)param_1 + 0x47) = bVar4 & 0xf0 | bVar2 | *(byte *)((int)param_2 + 0x47) & 0xc;
  if ((*(byte *)(param_1 + 0x11) & 0x20) != 0) {
    param_1[0x1e] = param_2[0x1e];
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xdf | 0x20;
  }
  if ((*(byte *)(param_1 + 0x11) & 0x40) != 0) {
    iVar3 = param_2[0x13];
    iVar5 = param_2[0x14];
    iVar7 = param_2[0x15];
    iVar8 = param_2[0x16];
    iVar9 = param_2[0x17];
    iVar10 = param_2[0x18];
    iVar11 = param_2[0x19];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = iVar3;
    param_1[0x14] = iVar5;
    param_1[0x15] = iVar7;
    param_1[0x16] = iVar8;
    param_1[0x17] = iVar9;
    param_1[0x18] = iVar10;
    param_1[0x19] = iVar11;
    iVar3 = param_2[0x1b];
    iVar5 = param_2[0x1c];
    iVar7 = param_2[0x1d];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = iVar3;
    param_1[0x1c] = iVar5;
    param_1[0x1d] = iVar7;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xbf | 0x40;
  }
  uVar6 = 0;
  do {
    (**(code **)(*param_2 + 0xc))(&uStack_18,param_2,uVar6);
    (**(code **)(*param_1 + 0x10))(param_1,uVar6,&uStack_18);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  iVar5 = 10;
  *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)((int)param_2 + 0x45);
  *(undefined1 *)((int)param_1 + 0x46) = *(undefined1 *)((int)param_2 + 0x46);
  iVar3 = 0;
  do {
    iVar5 = iVar5 + -1;
    param_1[iVar3 + 7] = param_2[iVar3 + 7];
    iVar3 = iVar3 + 1;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  } while (iVar5 != 0);
  uVar6 = 0;
  do {
    uVar1 = (**(code **)(*param_2 + 0x14))(param_2,uVar6);
    (**(code **)(*param_1 + 0x18))(param_1,uVar6,uVar1);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x11);
  uVar6 = 0;
  do {
    uVar1 = (**(code **)(*param_2 + 0x1c))(param_2,uVar6);
    (**(code **)(*param_1 + 0x20))(param_1,uVar6,uVar1);
    uVar6 = uVar6 + 1;
    if (0x10 < uVar6) break;
  } while (uVar6 != 0x10);
  bVar4 = *(byte *)(param_2 + 0x11) & 1;
  if ((*(byte *)(param_2 + 0x11) & 1) != 0) {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x11) = bVar4 | *(byte *)(param_1 + 0x11) & 0xfe;
  return param_1;
}



void fn_005c77b8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if ((*(int *)(param_1 + 0x148) < 7) ||
     ((*(int *)(param_1 + 0x148) == 7 &&
      (iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x130)), iVar1 == 0)))) {
    puVar2 = &DAT_005c74fc;
  }
  else {
    fn_00203c84(*(undefined2 *)(*(int *)(param_1 + 0x118) + 0x100));
    fn_00203bb4();
    puVar2 = (undefined *)fn_0022f750();
  }
  fn_0015b0dc(puVar2);
  fn_005fc5c8(param_1);
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c7850,1,1,1,0);
  return;
}



void fn_005c72d8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  fn_005fc69c();
  if ((*(int *)(param_1 + 0x148) < 7) ||
     ((*(int *)(param_1 + 0x148) == 7 &&
      (iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x130)), iVar1 == 0)))) {
    puVar2 = &DAT_005c74fc;
  }
  else {
    fn_00203c84(*(undefined2 *)(*(int *)(param_1 + 0x118) + 0x100));
    fn_00203bb4();
    puVar2 = (undefined *)fn_0022f750();
  }
  fn_0015b0dc(puVar2);
  fn_005fc5c8(param_1);
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c7378,0,1,0,0);
  return;
}



void fn_005c71c0(int param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)fn_00203884();
  if (*puVar1 < 0x97) {
    fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c723c,1,1,1,0);
  }
  else {
    fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c7258,1,1,1,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0x13;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  return;
}



undefined4 fn_005c7090(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = param_1[0x52];
  if (iVar1 == 0x13) {
    iVar1 = param_1[0x50];
    param_1[0x50] = iVar1 + 1U;
    if ((uint)param_1[0x4e] < iVar1 + 1U) {
      (**(code **)(*param_1 + 0x1ec))(param_1);
      param_1[0x50] = 0;
    }
  }
  else {
    if (iVar1 == 0x14) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (iVar1 == 0x15) {
      iVar1 = fn_00269b38(DAT_00897818);
      if (iVar1 == 2) {
        fn_002d6810(param_1[0x5a]);
        *(undefined1 *)((int)param_1 + 0x136) = 1;
        param_1[0x52] = 0xc;
      }
      else {
        fn_00269864(DAT_00897818);
      }
    }
    else {
      uVar2 = fn_005962dc(param_1);
    }
  }
  return uVar2;
}


