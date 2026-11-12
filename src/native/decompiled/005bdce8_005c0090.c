#include "005bdce8_005c0090.h"



undefined4 fn_005c0090(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_90 [108];
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_005c00e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c00e4:
  puVar2 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar7 = puVar1[0x12];
    *puVar2 = uVar7;
    iVar3 = fn_00145b00(0x1c,&DAT_00812c8c);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = fn_003921f8(iVar3,uVar7,0xd2);
    }
    puVar2[1] = uVar4;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x15) = 0;
  }
  puVar1 = (undefined4 *)param_1[0x47];
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      iVar9 = puVar1[3];
      for (iVar3 = puVar1[2]; iVar3 != iVar9; iVar3 = iVar3 + 0x14) {
        fn_001588d4(iVar3 + 4);
      }
      iVar3 = puVar1[2];
      fn_001008c4(iVar3,(puVar1[4] - iVar3) / 0x14,0);
      fn_002feef8(puVar1[1]);
      fn_002feef8(puVar1);
    }
    param_1[0x47] = (int)puVar2;
  }
  uVar4 = fn_0043cd80(param_1);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005c0224;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c0224:
  param_1[0x48] = puVar1[3];
  param_1[0x49] = puVar1[4];
  param_1[0x4a] = puVar1[5];
  uVar7 = fn_006b6458(*(undefined4 *)(DAT_00897804 + 8));
  iVar3 = puVar1[2];
  uVar5 = fn_00236ab8(auStack_90,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  fn_0017821c(iVar3 + 0x28,uVar5,100);
  fn_0023512c(puVar1[2],uVar7);
  fn_001fbc38();
  *(undefined1 *)(DAT_00897850 + 0x3c) = 1;
  fn_001fbb24();
  piVar6 = (int *)param_1[0x49];
  fn_003f7120(piVar6 + 2);
  uVar8 = 0;
  iVar3 = (int)((longlong)(piVar6[0x28] - piVar6[0x27]) * -0x22983759 +
                ((ulonglong)(uint)(piVar6[0x28] - piVar6[0x27]) << 0x20) >> 0x20);
  if (iVar3 >> 7 != iVar3 >> 0x1f) {
    do {
      (**(code **)(*piVar6 + 0x1c))(piVar6,uVar8);
      uVar8 = uVar8 + 1;
      iVar3 = (int)((longlong)(piVar6[0x28] - piVar6[0x27]) * -0x22983759 +
                    ((ulonglong)(uint)(piVar6[0x28] - piVar6[0x27]) << 0x20) >> 0x20);
    } while (uVar8 < (uint)((iVar3 >> 7) - (iVar3 >> 0x1f)));
  }
  *(undefined4 *)(param_1[0x49] + 0xc) = uVar7;
  iVar3 = param_1[0x49];
  uVar7 = fn_00236ab8(auStack_90,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  fn_0017821c(iVar3 + 0x14,uVar7,100);
  fn_0042b8d4(param_1[0x48],param_1[0x49]);
  fn_0042b8d4(param_1[0x48],param_1[0x4a]);
  fn_0042b928(param_1[0x48],DAT_00897850,1);
  param_1[0x4c] = -1;
  iVar3 = param_1[0x47];
  *(undefined1 *)(iVar3 + 0x14) = 1;
  *(undefined1 *)(iVar3 + 0x15) = 0;
  fn_003921b0(*(undefined4 *)(iVar3 + 4),1,4);
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008964f4) goto LAB_005c0404;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c0404:
  param_1[0x4b] = (int)puVar1;
  puVar1[4] = 0xe7;
  *(undefined1 *)(param_1[0x4b] + 8) = 1;
  *(undefined1 *)(param_1[0x4b] + 0xd) = 0;
  *(undefined1 *)(param_1[0x4b] + 10) = 2;
  fn_00689878(param_1,0x80);
  *(undefined1 *)((int)param_1 + 0x10a) = 1;
  fn_00689930(param_1,0xf5,0);
  return uVar4;
}



void fn_005bdce8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  int local_34 [2];
  int local_2c [3];
  
  fn_005bd84c();
  iVar1 = fn_006e902c(param_1);
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdfa4,iVar1 + 0x558);
  if (*(int *)(iVar1 + 0x708) != 0) {
    uVar11 = fn_004a0cc0();
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    fn_0023ca2c(&local_40,uVar3,(int)uVar11,uVar3);
    fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdfb8,local_40);
    if (local_40 != &DAT_008f9cf4) {
      piVar4 = local_40 + -3;
      iVar9 = *piVar4;
      if ((iVar9 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar9 + -1, iVar9 == 0)))) {
        fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
      }
    }
  }
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005bdfd4,iVar1 + 0x57c);
  if (*(char *)(iVar1 + 0x71d) == '\0') {
    pcVar2 = (char *)&DAT_005bdff0;
  }
  else {
    pcVar2 = (char *)&DAT_005bdfe4;
  }
  uVar3 = fn_0022f750(pcVar2);
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be000,uVar3);
  local_3c = 9999999;
  local_2c[0] = *(int *)(iVar1 + 0x718);
  piVar4 = local_2c;
  if (9999999 < *(int *)(iVar1 + 0x718)) {
    piVar4 = &local_3c;
  }
  fn_00688ad4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be010,*piVar4,0);
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be024,iVar1 + 0x5a0);
  iVar10 = iVar1 + 0x5b8;
  fn_006c4288(iVar10);
  uVar3 = fn_0022f750();
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be034,uVar3);
  fn_006c4410(iVar10);
  uVar3 = fn_0022f750();
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be040,uVar3);
  fn_006c4628(iVar10);
  uVar3 = fn_0022f750();
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be054,uVar3);
  iVar9 = fn_006c4094(iVar10);
  if (iVar9 == 3) {
    fn_006c46a4(iVar10);
    uVar3 = fn_0022f750();
    uVar5 = *(undefined4 *)(param_1 + 0x74);
  }
  else {
    fn_006c4374();
    uVar3 = fn_0022f750();
    uVar5 = *(undefined4 *)(param_1 + 0x74);
  }
  fn_00688cc4(uVar5,(char *)&DAT_005be064,uVar3);
  fn_006c4568(iVar10);
  uVar3 = fn_0022f750();
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be070,uVar3);
  fn_006c4304(iVar10);
  uVar3 = fn_0022f750();
  fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be07c,uVar3);
  iVar9 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be090);
  iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be0a0);
  iVar7 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be0ac);
  bVar8 = *(byte *)(iVar9 + 0x44) & 0xfe;
  if (*(char *)(iVar1 + 0x71c) == '\0') {
    *(byte *)(iVar9 + 0x44) = bVar8;
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
    if (iVar7 != 0) {
      *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe | 1;
    }
    uVar3 = fn_002d7a80(iVar10);
    fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be300,uVar3);
    uVar3 = fn_0023c368(iVar10);
    fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be30c,uVar3);
    fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be320,0);
    fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be32c,0);
    fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be338,0);
    fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be344,0);
    iVar9 = fn_006c4168(iVar10);
    if (iVar9 == 0) {
      fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be320,1);
      fn_006c45f8(iVar10);
      iVar1 = fn_0022f750();
      uVar3 = *(undefined4 *)(param_1 + 0x74);
      pcVar2 = (char *)&DAT_005be320;
    }
    else {
      if (iVar9 != 1) {
        return;
      }
      local_38 = 1;
      local_34[0] = 0;
      fn_002d7db4(&local_38,local_34,*(undefined1 *)(iVar1 + 0x5c9),*(undefined1 *)(iVar1 + 0x5ca))
      ;
      if (local_38 == 8) {
        fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be344,1);
        fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be338,1);
        fn_002d7e00(local_34[0]);
        iVar1 = fn_0022f750();
        uVar3 = *(undefined4 *)(param_1 + 0x74);
        pcVar2 = (char *)&DAT_005be338;
      }
      else {
        fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be32c,1);
        fn_006889d8(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be338,1);
        uVar3 = fn_002d7e10(local_38);
        uVar5 = fn_002d7e00(local_34[0]);
        uVar3 = fn_0022f750(uVar3);
        fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be32c,uVar3);
        iVar1 = fn_0022f750(uVar5);
        uVar3 = *(undefined4 *)(param_1 + 0x74);
        pcVar2 = (char *)&DAT_005be338;
      }
    }
  }
  else {
    *(byte *)(iVar9 + 0x44) = bVar8 | 1;
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    if (iVar7 != 0) {
      *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
    }
    fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be0b8,iVar1 + 0x5d0);
    fn_00688cc4(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_005be0c4,iVar1 + 0x5f0);
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    iVar1 = iVar1 + 0x610;
    pcVar2 = (char *)&DAT_005be0d0;
  }
  fn_00688cc4(uVar3,pcVar2,iVar1);
  return;
}


