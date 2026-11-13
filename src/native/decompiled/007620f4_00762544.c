#include "007620f4_00762544.h"



undefined4 fn_00762544(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  undefined4 *puVar8;
  bool bVar9;
  int *piVar10;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined1 auStack_5c8 [96];
  undefined1 auStack_568 [1352];
  
  bVar9 = false;
  puVar8 = (undefined4 *)param_1[6];
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008964a0) goto LAB_00762594;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00762594:
  param_1[0x44] = (int)puVar8;
  (**(code **)(*param_1 + 0x1d4))(param_1);
  puVar8 = (undefined4 *)0x0;
  bVar7 = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  do {
    iVar2 = fn_005db460(param_1[0x44],bVar7);
    if (iVar2 != 0) {
      *(byte *)((int)param_1 + *(byte *)(param_1 + 0x3e) + 0xf9) = bVar7;
      *(char *)(param_1 + 0x3e) = (char)param_1[0x3e] + '\x01';
      if (bVar7 == 7) {
        *(undefined1 *)(param_1 + 0x4d) = 1;
      }
      else if (bVar7 == 4) {
        bVar9 = true;
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 < 8);
  uVar3 = fn_0043d3a0(param_1);
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_008964f4) goto LAB_00762654;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00762654:
  param_1[0x47] = (int)puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_00896444) goto LAB_00762698;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00762698:
  param_1[0x45] = (int)puVar1;
  *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_008963ac) goto LAB_007626e0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_007626e0:
  param_1[0x48] = (int)puVar1;
  fn_0040f564(puVar1[0xf],0);
  puVar1 = *(undefined4 **)(*(int *)(param_1[0x48] + 0x3c) + 8);
  if (bVar9) {
    *(undefined1 *)puVar1 = 6;
    iVar2 = fn_0023c2a8();
    fn_0020bfc0(auStack_5c8);
    fn_0023cff0(iVar2 + 0x30,auStack_5c8);
    fn_0037cb88(puVar1,auStack_568);
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar4 = (undefined4 *)fn_005f62c0();
    puVar4[8] = &DAT_00859420;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *puVar4 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar4 + 0x10);
    piVar10 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskEndMatchmake_008c6e09);
    *piVar10 = (int)&DAT_00859e00;
    fn_00673818(piVar10);
  }
  piVar5 = (int *)param_1[0x4a];
  if (piVar5 != piVar10) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    param_1[0x4a] = (int)piVar10;
  }
  iVar2 = fn_00145b00(0x60,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    local_5e0 = *puVar1;
    local_5dc = puVar1[1];
    local_5d8 = puVar1[2];
    local_5d4 = puVar1[3];
    local_5d0 = puVar1[4];
    local_5cc = *(undefined2 *)(puVar1 + 5);
    piVar10 = (int *)fn_002cd364(iVar2,&local_5e0);
  }
  piVar5 = (int *)param_1[0x4b];
  if (piVar5 != piVar10) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    param_1[0x4b] = (int)piVar10;
  }
  iVar6 = fn_00145b00(0x78c8,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar6 != 0) {
    iVar2 = fn_00251e64(iVar6,*(undefined4 *)(*(int *)(param_1[0x48] + 0x3c) + 4),
                         *(undefined4 *)(param_1[0x44] + 0x10));
  }
  iVar6 = param_1[0x4c];
  if (iVar6 != iVar2) {
    if (iVar6 != 0) {
      fn_00251ec8(iVar6);
      fn_002feef8();
    }
    param_1[0x4c] = iVar2;
  }
  iVar2 = fn_006c41e4(puVar1);
  if (iVar2 == 2) {
    iVar2 = 0x3a;
    iVar6 = 0x3d;
  }
  else {
    iVar2 = 0x39;
    iVar6 = 0x3c;
  }
  param_1[0x3d] = iVar2;
  param_1[0x3c] = iVar6;
  if (*(char *)(param_1[0x44] + 0x8ed) != '\0') {
    puVar1 = (undefined4 *)fn_001f74d8(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar4 == &DAT_00894d28) {
          puVar8 = puVar1;
          break;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    param_1[0x46] = (int)puVar8;
  }
  fn_00689efc(param_1,param_1[0x3d],0);
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  return uVar3;
}



void fn_0076252c(int param_1)

{
  *(undefined4 *)(param_1 + 0x104) = 7;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 * fn_007623dc(int param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (((DAT_008c64d8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c64d8), iVar3 != 0)) {
    DAT_008c6554 = *(undefined4 *)(param_1 + 0xd0);
  }
  if (0 < (int)(*(byte *)(param_1 + 0xf8) - 1)) {
    pbVar6 = (byte *)(param_1 + 0xf8);
    puVar7 = (undefined4 *)0x8f9f60;
    puVar4 = (undefined4 *)0x8f9f58;
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      pbVar6 = (byte *)(param_1 + 0xf9);
      iVar3 = (uint)*pbVar6 * 0x10;
      DAT_008f9f68 = *(undefined4 *)(&DAT_008c64dc + iVar3);
      DAT_008f9f6c = *(undefined4 *)(&DAT_008c64e0 + iVar3);
      DAT_008f9f70 = *(undefined4 *)(&DAT_008c64e4 + iVar3);
      DAT_008f9f74 = *(undefined4 *)(&DAT_008c64e8 + iVar3);
      if (*pbVar6 == 7) {
        DAT_008f9f70 = *(undefined4 *)(param_1 + 0xd0);
      }
      puVar7 = &DAT_008f9f70;
      puVar4 = &DAT_008f9f68;
    }
    bVar2 = pbVar6[1];
    for (iVar3 = (int)(*(byte *)(param_1 + 0xf8) - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      iVar1 = (uint)bVar2 * 0x10;
      uVar5 = (uint)pbVar6[2];
      uVar8 = *(undefined4 *)(&DAT_008c64e0 + iVar1);
      uVar9 = *(undefined4 *)(&DAT_008c64e4 + iVar1);
      uVar10 = *(undefined4 *)(&DAT_008c64e8 + iVar1);
      puVar4[4] = *(undefined4 *)(&DAT_008c64dc + iVar1);
      puVar4[5] = uVar8;
      puVar4[6] = uVar9;
      puVar4[7] = uVar10;
      iVar1 = uVar5 * 0x10;
      if (bVar2 == 7) {
        puVar7[4] = *(undefined4 *)(param_1 + 0xd0);
      }
      bVar2 = pbVar6[3];
      uVar8 = *(undefined4 *)(&DAT_008c64e0 + iVar1);
      uVar9 = *(undefined4 *)(&DAT_008c64e4 + iVar1);
      uVar10 = *(undefined4 *)(&DAT_008c64e8 + iVar1);
      puVar4[8] = *(undefined4 *)(&DAT_008c64dc + iVar1);
      puVar4[9] = uVar8;
      puVar4[10] = uVar9;
      puVar4[0xb] = uVar10;
      if (uVar5 == 7) {
        puVar7[8] = *(undefined4 *)(param_1 + 0xd0);
      }
      puVar7 = puVar7 + 8;
      puVar4 = puVar4 + 8;
      pbVar6 = pbVar6 + 2;
    }
  }
  iVar3 = *(byte *)(param_1 + 0xf8) - 1;
  if (-1 < iVar3) {
    iVar1 = (uint)*(byte *)(param_1 + iVar3 + 0xf9) * 0x10;
    uVar8 = *(undefined4 *)(&DAT_008c64e0 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_008c64e4 + iVar1);
    uVar10 = *(undefined4 *)(&DAT_008c64e8 + iVar1);
    (&DAT_008f9f68)[iVar3 * 4] = *(undefined4 *)(&DAT_008c64dc + iVar1);
    (&DAT_008f9f6c)[iVar3 * 4] = uVar8;
    (&DAT_008f9f70)[iVar3 * 4] = uVar9;
    (&DAT_008f9f74)[iVar3 * 4] = uVar10;
    if (*(char *)(param_1 + iVar3 + 0xf9) == '\a') {
      (&DAT_008f9f70)[iVar3 * 4] = *(undefined4 *)(param_1 + 0xd0);
    }
  }
  *param_2 = (uint)*(byte *)(param_1 + 0xf8);
  return &DAT_008f9f68;
}



void fn_0076236c(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    fn_00251ec8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(int **)(param_1 + 300) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 300) + 4))();
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 4))();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  fn_00749100(param_1);
  return;
}



undefined4 fn_00762308(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x200000) != 0)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_007622a4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x100000) != 0)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_0076222c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x20000) != 0)) {
      return 1;
    }
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xa8))();
  if (iVar1 < 0) {
    return 0;
  }
  return 1;
}



void fn_007620f4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043ccf8();
  puVar1[0x39] = 0;
  puVar1[0x35] = 0x39;
  puVar1[0x34] = 0x3c;
  *puVar1 = &PTR_LAB_008440c0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  *(undefined1 *)(puVar1 + 0x45) = 0;
  *(undefined1 *)((int)puVar1 + 0x115) = 0;
  *(undefined1 *)((int)puVar1 + 0x116) = 1;
  return;
}


