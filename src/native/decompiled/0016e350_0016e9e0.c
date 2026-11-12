#include "0016e350_0016e9e0.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined1 * fn_0016e9e0(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char local_18 [12];
  
  iVar5 = 0;
  do {
    cVar2 = *(char *)(param_1 + iVar5);
    if (cVar2 == '\0' || cVar2 == ':') {
      uVar4 = 0;
      local_18[iVar5] = ':';
      uVar3 = 0;
      iVar5 = 0;
      goto LAB_0016ea68;
    }
    local_18[iVar5] = cVar2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  fn_00146594();
  uVar4 = 0;
  uVar3 = 0;
  iVar5 = 0;
  do {
    uVar6 = (uint)(char)(&DAT_007d6f10)[iVar5];
    if (uVar6 == 0x3a) goto LAB_0016ea98;
    uVar1 = uVar4 >> 0x18;
    iVar5 = iVar5 + 1;
    uVar4 = uVar6 | uVar4 << 8;
    uVar3 = uVar3 << 8 | uVar1 | (int)uVar6 >> 0x1f;
  } while (iVar5 < 8);
LAB_0016ea90:
  uVar4 = 0;
  uVar3 = 0;
LAB_0016ea98:
  uVar6 = 0;
  do {
    if ((&DAT_008e3474)[uVar6 * 4] == uVar3 && (&DAT_008e3470)[uVar6 * 4] == uVar4) {
      piVar7 = (int *)(&DAT_008e3478)[uVar6 * 4];
      cVar2 = (&DAT_008e347d)[uVar6 * 0x10];
      (&DAT_008e3478)[uVar6 * 4] = 0;
      (&DAT_008e3470)[uVar6 * 4] = 0;
      (&DAT_008e3474)[uVar6 * 4] = 0;
      if (piVar7 != (int *)0x0) {
        if ((cVar2 == '\0') && ((**(code **)(*piVar7 + 0x30))(piVar7), piVar7 == DAT_0089a668)) {
          DAT_0089a668 = (int *)0x0;
        }
        return (undefined1 *)0x0;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
  return &DAT_c8804465;
  while( true ) {
    uVar1 = uVar4 >> 0x18;
    iVar5 = iVar5 + 1;
    uVar4 = uVar6 | uVar4 << 8;
    uVar3 = uVar3 << 8 | uVar1 | (int)uVar6 >> 0x1f;
    if (7 < iVar5) break;
LAB_0016ea68:
    uVar6 = (uint)local_18[iVar5];
    if (uVar6 == 0x3a) goto LAB_0016ea98;
  }
  goto LAB_0016ea90;
}



int fn_0016e9a8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8630000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0016e824(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  
  local_18 = param_4;
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0017bf8c(iVar1,*param_1,param_2,param_3);
  }
  if (param_3 == 4 || param_3 == 3) {
    if (param_4 == -4) {
      param_4 = -100;
    }
    else if (param_4 == -3) {
      param_4 = -0x32;
    }
    else if (param_4 == -2) {
      param_4 = -0x19;
    }
    else {
      bVar3 = param_4 == -1;
      if (bVar3) {
        param_4 = -5;
      }
      if (!bVar3 && param_4 != 0) {
        if (param_4 == 1) {
          param_4 = 5;
        }
        else if (param_4 == 2) {
          param_4 = 0x19;
        }
        else if (param_4 == 3) {
          param_4 = 0x32;
        }
        else if (param_4 == 4) {
          param_4 = 100;
        }
      }
    }
  }
  local_18 = iVar2;
  fn_0017bc14(iVar2,param_4);
  fn_00183eb0(param_1 + 1,&local_18);
  return;
}



void fn_0016e7a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  local_18 = param_4;
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0017bf8c(iVar1,*param_1,param_2,param_3);
  }
  local_18 = iVar2;
  iVar1 = fn_00172c98(*(undefined4 *)(iVar2 + 0xc),DAT_0089036c);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  fn_0017dd54(*(undefined4 *)(iVar2 + 0xc),DAT_00890378,1);
  fn_00183eb0(param_1 + 1,&local_18);
  return;
}



void fn_0016e750(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = fn_0017f184(*(undefined4 *)(param_1 + iVar2 * 4 + 0x70));
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 | uVar1;
  } while (iVar2 < 2);
  if (uVar3 != 0) {
    fn_00190e00(*(undefined4 *)(param_1 + 100));
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  return;
}



void fn_0016e470(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0xac);
  uVar4 = (uint)*(byte *)(param_1 + 0xad);
  bVar5 = uVar3 != 0;
  bVar6 = uVar4 != 0;
  if (param_2 == 0) {
LAB_0016e4d4:
    uVar2 = 0xffffffff;
  }
  else if (uVar3 == param_2) {
    uVar2 = 0;
  }
  else {
    if (uVar4 != param_2) goto LAB_0016e4d4;
    uVar2 = 1;
  }
  if ((param_4 == 0) || ((uVar3 != param_4 && (uVar1 = (uint)(uVar4 == param_4), uVar4 != param_4)))
     ) {
    uVar1 = 0xffffffff;
  }
  if (bVar5 || bVar6) {
    if (bVar5 && bVar6) {
      if (uVar2 != 0xffffffff) {
        fn_0017bae4(param_1,param_2,param_3,uVar2,param_1,param_2,param_3,param_4);
        goto LAB_0016e530;
      }
      if (uVar1 != 0xffffffff) {
        fn_0017bae4(param_1,param_4,param_5,uVar1,param_1,param_2,param_3,param_4);
        fn_0017bae4(param_1,param_2,param_3);
        return;
      }
    }
    else {
      if ((!bVar5) && (uVar1 = uVar2, !bVar6)) {
        return;
      }
      if (uVar1 != 0xffffffff) {
        fn_0017bae4(param_1,param_2,param_3,1,param_1,param_2,param_3,param_4);
        goto LAB_0016e530;
      }
    }
  }
  fn_0017bae4(param_1,param_2,param_3,0,param_1,param_2,param_3,param_4);
LAB_0016e530:
  fn_0017bae4(param_1,param_4,param_5);
  return;
}



undefined4 *
fn_0016e350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined4 *)fn_0016a50c();
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  puVar3[4] = param_5;
  puVar3[5] = param_6;
  puVar3[6] = param_7;
  puVar3[7] = param_8;
  puVar3[8] = param_9;
  puVar3[9] = param_10;
  *puVar3 = &DAT_0082da14;
  uVar6 = 0;
  puVar3[10] = param_11;
  puVar3[0xb] = param_12;
  puVar3[0xc] = param_13;
  puVar3[0xd] = param_14;
  puVar3[0xe] = param_15;
  puVar3[0xf] = param_16;
  puVar3[0x10] = param_17;
  *(undefined1 *)(puVar3 + 0x11) = 0;
  *(undefined1 *)((int)puVar3 + 0x45) = 0;
  *(undefined1 *)((int)puVar3 + 0x46) = 0;
  iVar5 = 0;
  do {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = (undefined4)uVar6;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar2 = DAT_008f9e34;
    uVar1 = DAT_008f9e30;
    puVar3[iVar5 * 3 + 0x12] = DAT_008f9e2c;
    puVar3[iVar5 * 3 + 0x13] = uVar1;
    puVar3[iVar5 * 3 + 0x14] = uVar2;
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = (undefined4)uVar6;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar2 = DAT_008f9e34;
    uVar1 = DAT_008f9e30;
    iVar4 = iVar5 + 1;
    puVar3[iVar5 * 3 + 0x18] = DAT_008f9e2c;
    puVar3[iVar5 * 3 + 0x19] = uVar1;
    puVar3[iVar5 * 3 + 0x1a] = uVar2;
    iVar5 = iVar4;
  } while (iVar4 < 2);
  fn_00178b0c();
  fn_00178b7c();
  return puVar3;
}


