#include "003a86f0_003a8f48.h"



void fn_003a8f48(int param_1)

{
  fn_005a8a58(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d,param_1 + 0x7e,0,1);
  return;
}



void fn_003a8f34(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x74);
  pcVar3 = (char *)(param_1 + 0x7d);
  fn_0018cb08(iVar5,(int)(char)(*pcVar3 + -0x10),5,iVar5,iVar5);
  puVar2 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x18] = uVar4;
    puVar2[0x19] = iVar5;
    fn_005a8448(puVar2);
  }
  *(undefined4 **)(iVar5 + *pcVar3 * 4 + -0x30) = puVar2;
  uVar6 = (uint)(char)(*pcVar3 + -0x10);
  uVar1 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar6,uVar1);
  }
  *(undefined4 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x40) =
       *(undefined4 *)(*(int *)(iVar5 + 4) + uVar6 * 4);
  fn_005a928c(iVar5,*(undefined4 *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10),5);
  *(undefined1 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x58) = 0;
  *(undefined1 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x29) = 0;
  return;
}



void fn_003a8ee8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x74);
  pcVar3 = (char *)(param_1 + 0x7d);
  fn_0018cb08(iVar5,(int)(char)(*pcVar3 + -0x10),4,iVar5,iVar5);
  puVar2 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x18] = uVar4;
    puVar2[0x19] = iVar5;
    fn_005a8448(puVar2);
  }
  *(undefined4 **)(iVar5 + *pcVar3 * 4 + -0x30) = puVar2;
  uVar6 = (uint)(char)(*pcVar3 + -0x10);
  uVar1 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar6,uVar1);
  }
  *(undefined4 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x40) =
       *(undefined4 *)(*(int *)(iVar5 + 4) + uVar6 * 4);
  fn_005a928c(iVar5,*(undefined4 *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10),4);
  *(undefined1 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x58) = 0;
  *(undefined1 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x29) = 0;
  return;
}



void fn_003a8e88(int param_1)

{
  byte bVar1;
  
  bVar1 = fn_00353aa4(*(undefined4 *)(param_1 + 0x70));
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe | bVar1;
  *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) =
       bVar1 ^ 1 | *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xc0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xc4) + 0x44) & 0xfe;
  return;
}



void fn_003a8dd0(int param_1)

{
  fn_0017f464(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d);
  return;
}



void fn_003a8da4(undefined4 param_1)

{
  fn_003a7964(param_1,0x14,0,0,1);
  return;
}



void fn_003a8cf0(int param_1)

{
  int iVar1;
  char local_14 [4];
  
  fn_0017f464(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d);
  local_14[0] = '\x10';
  do {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar1 = fn_006f447c(iVar1 + local_14[0] * 0x418 + -0x4080);
    if (iVar1 != 0) {
      fn_005a8a58(*(undefined4 *)(param_1 + 0x74),local_14,param_1 + 0x7e,1,0);
      fn_003532b8(*(undefined4 *)(param_1 + 0x70),local_14,0);
    }
    local_14[0] = local_14[0] + '\x01';
  } while (local_14[0] < '\x14');
  fn_005a8624(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7e);
  return;
}



void fn_003a8cd4(undefined4 param_1,undefined4 param_2)

{
  fn_003a7964(param_1,0x10,1,0,param_2);
  return;
}



void fn_003a8b98(int param_1,char param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  short *psVar4;
  char local_6f0 [4];
  undefined1 auStack_6ec [1208];
  int local_234;
  undefined1 auStack_220 [520];
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar1 = iVar1 + param_2 * 0x418;
  psVar4 = (short *)(iVar1 + -0x4080);
  if (*psVar4 < 1) {
    return;
  }
  fn_00436554(auStack_6ec);
  fn_00435c70(auStack_6ec,psVar4);
  if (local_234 < 1) {
    puVar2 = (undefined1 *)fn_00231db4(9000);
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
  }
  else {
    puVar2 = auStack_220;
    fn_00301f50(puVar2,0x200);
    local_6f0[0] = '\0';
    fn_003a71fc(param_1,psVar4,auStack_6ec,puVar2,0,local_6f0);
    fn_003a71fc(param_1,psVar4,auStack_6ec,puVar2,1,local_6f0);
    if (local_6f0[0] < '\x01') goto LAB_003a8c88;
    uVar3 = *(undefined4 *)(param_1 + 0x6c);
  }
  fn_0042e5b0(uVar3,iVar1 + -0x407c,puVar2);
LAB_003a8c88:
  fn_00689bd0(param_1,0x4a,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_003a8a44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar1 = fn_00163940(param_2);
  if ((iVar1 == 0) || (iVar1 = fn_00660ec0(param_2), iVar1 == 0x16)) {
    uVar11 = fn_00174828(DAT_008977e4);
    iVar9 = (int)uVar11 + 0xe8;
    iVar1 = fn_006f4868(iVar9,(int)((ulonglong)uVar11 >> 0x20),1,0,param_4);
    if (iVar1 != 0) {
      fn_003a704c(param_1,3,0,1,0);
      return;
    }
    uVar8 = 0;
    iVar1 = fn_00174828(DAT_008977e4);
    iVar2 = fn_00174828(DAT_008977e4);
    cVar7 = '\0';
    do {
      iVar4 = (char)(cVar7 + '\x10') * 3;
      if (iVar9 != 0) {
        uVar11 = fn_006f447c(iVar2 + (char)(cVar7 + '\x10') * 0x418 + -0x4080);
        iVar4 = (int)((ulonglong)uVar11 >> 0x20);
        uVar8 = uVar8 | (uint)uVar11;
      }
      cVar7 = cVar7 + '\x01';
    } while (cVar7 < '\x04');
    uVar3 = fn_006f4868(iVar9,iVar4,1,0);
    bVar10 = uVar3 == 0;
    if (bVar10) {
      uVar3 = (uint)*(byte *)(iVar1 + 7);
    }
    if (((bVar10 && uVar3 == 0) && (uVar8 != 0)) &&
       (iVar1 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 < 500)) {
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_003a8b88;
    }
  }
  uVar5 = 0;
  uVar6 = 1;
LAB_003a8b88:
  fn_003a704c(param_1,3,uVar5,uVar6,0);
  return;
}



void fn_003a8a1c(int param_1)

{
  fn_005a8a58(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d,param_1 + 0x7d,0,0);
  return;
}



void fn_003a8858(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) = *(byte *)(*(int *)(param_1 + 0xbc) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc0) + 0x44) =
       param_2 ^ 1 | *(byte *)(*(int *)(param_1 + 0xc0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc4) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xc4) + 0x44) & 0xfe;
  return;
}



void fn_003a8818(int param_1)

{
  fn_00353cf8(*(undefined4 *)(param_1 + 0x70));
  fn_0017f464(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d);
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 4))();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}



void fn_003a86f0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  uVar8 = 0;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_001c25e4();
  if (iVar3 == 0) {
    iVar2 = fn_001c28f0(param_2,*(undefined1 *)(param_1 + 0x83));
    if (iVar2 != 0) {
LAB_003a87f8:
      uVar7 = 0;
      uVar6 = 1;
      goto LAB_003a880c;
    }
  }
  else {
    uVar8 = 1;
    iVar3 = fn_001c34d4(0);
    if ((iVar3 == 0) && (*(char *)(iVar2 + 1) != '\r')) {
      iVar2 = fn_00174828(DAT_008977e4);
      cVar1 = *(char *)(iVar2 + 0xe4);
      pcVar4 = (char *)fn_00174828(DAT_008977e4);
      if (cVar1 + -1 != (int)*pcVar4) {
        iVar2 = 0x10;
        if (*(char *)(param_1 + 0x83) != '\0') {
          do {
            iVar3 = fn_00174828(DAT_008977e4);
            iVar3 = iVar3 + (char)iVar2 * 0x418;
            uVar5 = iVar3 - 0x4080;
            if (uVar5 != 0) {
              bVar9 = *(char *)(iVar3 + -0x3c6c) != '\0';
              if (bVar9) {
                uVar5 = (uint)*(byte *)(iVar3 + -0x4019);
              }
              if (bVar9 && uVar5 != 0) goto LAB_003a87c8;
            }
            iVar2 = (int)(char)((char)iVar2 + '\x01');
          } while (iVar2 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
        }
        goto LAB_003a87f8;
      }
    }
  }
LAB_003a87c8:
  uVar7 = 1;
  uVar6 = 0;
LAB_003a880c:
  fn_003a704c(param_1,6,uVar6,uVar7,uVar8);
  return;
}


