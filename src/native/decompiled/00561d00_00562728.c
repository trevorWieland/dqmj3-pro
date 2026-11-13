#include "00561d00_00562728.h"



void fn_00562728(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00563ecc(iVar1,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00562518) */

void fn_005624c8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 **local_38;
  undefined2 local_34 [4];
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  fn_005970a8(*(undefined4 *)(param_1 + 0x8c));
  iVar7 = **(int **)(DAT_00897840 + 0x30);
  uVar6 = 0;
  if (0 < iVar7) {
    do {
      local_34[0] = 0;
      local_40 = &DAT_008f9cf4;
      fn_00177c88(&local_40,0,DAT_008f9cf0,local_34,0,0,0);
      local_3c = 0;
      local_3b = 0;
      local_3a = 0;
      local_39 = 0;
      piVar5 = (int *)(*(int *)(DAT_00897840 + 0x30) + 4);
      uVar1 = *(int *)(*(int *)(DAT_00897840 + 0x30) + 8) - *piVar5 >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar6,uVar1);
      }
      uVar8 = *(undefined4 *)(*piVar5 + uVar6 * 4);
      iVar2 = fn_002043cc(DAT_00897840,uVar8);
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
      local_38 = &local_40;
      iVar4 = fn_00100b58();
      if (iVar4 == 0) {
        piVar5 = local_40 + -3;
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          local_40[-1] = 0;
          *(undefined2 *)local_40 = 0;
        }
        else {
          if ((local_40 != &DAT_008f9cf4) &&
             ((iVar4 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))))) {
            fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
          }
          local_40 = &DAT_008f9cf4;
        }
      }
      else {
        fn_00177c88(local_38,0,local_40[-1],uVar3,iVar4,0,iVar4);
      }
      local_3c = *(undefined1 *)(iVar2 + 0x798);
      local_3b = *(undefined1 *)(iVar2 + 0x1082);
      local_3a = fn_006e67bc(*(undefined4 *)(DAT_00897840 + 0x2c),(int)(char)uVar8);
      fn_00596c68(*(undefined4 *)(param_1 + 0x8c),&local_40);
      if (local_40 != &DAT_008f9cf4) {
        piVar5 = local_40 + -3;
        iVar2 = *piVar5;
        if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar7);
  }
  *(char *)(*(int *)(param_1 + 0x8c) + 0x16) = (char)local_28;
  *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x14) = 1;
  fn_0069e82c(param_1,0x1000194);
  fn_00689930(param_1,0x100,0);
  return;
}



void fn_005623f4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)
           fn_003a2914(*(int *)(param_1 + 0x90),*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x20));
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  iVar2 = fn_002043cc(DAT_00897840,uVar4);
  iVar6 = *(int *)(iVar2 + 4);
  iVar2 = fn_00204404(DAT_00897840);
  if (iVar6 == *(int *)(iVar2 + 4)) {
  }
  else {
    iVar2 = fn_002043cc(DAT_00897840,uVar5);
    iVar6 = *(int *)(iVar2 + 4);
    iVar2 = fn_00204404(DAT_00897840);
    uVar5 = 0;
    if (iVar6 == *(int *)(iVar2 + 4)) {
      uVar5 = uVar4;
    }
  }
  if (param_2 == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 5;
  }
  **(undefined1 **)(*(int *)(*(int *)(param_1 + 0x70) + 0x3c) + 8) = uVar3;
  if (param_2 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 5;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x70) + 0x3c);
  fn_002529b4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
               (int)*(char *)(*(int *)(param_1 + 0x74) + 4),uVar5,uVar4,0,0xfc);
  return;
}



void fn_00562104(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)
           fn_003a2914(*(int *)(param_1 + 0x90),*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x20));
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  iVar2 = fn_002043cc(DAT_00897840,uVar4);
  if (*(char *)(iVar2 + 0x10) == '\x02') {
    uVar5 = uVar4;
    uVar4 = uVar6;
  }
  else {
    uVar5 = uVar6;
  }
  if (param_2 == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 5;
  }
  **(undefined1 **)(*(int *)(*(int *)(param_1 + 0x70) + 0x3c) + 8) = uVar3;
  iVar2 = *(int *)(*(int *)(param_1 + 0x70) + 0x3c);
  fn_002529b4(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),uVar4,uVar5,3,1,0xfc);
  return;
}



void fn_005620b8(int param_1)

{
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x84) + 4))();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 4))();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}



void fn_00562078(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(DAT_00897840 + 4) & 1;
  if ((*(byte *)(DAT_00897840 + 4) & 1) != 0) {
    bVar1 = 1;
  }
  *param_1 = bVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00562008) */

undefined4 fn_00561fe4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = fn_002043cc(DAT_00897840,(int)(char)((char)iVar3 * '\x02' + '\x01'));
    iVar3 = iVar3 + 1;
    if (iVar2 < *(int *)(iVar1 + 0x798)) {
      iVar2 = *(int *)(iVar1 + 0x798);
    }
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    iVar1 = fn_002043cc(DAT_00897840,(int)(char)((char)iVar3 * '\x02' + '\x01'));
    if (iVar2 == *(int *)(iVar1 + 0x798)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return *(undefined4 *)(param_1 + 8);
}



/* WARNING: Removing unreachable block (ram,0x00561f78) */

undefined4 fn_00561f50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = fn_002043cc(DAT_00897840,(int)(char)((char)iVar3 << 1));
    iVar3 = iVar3 + 1;
    if (iVar2 < *(int *)(iVar1 + 0x798)) {
      iVar2 = *(int *)(iVar1 + 0x798);
    }
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    iVar1 = fn_002043cc(DAT_00897840,(int)(char)(iVar3 << 1));
    if (iVar2 == *(int *)(iVar1 + 0x798)) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return *(undefined4 *)(param_1 + 4);
}



void fn_00561f24(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  *puVar1 = &DAT_0083f458;
  return;
}



void fn_00561d00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined1 local_24 [8];
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_003ed4ac(param_1);
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4);
    iVar1 = piVar7[2];
    if (*(int *)(param_1 + 4) == 2) {
      fn_00444134(local_24);
      local_24[0] = 1;
      fn_003dcccc(iVar1,local_24,1);
      iVar2 = fn_00443e84(piVar7,1);
      if (iVar2 != 0) {
        bVar8 = true;
        iVar2 = 0;
        do {
          iVar5 = fn_006ce63c(piVar7,iVar2);
          if (iVar5 != 0) {
            pcVar6 = (char *)fn_006cb178(iVar1,iVar2);
            bVar8 = (bool)(bVar8 & *pcVar6 == '\x01');
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 8);
        if (bVar8) {
          if (*(char *)(DAT_00898840 + 0x4d) != '\0') {
            local_30[0] = fn_00615e64();
            fn_003dccb4(iVar1,local_30,2);
          }
          *(undefined4 *)(param_1 + 4) = 3;
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 4) == 3) {
      if (*(char *)(DAT_00897850 + 0x4d) == '\0') {
        uVar3 = (**(code **)(*piVar7 + 4))(piVar7);
        iVar2 = fn_006b6530(iVar1,2,uVar3);
        if (iVar2 != 0) {
          puVar4 = (undefined4 *)fn_006cb164(iVar1,uVar3);
          local_28 = *puVar4;
          fn_003dccb4(iVar1,&local_28,2);
        }
        iVar2 = fn_00252280(piVar7,2,0);
        if (iVar2 == 0) {
          return;
        }
      }
      else {
        iVar2 = fn_00252280(piVar7,2,1);
        if (iVar2 == 0) {
          return;
        }
        uVar3 = (**(code **)*piVar7)(piVar7);
        iVar2 = fn_006cb150(iVar1,uVar3);
        if (iVar2 != 2) {
          return;
        }
      }
      uVar3 = (**(code **)*piVar7)(piVar7);
      puVar4 = (undefined4 *)fn_006cb164(iVar1,uVar3);
      fn_00615ecc(*puVar4);
      *(undefined4 *)(param_1 + 4) = 999;
    }
  }
  return;
}


