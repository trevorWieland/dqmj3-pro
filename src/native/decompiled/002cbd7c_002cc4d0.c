#include "002cbd7c_002cc4d0.h"



undefined4 fn_002cc4d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 auStack_1c [8];
  
  fn_00246e68(auStack_1c);
  fn_00246e00(auStack_1c);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_002cd1dc(param_1,&local_28);
  fn_002cd288(param_1,&local_28);
  uVar2 = 0;
  iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      iVar1 = fn_006b5424(auStack_1c,local_28 + uVar2 * 0xf0 + 4);
      if (iVar1 != 0) {
        uVar2 = local_28;
        if (local_24 < local_28) {
          do {
            uVar2 = uVar2 + 0xf0;
          } while (uVar2 != local_24);
        }
        iVar1 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                      ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
        fn_001008c4(local_28,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
        fn_00246e74(auStack_1c);
        return 1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                    ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
    } while (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  uVar2 = local_28;
  if (local_24 < local_28) {
    do {
      uVar2 = uVar2 + 0xf0;
    } while (uVar2 != local_24);
  }
  iVar1 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
  fn_001008c4(local_28,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  fn_00246e74(auStack_1c);
  return 0;
}



void fn_002cc46c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081fc18;
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[9]);
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) >> 2,0);
  fn_006896f4(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_002cc310(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_0081fc18;
  *(undefined1 *)(puVar3 + 4) = 0;
  uVar5 = *(undefined4 *)(param_2 + 8);
  puVar3[6] = 0xffffffff;
  puVar3[5] = uVar5;
  puVar3[7] = 0xffffffff;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar6 = 1;
  puVar3[8] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
    }
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0);
  iVar6 = puVar3[8];
  uVar5 = 0;
  puVar3[9] = iVar6 + 4;
  puVar3[10] = iVar6 + 0x80;
  puVar3[0xb] = param_3;
  puVar3[0xc] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0xd] = DAT_008f9e2c;
  puVar3[0xe] = uVar1;
  puVar3[0xf] = uVar2;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62ec), iVar6 != 0)) {
    DAT_008c62f0 = uVar5;
    DAT_008c62f4 = uVar5;
  }
  uVar5 = DAT_008c62f4;
  puVar3[0x10] = DAT_008c62f0;
  puVar3[0x11] = uVar5;
  return puVar3;
}



void fn_002cc254(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  fn_00151954(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc));
  fn_0068af3c(param_1);
  if (**(int **)(param_1 + 0x20) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x14));
    **(undefined4 **)(param_1 + 0x20) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_002cc128(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  fn_0068aeac();
  if (*(int *)(param_1 + 0x18) == -1) {
    uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),DAT_00896030,&DAT_002cc244,1,1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == -1) {
    uVar1 = fn_001c8abc(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         DAT_00896034);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  if (**(int **)(param_1 + 0x20) == -1) {
    uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x14),DAT_00896038,
                         *(undefined4 *)(param_1 + 0x1c));
    **(undefined4 **)(param_1 + 0x20) = uVar1;
    piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14),uVar1);
    (**(code **)(*piVar2 + 0x50))(piVar2,1);
  }
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = *(int **)(iVar3 + 0x10);
  *(int **)(param_1 + 0x30) = piVar2;
  fn_0018a69c(*(undefined4 *)(param_1 + 0x2c),piVar2);
  iVar3 = 0;
  do {
    while (iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,(&DAT_00896048)[iVar3],1), iVar3 == 0xf) {
      iVar3 = 0x10;
    }
    iVar3 = iVar3 + 1;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  } while (iVar3 < 0x2a);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



void fn_002cc0e0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))
                    (*(int **)(iVar1 + 0x10),PTR_s_ic_save_00896084,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_002cbf94(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &DAT_0081fbec;
  if (*(char *)(param_1 + 4) != '\0') {
    iVar1 = fn_00178f9c(param_1[5],param_1[7]);
    fn_00151954(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc));
    fn_0068af3c(param_1);
    iVar1 = 0;
    do {
      if (*(int *)(param_1[8] + iVar1 * 4) != -1) {
        if (3 < iVar1) {
          DAT_00895f38 = DAT_00895f38 + -1;
        }
        fn_00159f34(param_1[5],*(undefined4 *)(param_1[8] + iVar1 * 4));
        *(undefined4 *)(param_1[8] + iVar1 * 4) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    if (param_1[7] != -1) {
      fn_0016a43c(param_1[5]);
      param_1[7] = 0xffffffff;
    }
    if (param_1[6] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(param_1[5]);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uVar2 = param_1[0x1a];
  uVar3 = uVar2;
  if ((uint)param_1[0x1b] < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[0x1b]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x1c] - uVar2) >> 2,0);
  uVar2 = param_1[8];
  uVar3 = uVar2;
  if ((uint)param_1[9] <= uVar2) {
    for (; uVar3 != param_1[9]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[10] - uVar2) >> 2,0);
  fn_006896f4(param_1);
  return;
}



/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x002cbf10 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002cbd7c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_30;
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_0081fbec;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = *(undefined4 *)(param_2 + 8);
  puVar3[6] = 0xffffffff;
  puVar3[7] = 0xffffffff;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar5 = 0xc;
  puVar3[8] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
    }
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar5 != 0);
  iVar5 = puVar3[8];
  uVar7 = 0;
  puVar3[9] = iVar5 + 0x30;
  puVar3[10] = iVar5 + 0x80;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x35) = 0xff;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = uVar7;
    DAT_008f9e30 = uVar7;
    DAT_008f9e34 = uVar7;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0xe] = DAT_008f9e2c;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = uVar2;
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x11] = DAT_008f9e2c;
  puVar3[0x12] = uVar1;
  puVar3[0x13] = uVar2;
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62ec), iVar5 != 0)) {
    DAT_008c62f0 = uVar7;
    DAT_008c62f4 = uVar7;
  }
  uVar7 = DAT_008c62f4;
  puVar3[0x14] = DAT_008c62f0;
  puVar3[0x15] = uVar7;
  uVar7 = DAT_008c62f4;
  puVar3[0x16] = DAT_008c62f0;
  puVar3[0x17] = uVar7;
  *(undefined1 *)(puVar3 + 0x18) = 1;
  *(undefined1 *)((int)puVar3 + 0x61) = 1;
  *(undefined1 *)((int)puVar3 + 0x62) = 0xff;
  *(undefined1 *)((int)puVar3 + 99) = 0xff;
  puVar3[0x19] = 0;
  piVar6 = puVar3 + 0x1a;
  *piVar6 = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  local_30 = 0x2a;
  puVar4 = (undefined4 *)fn_00100fc6(0xa8,0);
  *piVar6 = (int)puVar4;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
  }
  puVar3[0x1c] = *piVar6 + 0xa8;
  puVar3[0x1b] = *piVar6 + 0xa8;
  return puVar3;
}


