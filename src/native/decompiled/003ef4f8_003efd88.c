#include "003ef4f8_003efd88.h"



void fn_003efd88(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0;
  do {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0017d96c(&local_40,0x20,0x1f,(char *)&DAT_003efe4c,uVar1);
    piVar2 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,&local_40,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a92c) goto LAB_003efe24;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_003efe24:
    *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
    uVar1 = uVar1 + 1;
    if (9 < uVar1) {
      return;
    }
  } while( true );
}



void fn_003efba0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  *(int *)(param_1 + 100) = param_2;
  piVar2 = *(int **)(param_2 + 0x10);
  uVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_0085e0a8,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_0085e0b4,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  piVar2 = (int *)fn_0017dd54(*(undefined4 *)(param_1 + 100),DAT_00890934,0);
  *(int **)(param_1 + 0x80) = piVar2;
  iVar3 = *(int *)(param_1 + 0x68);
  (**(code **)(*piVar2 + 0x54))();
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  piVar2 = (int *)fn_0017dd54(*(undefined4 *)(param_1 + 100),DAT_00890938,0);
  *(int **)(param_1 + 0x84) = piVar2;
  iVar3 = *(int *)(param_1 + 0x6c);
  (**(code **)(*piVar2 + 0x54))();
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  return;
}



undefined4 * fn_003efaa8(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)fn_0068ab5c(iVar2,param_1);
  *puVar3 = &DAT_008346a4;
  puVar3[0x19] = 0;
  puVar3[0x1c] = &DAT_00859320;
  *(undefined1 *)(puVar3 + 0x1d) = 0;
  *(undefined1 *)((int)puVar3 + 0x75) = 0;
  *(undefined1 *)((int)puVar3 + 0x76) = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  *(undefined1 *)(puVar3 + 0x22) = 0;
  *(undefined1 *)((int)puVar3 + 0x89) = 0;
  iVar2 = fn_00182988(DAT_008977e4);
  if (((*(char *)(iVar2 + 0x3b5) != '\0') && (iVar2 = fn_00154ac8(0x12), iVar2 != 0)) &&
     (iVar2 = fn_00182988(DAT_008977e4), *(char *)(iVar2 + 0x39f) == '\0')) {
    uVar1 = fn_006b62e0(*(undefined4 *)(DAT_00897804 + 8));
    *(undefined1 *)((int)puVar3 + 0x76) = uVar1;
  }
  return puVar3;
}



void fn_003ef9fc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (cVar1 == '\x01') goto LAB_003efa20;
      if (cVar1 != '\x02') {
        return;
      }
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          return;
        }
        *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) & 0xfe | 1;
LAB_003efa20:
        *(byte *)(*(int *)(param_1 + 0x68) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe;
        return;
      }
      *(byte *)(*(int *)(param_1 + 0x68) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe | 1;
    }
  }
  else {
    if (cVar1 == '\x01') goto LAB_003efa20;
    if (cVar1 != '\x02') {
      return;
    }
  }
  *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) & 0xfe;
  return;
}



void fn_003ef9f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x76) = 1;
  return;
}



void fn_003ef8ec(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar2 + 0x3b5) == '\0') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 == '\0') {
    iVar2 = fn_00154ac8(0x12);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x76) = 1;
    }
  }
  else {
    if (cVar1 == '\x01') {
      iVar2 = fn_00154ac8(0x1d);
      if ((iVar2 != 0) && (iVar2 = fn_00182988(DAT_008977e4), *(char *)(iVar2 + 0x39f) == '\0')) {
        *(undefined1 *)(param_1 + 0x76) = 2;
        goto LAB_0025b434;
      }
    }
    else if (cVar1 != '\x02') goto LAB_0025b434;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(byte *)(*(int *)(param_1 + 0x68) + 0x44) = *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) =
         *(byte *)(param_1 + 0x88) | *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) & 0xfe;
    fn_001c2b7c(1);
  }
LAB_0025b434:
  *(undefined1 *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x260) =
       *(undefined1 *)(param_1 + 0x76);
  return;
}



void fn_003ef888(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_00834594;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)((int)puVar1 + 0x89) = 1;
  puVar1[0x23] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return;
}



void fn_003ef710(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar2 = fn_001924e0(uVar7,1);
  uVar5 = 0;
  do {
    iVar1 = fn_001828f0(param_2,(&DAT_008907c0)[uVar5]);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    iVar3 = fn_00145b00(0x90,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = fn_005a72bc(iVar3,param_2,uVar7,uVar2,uVar5 & 0xff);
    }
    uVar6 = uVar5 + 1;
    param_1[uVar5 + 0x1c] = iVar1;
    uVar5 = uVar6;
  } while ((int)uVar6 < 2);
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      iVar4 = fn_001828f0(param_2,(&DAT_008907d0)[iVar1 * 2 + iVar3]);
      param_1[iVar1 * 2 + iVar3 + 0x1e] = iVar4;
      iVar4 = fn_00182988(DAT_008977e4);
      if (*(char *)(iVar4 + 0x39d) == '\0') {
        *(byte *)(param_1[iVar1 * 2 + iVar3 + 0x1e] + 0x44) =
             *(byte *)(param_1[iVar1 * 2 + iVar3 + 0x1e] + 0x44) & 0xfe;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  iVar1 = fn_0017dd54(param_2,DAT_008907ac,0);
  param_1[0x19] = iVar1;
  iVar1 = fn_0017dd54(param_2,DAT_008907b0,0);
  param_1[0x1a] = iVar1;
  iVar1 = fn_0017dd54(param_2,DAT_008907b4,0);
  param_1[0x1b] = iVar1;
  iVar1 = fn_001828f0(param_2,DAT_008907b8);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  return;
}



void fn_003ef4f8(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0x88);
  uVar7 = 0;
  if (cVar1 == '\0') {
    iVar3 = 0;
    do {
      fn_005a71dc(*(undefined4 *)(param_1 + iVar3 * 4 + 0x70));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if (cVar1 == '\x01') {
    if ((*(float *)(*(int *)(param_1 + 0x68) + 0x24) == 0.0) &&
       (iVar3 = *(int *)(param_1 + 0x8c) + 1, *(int *)(param_1 + 0x8c) = iVar3, 0x1e < iVar3)) {
      *(undefined1 *)(param_1 + 0x88) = 2;
      fn_00190cdc(*(undefined4 *)(param_1 + 100),0);
      fn_00190cdc(*(undefined4 *)(param_1 + 0x68),0);
      fn_00190e00(*(undefined4 *)(param_1 + 0x6c));
    }
    uVar6 = (uint)*(float *)(*(int *)(param_1 + 0x68) + 0x10);
    bVar5 = uVar6 == 2;
    if (1 < (int)uVar6) {
      bVar5 = (uVar6 & 1) == 0;
    }
    if ((bVar5) && ((int)uVar6 / 2 < 7)) {
      iVar3 = 0;
      do {
        fn_005a70b4(*(undefined4 *)(param_1 + iVar3 * 4 + 0x70),6 - (int)uVar6 / 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
  }
  else if ((cVar1 == '\x02') && (*(float *)(*(int *)(param_1 + 0x6c) + 0x24) == 0.0)) {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  bVar4 = 1;
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39d) != '\0') {
    iVar3 = 0;
    do {
      bVar2 = fn_0017f170(*(undefined4 *)(param_1 + iVar3 * 4 + 0x70));
      iVar3 = iVar3 + 1;
      bVar4 = bVar4 & bVar2;
    } while (iVar3 < 2);
    if ((*(float *)(*(int *)(param_1 + 100) + 0x24) == (float)uVar7 & bVar4) == 0)
    goto LAB_003ef674;
  }
  if (*(char *)(*(int *)(param_1 + 100) + 0x14) != '\0') {
    fn_00190cdc(*(int *)(param_1 + 100),0);
  }
LAB_003ef674:
  bVar4 = 1;
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x39d) != '\0') {
    iVar3 = 0;
    do {
      bVar2 = fn_0017f170(*(undefined4 *)(param_1 + iVar3 * 4 + 0x70));
      iVar3 = iVar3 + 1;
      bVar4 = bVar4 & bVar2;
    } while (iVar3 < 2);
    if ((*(float *)(*(int *)(param_1 + 100) + 0x24) == (float)uVar7 & bVar4) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    iVar3 = 0;
    do {
      fn_005a7090(*(undefined4 *)(param_1 + iVar3 * 4 + 0x70));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    *(undefined1 *)(param_1 + 0x89) = 1;
  }
  return;
}


