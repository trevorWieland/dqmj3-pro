#include "001b0de8_001b14b8.h"



void fn_001b14b8(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  
  for (puVar1 = param_2; puVar1 < param_2 + 0xb; puVar1 = puVar1 + 1) {
    *param_1 = *puVar1 << 8 | *puVar1 >> 8;
    param_1 = param_1 + 1;
  }
  for (; puVar1 < param_2 + 0x10; puVar1 = puVar1 + 1) {
    *param_1 = *puVar1;
    param_1 = param_1 + 1;
  }
  for (; puVar1 < param_2 + 0x1b; puVar1 = puVar1 + 1) {
    *param_1 = *puVar1 << 8 | *puVar1 >> 8;
    param_1 = param_1 + 1;
  }
  for (; puVar1 < (ushort *)((param_3 & 0xfffffffe) + (int)param_2); puVar1 = puVar1 + 1) {
    *param_1 = *puVar1 << 8 | *puVar1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}



void fn_001b14a4(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = param_1;
  return;
}



int fn_001b1118(byte *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_c0 [24];
  ushort local_a8;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int aiStack_50 [8];
  int local_30;
  ushort *local_2c;
  
  iVar1 = 2;
  if (param_1 != (byte *)0x0 && param_2 != 0) {
    iVar1 = fn_00191f08(2);
    if ((iVar1 == 0) ||
       ((iVar1 = fn_00191f08(), iVar1 != 0 &&
        (iVar1 = fn_00192114(), *(char *)(iVar1 + 0xc0) != '\0')))) {
      iVar1 = 1;
    }
    else {
      iVar1 = fn_001be998(param_1,param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = fn_00191f08();
        if (iVar1 != 0) {
          iVar1 = fn_00192114();
          *(undefined1 *)(iVar1 + 0xc0) = 1;
          iVar1 = fn_00192114();
          *(undefined4 *)(iVar1 + 200) = 10;
        }
        iVar2 = fn_00191f08();
        iVar1 = (int)(param_3 + ((uint)((int)param_3 >> 0x1f) >> 0x1b)) >> 5;
        uVar8 = (int)param_3 % 0x20;
        if (((((iVar2 == 0) || (DAT_008bf51c == 0)) || (iVar2 = fn_00184c20(1), iVar2 != 0)) ||
            ((iVar2 = fn_00184c20(0), iVar2 != 0 || ((*(uint *)(DAT_008bf51c + 4) & 0x100) != 0))))
           || (param_4 == 0)) {
          *(uint *)(param_1 + iVar1 * 4 + 0x14) =
               *(uint *)(param_1 + iVar1 * 4 + 0x14) | 1 << (uVar8 & 0xff);
          iVar1 = fn_00192114();
          *(undefined1 *)(iVar1 + 0xc0) = 0;
          iVar1 = fn_00192114();
          if (*(int *)(iVar1 + 200) == 0 || *(int *)(iVar1 + 200) == 10) {
            iVar1 = fn_00192114();
            *(undefined4 *)(iVar1 + 200) = 0;
            iVar1 = fn_00192114();
            *(undefined4 *)(iVar1 + 0xcc) = 0;
          }
        }
        else {
          bVar9 = *(ushort *)(param_1 + 2) != param_3;
          uVar3 = 0;
          if (*(ushort *)(param_1 + 2) < param_3) {
            uVar3 = param_3 - 1;
            param_3 = uVar3 & 0xffff;
          }
          if (bVar9) {
            uVar3 = param_3;
          }
          iVar6 = ((uint)*param_1 * 0x60 + 0x18) * uVar3 + *(int *)(param_1 + 0x24);
          local_30 = DAT_008bf518;
          iVar2 = 0;
          local_2c = (ushort *)(DAT_008bf518 + 0x2a00);
          puVar5 = (undefined1 *)(DAT_008bf518 + 0x2a02);
          *(undefined4 *)(DAT_008bf518 + 0x2a0c) = 0;
          *local_2c = 0;
          *puVar5 = 1;
          if (*(short *)(iVar6 + 0x14) != 0) {
            do {
              if ((*(uint *)(iVar6 + ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1b)) >> 5) * 4 + 4)
                  & 1 << (iVar2 % 0x20 & 0xffU)) != 0) {
                iVar7 = iVar6 + iVar2 * 0x60;
                iVar4 = fn_001b0128(iVar7 + 0x18);
                if (((iVar4 != 0) && (iVar4 = fn_001b00cc(iVar7 + 0x24), iVar4 != 0)) &&
                   (((*(ushort *)(iVar7 + 0x48) & 1) == 0 &&
                    (iVar4 = fn_001ae8fc(0,iVar7 + 0x24), iVar4 == 0)))) {
                  if (auStack_c0 != (undefined1 *)(iVar7 + 0x18)) {
                    fn_0017821c();
                  }
                  local_a8 = local_a8 & 0xfc01;
                  fn_001bb2e4(&local_5c,&iStack_58,&iStack_54,aiStack_50,&local_64,&local_60);
                  iVar4 = local_5c + -2000;
                  if (iVar4 < 0) {
                    iVar4 = 0;
                  }
                  else if (0x7f < iVar4) {
                    iVar4 = 0x7f;
                  }
                  local_78 = iVar4 << 0x19 | iStack_58 << 0x15 | iStack_54 << 0x10 |
                             aiStack_50[0] << 0xb | local_64 << 5 | local_60 / 2;
                  local_74 = 0;
                  local_70 = 0;
                  iVar4 = local_30 + (uint)*local_2c * 0x54;
                  fn_0017821c(iVar4,auStack_c0,0x54);
                  *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xbfff;
                  *local_2c = *local_2c + 1;
                }
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)(uint)*(ushort *)(iVar6 + 0x14));
          }
          fn_001bd4bc(local_30);
          fn_001851bc();
          *(uint *)(param_1 + iVar1 * 4 + 0x14) =
               *(uint *)(param_1 + iVar1 * 4 + 0x14) | 1 << (uVar8 & 0xff);
        }
        iVar1 = fn_001851bc();
        return iVar1;
      }
    }
  }
  return iVar1;
}



void fn_001b1104(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  *(undefined4 *)(iVar1 + 0xd8) = param_1;
  return;
}



void fn_001b10e4(undefined *param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_001c1130;
  }
  *(undefined **)(iVar1 + 0xdc) = param_1;
  return;
}



undefined4 fn_001b0ee4(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar3 = fn_001b00cc(param_1 + 0x108);
  if ((iVar3 == 0) || (iVar3 = fn_001aff30(param_1 + 0x108), iVar3 != 0)) {
    bVar2 = false;
    iVar3 = fn_001afea8(param_1 + 0x118);
    if (iVar3 != 0) {
      return 0;
    }
    fn_00166824(&local_28,param_1 + 0x118);
    local_30 = 0;
    uStack_2c = 0;
    iVar3 = fn_0051eadc(local_28,uStack_24,0);
  }
  else {
    bVar2 = true;
    if (DAT_008bf50c == '\0') goto LAB_001b0fcc;
    iVar5 = *(int *)(param_1 + 0xf4);
    if (iVar5 == 0) {
      return 0;
    }
    iVar3 = fn_00454388();
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        if (iVar3 == 1) {
          return 0;
        }
      }
      else {
        if (iVar5 != 3) {
          return 0;
        }
        if (iVar3 == 2) {
          return 0;
        }
      }
      goto LAB_001b0fcc;
    }
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_001b0fcc:
  local_30 = *(undefined4 *)(param_1 + 0x108);
  uStack_2c = *(undefined4 *)(param_1 + 0x10c);
  local_28 = *(undefined4 *)(param_1 + 0x110);
  uVar1 = *(undefined1 *)(param_1 + 0xf0);
  uVar7 = *(undefined8 *)(param_1 + 0xfc);
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  uVar4 = (uint)*(byte *)(param_1 + 0x10b) % 3;
  if (*(int *)(param_1 + 0xe0) == 1) {
    uVar4 = uVar4 + 3;
  }
  iVar3 = fn_001bf140(&DAT_008e970c,uVar4);
  fn_001b1548(param_1,iVar3,1,iVar3 + 0x48);
  fn_001b97f0(param_1 + 0xb4,&DAT_007e0a30,0xb);
  if (!bVar2) {
    fn_001b97f0(param_1 + 0xca,&DAT_007e0a38,0xb);
  }
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  *(int *)(param_1 + 0xfc) = (int)uVar7;
  *(int *)(param_1 + 0x100) = (int)((ulonglong)uVar7 >> 0x20);
  fn_006f94f4(param_1 + 0x108,&local_30);
  *(int *)(param_1 + 0x118) = (int)uVar6;
  *(int *)(param_1 + 0x11c) = (int)((ulonglong)uVar6 >> 0x20);
  return 1;
}



int fn_001b0de8(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint *puVar8;
  
  iVar7 = -1;
  iVar2 = fn_00191f08();
  if (iVar2 != 0) {
    iVar2 = fn_00192114();
    if ((((iVar2 + 4 != 0) &&
         (puVar6 = (ushort *)(iVar2 + 4 + param_2 * 8), param_3 < (int)(uint)*puVar6)) &&
        (iVar3 = fn_00191f08(), iVar3 != 0)) && (iVar3 = fn_00191f08(), iVar3 != 0)) {
      iVar3 = fn_00192114();
      cVar1 = '\0';
      if (iVar3 != -4) {
        cVar1 = *(char *)(iVar3 + 0xac);
      }
      if (iVar3 != -4 && cVar1 != '\0') {
        iVar3 = *(int *)(iVar2 + 0xa8);
        iVar2 = *(int *)(puVar6 + 2) + iVar3;
        puVar8 = (uint *)(iVar2 + param_3 * 4);
        uVar5 = *puVar8;
        if ((param_2 == 0xe) && (iVar7 = fn_001afe98(), iVar7 != 0)) {
          uVar4 = puVar8[1];
        }
        else {
          if (uVar5 >> 0x16 != 0) {
            param_3 = (uVar5 >> 0x16) - 1;
            uVar5 = *(uint *)(iVar2 + param_3 * 4) & 0x3fffff;
          }
          uVar4 = *(uint *)(iVar2 + param_3 * 4 + 4) & 0x3fffff;
        }
        iVar7 = uVar4 - uVar5;
        if (param_1 != 0) {
          fn_00301a9c(param_1,iVar3 + *(int *)(puVar6 + 2) + (uint)*puVar6 * 4 + uVar5 + 4,iVar7);
        }
      }
    }
  }
  return iVar7;
}


