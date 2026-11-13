#include "00313ee8_003145c8.h"



/* WARNING: Type propagation algorithm not settling */

undefined4 fn_00313ee8(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_11c [236];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  bVar14 = false;
  fn_0017821c(auStack_11c,param_1);
  fn_002d7624(auStack_30,auStack_11c);
  uVar5 = *(uint *)(DAT_008923b4 + *(short *)(param_1 + 0x1c) * 4);
  if (uVar5 == 0) {
    uVar5 = fn_00339f84(*(undefined4 *)(DAT_00892460 + 0xc));
  }
  uVar6 = fn_00315100(param_1);
  uVar7 = fn_00314450(param_1);
  if (uVar5 == 0) {
    uVar5 = uVar6 ^ uVar7;
    iVar8 = fn_003153ac();
    if (iVar8 == 0) {
      return 1;
    }
    iVar8 = (int)*(short *)(param_1 + 0x1c);
    if (((*(int *)(DAT_008923b4 + iVar8 * 4) == 0) &&
        (iVar9 = fn_00339f84(*(undefined4 *)(DAT_00892460 + 0xc)), iVar9 == 0)) &&
       (iVar9 = fn_003153ac(iVar8,uVar5), iVar9 != 0)) {
      fn_0033a00c(*(undefined4 *)(DAT_00892460 + 0xc),iVar8);
    }
  }
  uVar10 = uVar6 ^ uVar7;
  bVar13 = uVar10 == uVar5;
  if (bVar13) {
    uVar10 = uVar6 ^ uVar5;
  }
  if (!bVar13 || uVar10 != uVar7) {
    return 1;
  }
  iVar8 = fn_0020b074((int)*(short *)(param_1 + 0x1c));
  if (iVar8 == 0) {
    return 1;
  }
  iVar8 = fn_0020b264((int)*(short *)(param_1 + 0x1c));
  if (iVar8 == 0) {
    return 1;
  }
  if (100 < *(byte *)(param_1 + 0x3c)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x2e) == '\0') {
    return 1;
  }
  uVar5 = fn_002fab9c();
  if (uVar5 < *(byte *)(param_1 + 0x2e)) {
    return 1;
  }
  uVar4 = fn_0020b198((int)*(short *)(param_1 + 0x1c));
  iVar8 = fn_002fab74(*(undefined1 *)(param_1 + 0x2e),uVar4);
  if (*(int *)(param_1 + 0x30) < iVar8) {
    return 1;
  }
  if (*(byte *)(param_1 + 0x2e) < 100) {
    uVar4 = fn_0020b198((int)*(short *)(param_1 + 0x1c));
    iVar8 = fn_002fab74(*(char *)(param_1 + 0x2e) + '\x01',uVar4);
    if (iVar8 < *(int *)(param_1 + 0x30)) {
      return 1;
    }
    uVar5 = fn_002fab9c(*(undefined1 *)(param_1 + 0x3c));
    if ((uVar5 != *(byte *)(param_1 + 0x2e)) && (*(int *)(param_1 + 0x30) == iVar8)) {
      return 1;
    }
  }
  if (*(short *)(param_1 + 0x22) < 1) {
    return 1;
  }
  iVar9 = fn_006c6ab4(auStack_2c);
  iVar12 = (int)*(short *)(param_1 + 0x22);
  iVar8 = iVar9;
  if (iVar12 <= iVar9) {
    iVar8 = (int)*(short *)(param_1 + 0x24);
  }
  iVar3 = iVar9 - iVar12;
  if (iVar9 >= iVar12) {
    iVar3 = iVar8;
  }
  if (iVar3 < 0 != (iVar9 < iVar12 && SBORROW4(iVar9,iVar12))) {
    return 1;
  }
  iVar8 = fn_006c6b94(auStack_2c);
  if (iVar8 < *(short *)(param_1 + 0x24)) {
    return 1;
  }
  iVar8 = fn_0060c6d4(auStack_11c);
  if ((iVar8 < *(short *)(param_1 + 0x1e)) || (*(short *)(param_1 + 0x1e) < 1)) {
    bVar14 = true;
  }
  iVar8 = fn_002d7314(auStack_11c);
  if ((iVar8 < *(short *)(param_1 + 0x20)) || (*(short *)(param_1 + 0x20) < 1)) {
    bVar14 = true;
  }
  iVar8 = fn_002d75fc(auStack_11c);
  if ((iVar8 < *(short *)(param_1 + 0x26)) || (*(short *)(param_1 + 0x26) < 1)) {
    bVar14 = true;
  }
  iVar8 = fn_002d7604(auStack_11c);
  if ((iVar8 < *(short *)(param_1 + 0x28)) || (*(short *)(param_1 + 0x28) < 1)) {
    bVar14 = true;
  }
  iVar8 = fn_002d75f4(auStack_11c);
  if ((iVar8 < *(short *)(param_1 + 0x2a)) || (*(short *)(param_1 + 0x2a) < 1)) {
    bVar14 = true;
  }
  iVar9 = fn_002d74dc(auStack_11c);
  iVar12 = (int)*(short *)(param_1 + 0x2c);
  bVar15 = SBORROW4(iVar9,iVar12);
  iVar8 = iVar9 - iVar12;
  bVar13 = iVar9 == iVar12;
  if (iVar12 <= iVar9) {
    bVar15 = SBORROW4(iVar12,1);
    iVar8 = iVar12 + -1;
    bVar13 = iVar12 == 1;
  }
  if (iVar8 < 0 == bVar15) {
    bVar13 = !bVar14;
  }
  if (!bVar13) {
    return 1;
  }
  iVar8 = fn_006c617c(auStack_2c);
  iVar9 = fn_002d6d34(auStack_11c);
  if (iVar9 < iVar8) {
    return 1;
  }
  iVar8 = 0;
  do {
    iVar12 = param_1 + iVar8 * 4;
    sVar1 = *(short *)(iVar12 + 0x56);
    iVar9 = 0;
    if (sVar1 != 0) {
      iVar12 = iVar8 + 1;
      iVar9 = iVar8 + -5;
    }
    if (iVar9 < 0 != (sVar1 != 0 && SBORROW4(iVar12,6))) {
      do {
        sVar2 = *(short *)(param_1 + iVar12 * 4 + 0x56);
        if ((sVar2 != 0) && (sVar2 == sVar1)) {
          return 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 6);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  sVar1 = *(short *)(param_1 + 0x56);
  bVar14 = sVar1 == 0;
  if (bVar14) {
    sVar1 = *(short *)(param_1 + 0x5a);
  }
  if (bVar14 && sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 0x5e);
    bVar14 = sVar1 == 0;
    if (bVar14) {
      sVar1 = *(short *)(param_1 + 0x62);
    }
    if (bVar14 && sVar1 == 0) {
      sVar1 = *(short *)(param_1 + 0x66);
      bVar14 = sVar1 == 0;
      if (bVar14) {
        sVar1 = *(short *)(param_1 + 0x6a);
      }
      if (bVar14 && sVar1 == 0) {
        return 1;
      }
    }
  }
  iVar8 = 0;
  do {
    iVar9 = iVar8 * 4;
    iVar8 = iVar8 + 1;
    if (*(short *)(param_1 + iVar9 + 0x56) == 0) goto joined_r0x003142dc;
  } while (iVar8 < 6);
LAB_003142a0:
  iVar8 = 0;
  do {
    iVar9 = param_1 + iVar8 * 4;
    if ((*(short *)(iVar9 + 0x56) != 0) &&
       (uVar5 = fn_002395f8(), uVar5 < *(ushort *)(iVar9 + 0x58))) {
      return 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  uVar11 = fn_006c6a38(auStack_2c);
  iVar8 = fn_003149fc(param_1,uVar11);
  if ((iVar8 == 0) &&
     (((iVar8 = fn_002d6e84((int)*(short *)(param_1 + 0x1c)), iVar8 != 0 ||
       (((iVar8 = fn_003145c8((int)*(short *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0x8c),
                               *(undefined1 *)(param_1 + 0xaa),(int)*(short *)(param_1 + 0xa6),
                               (int)*(short *)(param_1 + 0xa8),(int)*(short *)(param_1 + 0xac),
                               *(undefined1 *)(param_1 + 0xca),(int)*(short *)(param_1 + 0xc6),
                               (int)*(short *)(param_1 + 200)), iVar8 != 0 &&
         ((*(short *)(param_1 + 0x8c) != 0 ||
          (iVar8 = fn_003145c8(0,(int)*(short *)(param_1 + 0xa6),0,0,0,
                                (int)*(short *)(param_1 + 0xa8),0,0,0), iVar8 != 0)))) &&
        ((*(short *)(param_1 + 0xac) != 0 ||
         (iVar8 = fn_003145c8(0,(int)*(short *)(param_1 + 0xc6),0,0,0,
                               (int)*(short *)(param_1 + 200),0,0,0), iVar8 != 0)))))) &&
      ((*(int *)(param_1 + 0xdc) == 0 ||
       ((iVar8 = fn_00313d50(param_1 + 0xdc), iVar8 == 0 &&
        (iVar8 = fn_003151b0(param_1 + 0xdc), iVar8 == 0)))))))) {
    return 0;
  }
  return 1;
joined_r0x003142dc:
  for (; iVar8 < 6; iVar8 = iVar8 + 1) {
    if (*(short *)(param_1 + iVar8 * 4 + 0x56) != 0) {
      return 1;
    }
  }
  goto LAB_003142a0;
}



undefined4
fn_003145c8(uint param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_b4 [16];
  ushort local_a4;
  undefined1 auStack_a0 [16];
  ushort local_90;
  undefined1 auStack_8c [16];
  ushort local_7c;
  ushort local_68;
  ushort local_54;
  short local_50 [4];
  uint local_48;
  uint local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  uStack_34 = param_1;
  if (param_2 == 0) {
    if (param_9 == 0 && (((param_6 == 0 && param_4 == 0) && param_5 == 0) && param_8 == 0)) {
      return 1;
    }
  }
  else if (param_6 == 0) {
    if (param_9 == 0 && (((param_4 == 0 && param_2 == 0) && param_5 == 0) && param_8 == 0)) {
      return 1;
    }
  }
  else {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 0;
      }
    }
    else if (param_5 == 0) {
      return 0;
    }
    if (param_8 == 0) {
      if (param_9 == 0) goto LAB_00314620;
    }
    else if (param_9 != 0) {
LAB_00314620:
      uVar4 = 0;
      iVar3 = 0;
      local_44 = param_2 & 0xffff;
      local_48 = param_6 & 0xffff;
      local_50[0] = 0;
      local_50[1] = 0x19;
      local_50[2] = 0x32;
      local_50[3] = 100;
      do {
        if (param_3 != 0) {
          uVar1 = param_3 - 1;
          goto LAB_003146d4;
        }
        while( true ) {
          uVar1 = (uint)local_50[uVar4];
LAB_003146d4:
          if (param_7 == 0) {
            uVar2 = (uint)local_50[iVar3];
          }
          else {
            uVar2 = param_7 - 1;
          }
          fn_00301f50(auStack_b4,100);
          local_68 = (ushort)local_44;
          local_54 = (ushort)local_48;
          fn_002d74e4(auStack_b4,auStack_a0,auStack_8c,local_30,param_6,uVar1 & 0xff,uVar2 & 0xff);
          uVar1 = (uint)local_a4;
          bVar5 = uVar1 == param_1;
          if (!bVar5) {
            uVar1 = (uint)local_90;
          }
          if (bVar5 || uVar1 == param_1) {
            return 1;
          }
          uVar1 = (uint)local_7c;
          bVar5 = uVar1 == param_1;
          if (!bVar5) {
            uVar1 = (uint)local_68;
          }
          bVar6 = uVar1 == param_1;
          if (!bVar5 && !bVar6) {
            uVar1 = (uint)local_54;
          }
          if ((bVar5 || bVar6) || uVar1 == param_1) {
            return 1;
          }
          if ((param_7 == 0) && (iVar3 = iVar3 + 1, iVar3 < 4)) break;
          if ((param_3 != 0) || (uVar4 = uVar4 + 1, 3 < uVar4)) {
            local_40 = (undefined2)local_28;
            local_3e = (undefined2)param_5;
            local_3c = (undefined2)param_8;
            local_3a = (undefined2)param_9;
            uVar4 = fn_002d7398(&local_40);
            if (param_1 == uVar4) {
              return 1;
            }
            return 0;
          }
          iVar3 = 0;
        }
      } while( true );
    }
  }
  return 0;
}


