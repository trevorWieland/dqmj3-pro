#include "005af7a0_005b2d94.h"



void fn_005b2d94(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_2,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b2dec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b2dec:
  if (param_3 == 0) {
    uVar3 = fn_0057dd9c(puVar1);
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  if (param_3 == 1) {
    uVar3 = fn_0022f750((char *)&DAT_005b2e64);
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  fn_00168a24(param_1,&DAT_005b2e60,auStack_24);
  return;
}



void fn_005b1da8(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_24 [2];
  
  uVar1 = fn_0022f750((char *)&DAT_005b1ea0);
  uVar2 = fn_00100b58();
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_24 + 1;
    if (0x20 < uVar2) {
      puVar4 = local_24;
    }
    local_24[0] = uVar2;
    local_24[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      *puVar3 = 0;
      puVar3[1] = uVar6;
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  *param_1 = puVar3;
  fn_00301a9c(puVar3,uVar1,uVar2 << 1);
  return;
}



void fn_005afd78(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2 != 0) {
    do {
      uVar5 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
      if (uVar5 <= uVar4) {
        fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar4,uVar5);
      }
      uVar5 = uVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + uVar4 * 4);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      uVar4 = uVar5;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2 != 0) {
    do {
      uVar5 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
      if (uVar5 <= uVar4) {
        fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar4,uVar5);
      }
      uVar5 = uVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + uVar4 * 4);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      uVar4 = uVar5;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2));
  }
  iVar6 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar1 = fn_0028bcf4(iVar6);
  iVar2 = fn_0028bbc0(iVar6);
  if (iVar1 == 0 && iVar2 == 0) {
    if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,0,0);
    }
    fn_005ca88c(param_1,**(undefined4 **)(param_1 + 0xc4),8);
    uVar4 = 1;
    goto LAB_005b0100;
  }
  uVar3 = fn_00661308(iVar6);
  if ((iVar2 == 0) && (iVar1 = fn_002e3228(iVar6), iVar1 != 0)) {
    iVar1 = fn_0033a35c(uVar3);
    if (iVar1 != 3) {
      uVar3 = fn_0022f584((char *)&DAT_005b0188,0);
      uVar4 = fn_005b1104(param_1,0,uVar3);
      goto LAB_005b0100;
    }
  }
  else {
    iVar1 = fn_0033a35c(uVar3);
    if (iVar1 != 3) {
      uVar4 = fn_005b0a14(param_1,iVar6,1);
      if ((int)uVar4 < 1) {
        uVar4 = fn_005b0e8c(param_1,iVar6,1);
        if ((int)uVar4 < 1) {
          uVar4 = fn_005b0734(param_1,iVar6,1);
          if (0 < (int)uVar4) {
            iVar1 = fn_005b0bfc(param_1,iVar6,0);
            goto joined_r0x005b0034;
          }
          uVar4 = fn_005b0bfc(param_1,iVar6,1);
          if ((int)uVar4 < 1) {
            uVar3 = fn_0022f750(&DAT_005b01a4);
            uVar4 = fn_005b1104(param_1,uVar4,uVar3);
            goto LAB_005b0100;
          }
        }
        else {
          iVar1 = fn_005b0734(param_1,iVar6,0);
          if (iVar1 < 1) {
            iVar1 = fn_005b0bfc(param_1,iVar6,0);
joined_r0x005b0034:
            if (iVar1 < 1) goto LAB_005b0100;
          }
        }
      }
      else {
        iVar1 = fn_005b0e8c(param_1,iVar6,0);
        if ((iVar1 < 1) && (iVar1 = fn_005b0734(param_1,iVar6,0), iVar1 < 1)) {
          iVar1 = fn_005b0bfc(param_1,iVar6,0);
          goto joined_r0x005b0034;
        }
      }
      uVar3 = fn_0022f750(&DAT_005b01ac);
      uVar4 = fn_005b1104(param_1,uVar4,uVar3);
      goto LAB_005b0100;
    }
  }
  uVar3 = fn_0022f750(&DAT_005b01a4);
  uVar4 = fn_005b1104(param_1,0,uVar3);
LAB_005b0100:
  if (uVar4 < (uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2)) {
    do {
      uVar5 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
      if (uVar5 <= uVar4) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar4,uVar5);
      }
      uVar5 = uVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0xc4) + uVar4 * 4);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      uVar4 = uVar5;
    } while (uVar5 < (uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2));
  }
  return;
}



uint fn_005b0e8c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *local_2c [2];
  
  uVar5 = 0;
  iVar7 = 0;
  iVar2 = fn_00378ba8();
  if (0 < iVar2) {
    do {
      iVar2 = fn_00378bf0(iVar7);
      if (iVar2 == param_2) {
        if (param_3 != 0) {
          uVar1 = (int)uVar5 / 2;
          uVar6 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
          if (uVar6 <= uVar1) {
            fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar1,uVar6);
          }
          iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + uVar1 * 4);
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
          uVar3 = fn_00378bbc(iVar7);
          fn_002317d8(local_2c,uVar3,0);
          uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar5,uVar1);
          }
          fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + uVar5 * 4),local_2c[0]);
          uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar5,uVar1);
          }
          iVar2 = *(int *)(*(int *)(param_1 + 0xc4) + uVar5 * 4);
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
          if (local_2c[0] != &DAT_008f9cf4) {
            piVar4 = local_2c[0] + -3;
            iVar2 = *piVar4;
            if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0))))
            {
              fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
            }
          }
          uVar6 = uVar5 + 1;
          fn_00378afc(iVar7);
          uVar3 = fn_0022ff00();
          uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
          if (uVar1 <= uVar6) {
            fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
          }
          fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xc4) + uVar6 * 4),uVar3);
          uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
          if (uVar1 <= uVar6) {
            fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
          }
          iVar2 = *(int *)(*(int *)(param_1 + 0xc4) + uVar6 * 4);
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        uVar5 = uVar5 + 2;
      }
      if (5 < (int)uVar5) {
        return uVar5;
      }
      iVar7 = iVar7 + 1;
      iVar2 = fn_00378ba8();
    } while (iVar7 < iVar2);
  }
  return uVar5;
}



void fn_005af868(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0xa8) != *(short *)(*(int *)(param_1 + 0x98) + 0x1c)) {
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb0),3);
    }
    else {
      uVar2 = fn_00661770(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xb0),uVar2,0);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb4),3);
    }
    else {
      uVar2 = fn_0066178c(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xb4),uVar2,0);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb8),3);
    }
    else {
      uVar2 = fn_006612ec(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xb8),uVar2,0);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xbc),3);
    }
    else {
      uVar2 = fn_006613b4(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xbc),uVar2,0);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xc0),3);
    }
    else {
      uVar2 = fn_00661270(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xc0),uVar2,0);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bcf4(iVar3);
    if ((iVar1 == 0) && (iVar1 = fn_0028bbc0(iVar3), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xc4),3);
    }
    else {
      uVar2 = fn_006610b0(iVar3);
      fn_00688c04(*(undefined4 *)(param_1 + 0xc4),uVar2,0);
    }
    fn_005aebd8(param_1);
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bbc0(iVar3);
    if (iVar1 == 0) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xcc),8);
    }
    else {
      fn_006617a8(iVar3);
      uVar2 = fn_00231d50();
      fn_00190d50(*(undefined4 *)(param_1 + 0xcc),uVar2);
    }
    fn_005af7a0(param_1);
  }
  fn_005caba4(param_1);
  return;
}



void fn_005af7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = fn_0028bbc0((int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c));
  if (iVar1 == 0) {
    uVar2 = fn_005af614(param_1);
  }
  else {
    uVar2 = fn_005af2b4();
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x24);
  if (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2 == 0) {
    fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,0,0);
  }
  fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = *(float *)(**(int **)(param_1 + 0xd0) + 0xbc);
  iVar1 = *(int *)(param_1 + 0xe8);
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
  *(float *)(iVar1 + 0x20) = -4.0 - fVar3 * fVar4;
  *(undefined4 *)(iVar1 + 0x24) = uVar6;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  return;
}


