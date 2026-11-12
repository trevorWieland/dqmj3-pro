#include "003c2fdc_003c7128.h"



undefined4 fn_003c7128(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00896770) goto LAB_003c7174;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_003c7174:
  *(undefined4 **)(param_1 + 0x164) = puVar6;
  fn_0044a90c(param_1);
  uVar2 = fn_00292f20();
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  fn_002c330c(&local_50);
  local_50 = DAT_0089675c;
  local_4c = DAT_00896760;
  uStack_48 = 9;
  local_3c = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
  local_44 = 0;
  local_23 = 1;
  fn_00147974(&local_34,&DAT_003c7390);
  uVar2 = fn_0022f750((char *)&DAT_003c7394);
  fn_00147974(&local_28,uVar2);
  fn_002c29a0(param_1,&local_50);
  if (*(int *)(*(int *)(param_1 + 0x164) + 0x18) != 0) {
    iVar3 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
    iVar4 = fn_006e7c24(*(undefined4 *)(param_1 + 0x164));
    fn_0015b0f8(iVar4 + iVar3 + -0x1e);
    uVar2 = fn_0022f584((char *)&DAT_003c739c,0);
    fn_0068974c(param_1,uVar2,0,1);
  }
  fn_0044a864(param_1,0);
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



void fn_003c2fdc(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint local_e58;
  uint local_e54;
  undefined4 local_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  uint local_e40;
  uint uStack_e3c;
  undefined1 auStack_e38 [512];
  undefined1 auStack_c38 [2560];
  undefined1 auStack_238 [512];
  uint local_38;
  uint local_34;
  
  fn_002c4304();
  switch(*(undefined1 *)(param_1 + 0x168)) {
  case 0:
    uVar10 = 0;
    switch(*(undefined4 *)(param_1 + 0x16c)) {
    case 0:
      iVar14 = 0;
      iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
      iVar4 = 0;
      if (0 < iVar9) {
        do {
          iVar5 = fn_006be138(*(undefined4 *)(param_1 + 0x164),iVar4);
          if (iVar5 != 0) {
            iVar14 = iVar14 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar9);
      }
      iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
      fn_0015b0f8(iVar14);
      fn_0015b0f8(iVar9 - iVar14);
      uVar8 = fn_0022f584((char *)&DAT_006c7a0c,0);
      fn_0068974c(param_1,uVar8,0,1);
      *(undefined4 *)(param_1 + 0x16c) = 1;
      break;
    case 1:
      iVar9 = fn_006f6a6c(param_1);
      if (iVar9 == 1) {
        iVar4 = 0;
        iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
        iVar14 = 0;
        if (0 < iVar9) {
          do {
            iVar5 = fn_006be138(*(undefined4 *)(param_1 + 0x164),iVar14);
            if (iVar5 != 0) {
              iVar4 = iVar4 + 1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
          if (0 < iVar4) {
            fn_001f7cac(param_1,1);
            uVar8 = 2;
            goto LAB_003c247c;
          }
        }
        *(undefined4 *)(param_1 + 0x16c) = 4;
        return;
      }
      break;
    case 2:
      iVar9 = fn_006ad868(param_1,1);
      if (iVar9 != 0) {
        *(byte *)(*(int *)(param_1 + 0x70) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
        fn_001f7810(param_1,1,0);
        fn_0012a2d8(&local_e40);
        fn_00158f6c(auStack_e38,0x200);
        fn_00158f6c(auStack_c38,0xa00);
        fn_00158f6c(auStack_238,0x200);
        uVar12 = 0;
        iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
        iVar14 = 0;
        if (0 < iVar9) {
          do {
            iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x164),iVar14);
            if ((*(byte *)(iVar4 + 0xa74) & 2) != 0) {
              fn_00291a64(iVar4,&local_e58);
              uVar13 = uVar10 + (local_e58 & 0xffff) & 0xffff;
              uVar16 = uVar12 + (local_e54 & 0xffff) & 0xffff;
              uVar10 = uVar13 | ((local_e58 >> 0x10) + ((int)(uVar10 & 0xffff0000 | uVar13) >> 0x10)
                                ) * 0x10000;
              uVar12 = uVar16 | ((local_e54 >> 0x10) + ((int)(uVar12 & 0xffff0000 | uVar16) >> 0x10)
                                ) * 0x10000;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
        }
        local_e40 = uVar10;
        uStack_e3c = uVar12;
        local_38 = uVar10;
        local_34 = uVar12;
        iVar9 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
        iVar5 = 0;
        iVar14 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
        iVar4 = 0;
        if (0 < iVar14) {
          do {
            iVar3 = fn_006be138(*(undefined4 *)(param_1 + 0x164),iVar4);
            if (iVar3 != 0) {
              iVar5 = iVar5 + 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar14);
        }
        fn_002940dc((uint)*(ushort *)(iVar9 + 2) - iVar5,(uint)*(ushort *)(iVar9 + 2),&local_e50);
        cVar15 = '\0';
        iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
        iVar14 = 0;
        if (0 < iVar9) {
          do {
            iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x164),iVar14);
            if (((*(byte *)(iVar4 + 0xa74) & 2) != 0) && (iVar4 = fn_00294100(), iVar4 != 0)) {
              cVar15 = cVar15 + '\x01';
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
        }
        uStack_e48 = (uStack_e48 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(cVar15,(undefined2)uStack_e48)) & 0xffffff);
        if (cVar15 != '\0') {
          fn_0029331c(&local_e54,&local_e58);
          sVar1 = ((unsigned int)(uStack_e48) >> 16) & 0xff * (short)local_e58;
          local_e58 = CONCAT22(((unsigned int)(local_e58) >> 16) & 0xffff,sVar1);
          fn_00292f70((int)(short)local_e54,(int)sVar1,auStack_c38,0x100);
        }
        uVar10 = (uint)(cVar15 != '\0');
        iVar9 = fn_002924b0(&local_e50,auStack_c38 + uVar10 * 0x200,0x100);
        if (iVar9 != 0) {
          uVar10 = uVar10 + 1;
        }
        iVar9 = *(int *)(param_1 + 0x158);
        *(undefined4 *)(iVar9 + 0x18) = local_e50;
        *(undefined4 *)(iVar9 + 0x1c) = uStack_e4c;
        *(undefined4 *)(iVar9 + 0x20) = uStack_e48;
        iVar9 = *(int *)(param_1 + 0x160);
        fn_00301a9c(iVar9 + 8,&local_e40,0xe08);
        *(undefined1 *)(iVar9 + 0xe15) = 1;
        *(uint *)(iVar9 + 0xe18) = uVar10;
        fn_00689930(param_1,0x5b,0);
        uVar8 = 3;
LAB_003c247c:
        *(undefined4 *)(param_1 + 0x16c) = uVar8;
        return;
      }
      break;
    case 3:
      uVar10 = fn_006f6a38(param_1);
      if ((uVar10 & 0x400000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x160) + 0xe11) = 1;
      }
      if (*(char *)(*(int *)(param_1 + 0x160) + 0xe10) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x160) + 0xe10) = 0;
        iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
        iVar14 = 0;
        if (0 < iVar9) {
          do {
            iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x164),iVar14);
            iVar5 = fn_002940c0();
            bVar2 = 0;
            if (iVar5 != 0) {
              bVar2 = *(byte *)(iVar4 + 0xa74);
            }
            if ((iVar5 != 0 && (bVar2 & 2) != 0) && (*(short *)(iVar4 + 0xa72) != 0)) {
              puVar6 = (undefined4 *)fn_001f74ec(param_1,0xda);
              if (puVar6 == (undefined4 *)0x0) goto LAB_003c2548;
              puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
              goto LAB_003c2534;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
        }
        uVar8 = fn_00689b18(param_1);
        iVar9 = fn_0029226c(*(int *)(param_1 + 0x158) + 0x18,uVar8,0xd9);
        if (iVar9 == 0) {
          fn_00291da8(*(int *)(param_1 + 0x158) + 0x18);
          fn_00689930(param_1,0xe7,0);
          *(byte *)(*(int *)(param_1 + 0x70) + 0x44) =
               *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe | 1;
          local_e54 = 0xff000000;
          local_e58 = 1;
          fn_0068a524(param_1,&local_e54,10,1);
          *(undefined4 *)(param_1 + 0x16c) = 4;
          return;
        }
        goto LAB_003c2610;
      }
      break;
    case 4:
      iVar9 = fn_006ad868(param_1,1);
      if (iVar9 != 0) {
        fn_006899f4(param_1,0xd9,0);
        *(undefined1 *)(param_1 + 0x168) = 4;
        *(undefined4 *)(param_1 + 0x16c) = 0;
        return;
      }
    }
    return;
  default:
    return;
  case 2:
    iVar9 = fn_006f6a6c(param_1);
    if (iVar9 != 1) {
      return;
    }
    pcVar11 = *(code **)(param_1 + 0x174);
    if ((pcVar11 == (code *)0x0) &&
       ((*(uint *)(param_1 + 0x178) & 1) == 0 || *(uint *)(param_1 + 0x178) == 0))
    goto LAB_003c3068;
    uVar10 = *(uint *)(param_1 + 0x178);
    break;
  case 3:
    iVar9 = fn_006f6a6c(param_1);
    if (iVar9 == 0) {
      return;
    }
    if (iVar9 == 2) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined1 *)(param_1 + 0x168) = 1;
      return;
    }
    if (iVar9 != 3) {
      return;
    }
    pcVar11 = *(code **)(param_1 + 0x174);
    if ((pcVar11 == (code *)0x0) &&
       ((*(uint *)(param_1 + 0x178) & 1) == 0 || *(uint *)(param_1 + 0x178) == 0))
    goto LAB_003c3068;
    uVar10 = *(uint *)(param_1 + 0x178);
  }
  if ((uVar10 & 1) != 0) {
    pcVar11 = *(code **)(pcVar11 + *(int *)(param_1 + ((int)uVar10 >> 1)));
  }
  (*pcVar11)();
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
LAB_003c3068:
  fn_006899f4(param_1,*(undefined4 *)(param_1 + 0x170),1);
  *(undefined1 *)(param_1 + 0x168) = 4;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
  while (puVar7 = (undefined4 *)*puVar7, puVar7 != (undefined4 *)0x0) {
LAB_003c2534:
    if (puVar7 == &DAT_008968e0) goto LAB_003c254c;
  }
LAB_003c2548:
  puVar6 = (undefined4 *)0x0;
LAB_003c254c:
  iVar9 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
  iVar14 = 0;
  if (0 < iVar9) {
    do {
      iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x164),iVar14);
      iVar5 = fn_002940c0();
      bVar2 = 0;
      if (iVar5 != 0) {
        bVar2 = *(byte *)(iVar4 + 0xa74);
      }
      if ((iVar5 != 0 && (bVar2 & 2) != 0) && (*(short *)(iVar4 + 0xa72) != 0)) {
        fn_005a3044(puVar6,iVar4);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar9);
  }
  uVar8 = fn_00689b18(param_1);
  iVar9 = fn_0029226c(*(int *)(param_1 + 0x158) + 0x18,uVar8,0xda);
  if (iVar9 == 0) {
    fn_00291da8(*(int *)(param_1 + 0x158) + 0x18);
    fn_006899f4(param_1,0xda,1);
    *(undefined1 *)(param_1 + 0x168) = 4;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    return;
  }
LAB_003c2610:
  fn_001f7768(param_1,1,0);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x168) = 4;
  return;
}


