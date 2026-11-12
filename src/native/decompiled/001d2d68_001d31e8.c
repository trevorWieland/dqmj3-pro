#include "001d2d68_001d31e8.h"



void fn_001d31e8(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_28;
  uint local_24 [2];
  
  *(undefined4 *)(param_1 + 0x1adc) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x1ae0) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x1ae1) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x1ae4) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x1ae8) = *(undefined2 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1af0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1af4) = uVar5;
  *(undefined1 *)(param_1 + 0x1af8) = *(undefined1 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x1afa) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x1afc) = *(undefined2 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x1afe) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x1aff) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)(param_1 + 0x1b00) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x1b01) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)(param_1 + 0x1b02) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_1 + 0x1b03) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_1 + 0x1b04) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x1b05) = *(undefined1 *)(param_2 + 0x2d);
  fn_0017821c(param_1 + 0x1b08,param_2 + 0x30,0x3c0);
  fn_0017821c(param_1 + 0x1ec8,param_2 + 0x3f0,0x3c0);
  fn_0017821c(param_1 + 0x2288,param_2 + 0x7b0,0x1e);
  *(undefined2 *)(param_1 + 0x22a6) = *(undefined2 *)(param_2 + 0x7ce);
  *(undefined4 *)(param_1 + 0x22a8) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x22ac) = *(undefined4 *)(param_2 + 0x7d4);
  fn_0017821c(param_1 + 0x22b0,param_2 + 0x7d8,0x60);
  fn_0017821c(param_1 + 0x2310,param_2 + 0x838,0x48);
  fn_0017821c(param_1 + 0x2358,param_2 + 0x880,0x48);
  puVar12 = (uint *)(param_2 + 0x8cc);
  *(undefined1 *)(param_1 + 0x23a0) = *(undefined1 *)(param_2 + 0x8c8);
  puVar13 = (uint *)(param_1 + 0x23a4);
  if (puVar12 != puVar13) {
    puVar1 = *(undefined4 **)(param_2 + 0x8d0);
    puVar7 = (undefined4 *)*puVar12;
    iVar9 = (int)puVar1 - (int)puVar7;
    local_28 = iVar9 / 0xc;
    puVar6 = (undefined4 *)*puVar13;
    if ((uint)((*(int *)(param_1 + 0x23ac) - (int)puVar6) / 0xc) < local_28) {
      uVar14 = (*(int *)(param_1 + 0x23a8) - (int)puVar6) / 0xc;
      local_24[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_24[0] < uVar14 + 0x20) {
        local_24[0] = uVar14 + 0x20;
      }
      puVar2 = local_24;
      if (local_24[0] <= local_28) {
        puVar2 = &local_28;
      }
      uVar14 = *puVar2;
      puVar1 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
      puVar8 = *(undefined4 **)(param_2 + 0x8d0);
      puVar6 = puVar1;
      for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar8; puVar7 = puVar7 + 3) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
        }
        puVar6 = puVar6 + 3;
      }
      uVar3 = *puVar13;
      uVar4 = uVar3;
      if (*(uint *)(param_1 + 0x23a8) < uVar3) {
        do {
          uVar4 = uVar4 + 0xc;
        } while (uVar4 != *(uint *)(param_1 + 0x23a8));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x23ac) - uVar3) / 0xc,0);
      *puVar13 = (uint)puVar1;
      puVar7 = puVar1 + uVar14 * 3;
      *(undefined4 **)(param_1 + 0x23a8) =
           puVar1 + ((int)(*(int *)(param_2 + 0x8d0) - *puVar12) / 0xc) * 3;
    }
    else {
      uVar14 = (*(int *)(param_1 + 0x23a8) - (int)puVar6) / 0xc;
      if (uVar14 < local_28) {
        puVar1 = puVar7 + uVar14 * 3;
        if (puVar7 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar7) {
            puVar8 = puVar6 + -3;
            puVar11 = puVar7 + -3;
            if ((((int)puVar1 - (int)puVar7) / 0xc & 1U) != 0) {
              *puVar6 = *puVar7;
              puVar6[1] = puVar7[1];
              puVar6[2] = puVar7[2];
              puVar8 = puVar6;
              puVar11 = puVar7;
            }
            for (iVar9 = ((int)puVar1 - (int)puVar7) / 0xc >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
              puVar8[3] = puVar11[3];
              puVar8[4] = puVar11[4];
              puVar8[5] = puVar11[5];
              puVar8[6] = puVar11[6];
              puVar8[7] = puVar11[7];
              puVar8[8] = puVar11[8];
              puVar8 = puVar8 + 6;
              puVar11 = puVar11 + 6;
            }
          }
        }
        else {
          for (; puVar7 != puVar1; puVar7 = puVar7 + 3) {
            *puVar6 = *puVar7;
            puVar6[1] = puVar7[1];
            puVar6[2] = puVar7[2];
            puVar6 = puVar6 + 3;
          }
        }
        *(uint *)(param_1 + 0x23a8) =
             *puVar13 + ((int)(*(int *)(param_2 + 0x8d0) - *puVar12) / 0xc) * 0xc;
        puVar1 = *(undefined4 **)(param_2 + 0x8d0);
        puVar7 = (undefined4 *)(*puVar13 + uVar14 * 0xc);
        for (puVar6 = (undefined4 *)(*puVar12 + uVar14 * 0xc); puVar6 != puVar1; puVar6 = puVar6 + 3
            ) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar6;
            puVar7[1] = puVar6[1];
            puVar7[2] = puVar6[2];
          }
          puVar7 = puVar7 + 3;
        }
        goto LAB_001d36e4;
      }
      if (puVar7 < puVar1) {
        if (0 < iVar9) {
          puVar1 = puVar6 + -3;
          puVar8 = puVar7 + -3;
          if ((local_28 & 1) != 0) {
            *puVar6 = *puVar7;
            puVar6[1] = puVar7[1];
            puVar6[2] = puVar7[2];
            puVar1 = puVar6;
            puVar8 = puVar7;
          }
          for (iVar10 = iVar9 / 0xc >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar1[3] = puVar8[3];
            puVar1[4] = puVar8[4];
            puVar1[5] = puVar8[5];
            puVar1[6] = puVar8[6];
            puVar1[7] = puVar8[7];
            puVar1[8] = puVar8[8];
            puVar1 = puVar1 + 6;
            puVar8 = puVar8 + 6;
          }
          puVar6 = puVar6 + (iVar9 / 0xc) * 3;
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 3) {
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          puVar6 = puVar6 + 3;
        }
      }
      if (*(undefined4 **)(param_1 + 0x23a8) < puVar6) {
        do {
          puVar6 = puVar6 + 3;
        } while (puVar6 != *(undefined4 **)(param_1 + 0x23a8));
      }
      puVar7 = (undefined4 *)(*puVar13 + ((int)(*(int *)(param_2 + 0x8d0) - *puVar12) / 0xc) * 0xc);
      *(undefined4 **)(param_1 + 0x23a8) = puVar7;
    }
    *(undefined4 **)(param_1 + 0x23ac) = puVar7;
  }
LAB_001d36e4:
  *(undefined1 *)(param_1 + 4) = 7;
  return;
}



void fn_001d30c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28;
  
  local_28 = param_4;
  fn_001d2a90(param_1,0);
  uVar5 = 0;
  do {
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,(char)uVar5 + '\x14');
    uVar2 = fn_00182988(DAT_008977e4);
    iVar3 = fn_0026a548(uVar2,&local_28);
    iVar6 = param_1 + uVar5 * 0x24;
    cVar1 = *(char *)(iVar6 + 0x3e);
    iVar4 = (int)*(short *)(iVar6 + 0x38);
    if (cVar1 == '\0') {
LAB_001d3170:
      iVar6 = fn_0013add0(iVar4);
      if (iVar6 != 0) {
        uVar2 = fn_002ea244(iVar4);
        *(undefined4 *)(iVar3 + 0x14) = uVar2;
        uVar2 = fn_002ea2b0(iVar4);
LAB_001d31d8:
        *(undefined4 *)(iVar3 + 0x18) = uVar2;
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar2 = fn_006c887c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                             (int)*(short *)(iVar6 + 0x3a));
        *(undefined4 *)(iVar3 + 0x14) = uVar2;
        uVar2 = fn_006ca788(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                             (int)*(short *)(iVar6 + 0x3a));
        goto LAB_001d31d8;
      }
      if (cVar1 == '\x02') goto LAB_001d3170;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      fn_001d36fc(param_1,0);
      fn_001d29b8(param_1);
      fn_001d47e8(param_1);
      fn_001d17b8(param_1,extraout_r1,param_3,local_28);
      return;
    }
  } while( true );
}



void fn_001d2fb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0012e7ec();
  *puVar1 = &DAT_008517b0;
  *(undefined1 *)(puVar1 + 8) = 2;
  puVar1[3] = 0x100000c;
  puVar1[0xc] = 1;
  puVar1[6] = 0x44d;
  puVar1[7] = 0;
  return;
}



void fn_001d2d68(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  char local_3f8 [8];
  undefined1 auStack_3f0 [960];
  undefined1 auStack_30 [12];
  
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_00174870(param_1);
  *(undefined1 *)(iVar2 + 0xb) = *(undefined1 *)(iVar3 + 0x10);
  iVar2 = fn_00174828(DAT_008977e4);
  puVar4 = (undefined1 *)(iVar2 + 0xe8);
  iVar2 = fn_00174870(param_1);
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(puVar4 + 0xc) = uVar5;
  *puVar4 = *(undefined1 *)(iVar2 + 0x20);
  puVar4[0x10] = *(undefined1 *)(iVar2 + 0x28);
  puVar4[0x11] = *(undefined1 *)(iVar2 + 0x29);
  puVar4[0x14] = *(undefined1 *)(iVar2 + 0x2b);
  puVar4[0x15] = *(undefined1 *)(iVar2 + 0x2c);
  puVar4[0x16] = *(undefined1 *)(iVar2 + 0x2d);
  fn_001d2a90(param_1,1);
  fn_001d29b8(param_1);
  fn_001d36fc(param_1,0);
  fn_001d47e8(param_1);
  fn_001d17b8(param_1);
  iVar2 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar2 + 0xe8);
  bVar7 = (cVar1 == '\x04' || cVar1 == '\x05') || cVar1 == '\b';
  if (bVar7) {
    iVar2 = fn_00182988(DAT_008977e4);
  }
  else {
    iVar2 = fn_00182988(DAT_008977e4);
  }
  *(bool *)(iVar2 + 0x39c) = bVar7;
  fn_001d2128(param_1,param_1 + 0x148);
  iVar2 = fn_00174828(DAT_008977e4);
  iVar3 = fn_00268b38(auStack_3f0,4,*(undefined4 *)(param_1 + 0x1ad0));
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      local_3f8[0] = (char)iVar6 + '\x14';
      fn_0020bbc4(auStack_30,auStack_3f0 + iVar6 * 0xf0);
      switch(*(undefined1 *)(param_1 + 4)) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
        uVar5 = 1;
        break;
      default:
        uVar5 = 0;
      }
      fn_003585b4(auStack_30,iVar2 + local_3f8[0] * 0x418 + -0x4080,uVar5);
      uVar5 = fn_00182988(DAT_008977e4);
      uVar5 = fn_0026a548(uVar5,local_3f8);
      fn_001d0628(param_1,auStack_30,uVar5);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  fn_001d2900(param_1);
  fn_001d2ff8(param_1);
  fn_001d22ac(param_1);
  fn_001d42e4(param_1);
  iVar2 = fn_00182988(DAT_008977e4);
  *(short *)(iVar2 + 0x3a0) = (short)*(undefined4 *)(param_1 + 0x1ad0);
  fn_001d1a70(param_1,0x14,0x18);
  return;
}



void fn_001d2ff8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  
  iVar1 = fn_00174870();
  iVar1 = fn_0069ccf8((int)*(short *)(iVar1 + 0x24));
  if (iVar1 != 0) {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar2 = fn_00174870(param_1);
    *(short *)(iVar1 + 0x4298) = *(short *)(iVar2 + 0x24);
    iVar2 = fn_0069ccf8();
    if (iVar2 != 0) {
      *(undefined1 *)(iVar1 + 0x429c) = 1;
      if (*(short *)(iVar1 + 0x4298) == 1) {
        local_18[0] = 0x21;
        uVar3 = fn_00182988(DAT_008977e4);
        uVar3 = fn_0026a558(uVar3,local_18);
        fn_00301a9c(auStack_38,&DAT_007ba154,0x1e);
        fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_38);
        fn_0033819c(uVar3,auStack_38);
      }
    }
  }
  return;
}


