#include "0057bed8_0057ca9c.h"



void fn_0057ca6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057ca9c(iVar1,param_1);
  return;
}



void fn_0057ca9c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  fn_00154ac8(0x342);
  fn_00154ac8(0x342);
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2);
  *puVar1 = &DAT_00841d10;
  return;
}



void fn_0057c950(int *param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  int iVar2;
  
  fn_00215cb4(param_1[5],param_1 + 0x19,param_1[0x18]);
  if (*(char *)((int)param_1 + 0x65) == '\0') {
    if (*(byte *)(param_1 + 0x19) < 2) {
      return;
    }
  }
  else if ((char)param_1[0x19] == '\0') {
    return;
  }
  uVar1 = fn_00163868(0x168);
  iVar2 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0017fe34();
  param_1[7] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0057c9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,6);
  return;
}



undefined8 fn_0057c8b4(int param_1)

{
  short sVar1;
  int iVar2;
  
  fn_003b1580();
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (DAT_008913dc != -1) {
    do {
      if ((&DAT_008913dc)[iVar2 * 2] == *(short *)(*(int *)(param_1 + 0x14) + 0x16a)) {
        sVar1 = (&DAT_008913de)[iVar2 * 2];
        *(int *)(param_1 + 0x6c) = (int)sVar1;
        iVar2 = fn_00215b58(*(int *)(param_1 + 0x14),(int)(char)sVar1);
        break;
      }
      iVar2 = iVar2 + 1;
    } while ((&DAT_008913dc)[iVar2 * 2] != -1);
  }
  return CONCAT44(iVar2,1);
}



void fn_0057c72c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    fn_00215e38(*(undefined4 *)(param_1 + 0x14),(int)(char)*(int *)(param_1 + 0x6c),0);
  }
  if (param_2 == 4) {
    uVar5 = fn_00163868(2);
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    bVar1 = (int)uVar5 < 1;
    bVar4 = !bVar1;
    *(bool *)(param_1 + 0x65) = bVar1;
    uVar2 = 0;
    if (!bVar4) {
      uVar2 = *(undefined4 *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if (!bVar4) {
      iVar3 = *(int *)(param_1 + 0x6c);
    }
    if (bVar4 || iVar3 == 0) {
      fn_00215b58(*(undefined4 *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x6c));
      fn_00215b58(*(undefined4 *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x6c),
                   *(undefined4 *)(param_1 + 0x14));
    }
    else {
      fn_00215b58(*(undefined4 *)(param_1 + 0x14),(int)(char)iVar3);
      fn_00214c4c(*(undefined4 *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x6c),1);
    }
  }
  else if (param_2 == 5 || param_2 == 6) {
    *(undefined4 *)(param_1 + 0x60) = 6;
  }
  fn_003b1518(param_1,param_2);
  return;
}



void fn_0057c228(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0x94))();
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x14))
                    (param_1 + 0x2c,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    uVar5 = fn_006bb538(*(undefined4 *)(param_1 + 0x14),(int)*(short *)(param_1 + 0x3c));
    uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
    iVar2 = (int)uVar5;
    if (iVar2 != 0) {
      uVar3 = (uint)*(char *)(iVar2 + 9);
    }
    if (iVar2 == 0 || uVar3 == 0) {
      (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,0xffffffff);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x44) = uVar3 & 7 | uVar4 & 0xfffffff8;
    *(uint *)(param_1 + 0x44) =
         uVar3 & 7 | uVar4 & 0xfff80000 | (uint)*(byte *)(iVar2 + 10) << 3 |
         (*(ushort *)(param_1 + 0x3c) & 0xff) << 0xb;
    uVar3 = fn_006bb59c(*(undefined4 *)(param_1 + 0x14),
                         (int)(short)(*(ushort *)(param_1 + 0x3c) + 1));
    *(uint *)(param_1 + 0x44) = (uVar3 & 0xff) << 0x13 | *(uint *)(param_1 + 0x44) & 0xf807ffff;
    iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 0x184) + 0x34))();
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xf7ffffff | iVar2 << 0x1b;
    *(undefined4 *)(param_1 + 0x10) = 0;
    fn_002dfa14(*(undefined4 *)(param_1 + 0x14),0x11);
    bVar1 = *(byte *)(param_1 + 0x44) & 7;
    if (bVar1 == 1) {
      (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,*(short *)(param_1 + 0x3c) + 2);
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    if (bVar1 == 2) {
      (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,0xffffffff);
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



undefined4 fn_0057bed8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  iVar8 = 0;
  local_40 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  if (0 < *(int *)(*(int *)(param_1 + 0x14) + 400) - *(int *)(*(int *)(param_1 + 0x14) + 0x18c) >> 2
     ) {
    do {
      fn_006bb518(*(undefined4 *)(param_1 + 0x14),(int)(short)iVar8);
      puVar4 = local_3c;
      if (local_3c == local_38) {
        uVar1 = ((int)local_3c - (int)local_40) / 0xc;
        if (uVar1 < (uint)(((int)local_38 - (int)local_40) / 0xc)) {
          if (local_3c != (undefined4 *)0x0) {
            *local_3c = local_3c[-3];
            local_3c[1] = local_3c[-2];
            local_3c[2] = local_3c[-1];
          }
          puVar4 = local_3c + -3;
          puVar2 = local_3c;
          if (local_3c < puVar4) {
            if (0 < (int)puVar4 - (int)local_3c) {
              uVar1 = ((int)puVar4 - (int)local_3c) / 0xc;
              if ((uVar1 & 1) != 0) {
                puVar4 = local_3c + -6;
                puVar2 = local_3c + -3;
                *puVar2 = *puVar4;
                local_3c[-2] = local_3c[-5];
                local_3c[-1] = local_3c[-4];
              }
              for (iVar6 = (int)uVar1 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
                uVar7 = puVar4[-2];
                uVar10 = puVar4[-1];
                puVar2[-3] = puVar4[-3];
                puVar2[-2] = uVar7;
                puVar2[-1] = uVar10;
                uVar7 = puVar4[-5];
                uVar10 = puVar4[-4];
                puVar2[-6] = puVar4[-6];
                puVar2[-5] = uVar7;
                puVar2[-4] = uVar10;
                puVar2 = puVar2 + -6;
                puVar4 = puVar4 + -6;
              }
            }
          }
          else {
            while (local_3c != puVar4) {
              uVar7 = puVar4[-2];
              uVar10 = puVar4[-1];
              puVar2[-3] = puVar4[-3];
              puVar2[-2] = uVar7;
              puVar2[-1] = uVar10;
              puVar4 = puVar4 + -3;
              puVar2 = puVar2 + -3;
            }
          }
          *local_3c = in_s0;
          local_3c[1] = in_s1;
          local_3c[2] = in_s2;
          puVar4 = local_3c + 3;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 0x20) {
            uVar9 = uVar1 + 0x20;
          }
          uVar7 = in_s0;
          uVar10 = in_s1;
          uVar13 = in_s2;
          puVar3 = (undefined4 *)fn_00100fc6(uVar9 * 0xc,0);
          puVar2 = puVar3;
          for (puVar5 = local_40; puVar5 != puVar4; puVar5 = puVar5 + 3) {
            if (puVar2 != (undefined4 *)0x0) {
              uVar11 = puVar5[1];
              uVar12 = puVar5[2];
              *puVar2 = *puVar5;
              puVar2[1] = uVar11;
              puVar2[2] = uVar12;
            }
            puVar2 = puVar2 + 3;
          }
          puVar2 = puVar3 + (((int)puVar4 - (int)local_40) / 0xc) * 3;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = uVar7;
            puVar2[1] = uVar10;
            puVar2[2] = uVar13;
          }
          puVar2 = puVar3 + (((int)puVar4 - (int)local_40) / 0xc) * 3;
          for (; puVar4 != local_3c; puVar4 = puVar4 + 3) {
            puVar5 = puVar2 + 3;
            if (puVar5 != (undefined4 *)0x0) {
              in_s0 = *puVar4;
              in_s1 = puVar4[1];
              in_s2 = puVar4[2];
              *puVar5 = in_s0;
              puVar2[4] = in_s1;
              puVar2[5] = in_s2;
            }
            puVar2 = puVar5;
          }
          iVar6 = (int)local_3c - (int)local_40;
          puVar4 = local_40;
          if (local_3c < local_40) {
            do {
              puVar4 = puVar4 + 3;
            } while (puVar4 != local_3c);
          }
          fn_001008c4(local_40,((int)local_38 - (int)local_40) / 0xc,0);
          local_38 = puVar3 + uVar9 * 3;
          local_40 = puVar3;
          puVar4 = puVar3 + (iVar6 / 0xc) * 3 + 3;
        }
      }
      else {
        puVar4 = local_3c + 3;
        if (local_3c != (undefined4 *)0x0) {
          *local_3c = in_s0;
          local_3c[1] = in_s1;
          local_3c[2] = in_s2;
        }
      }
      local_3c = puVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*(int *)(param_1 + 0x14) + 400) -
                     *(int *)(*(int *)(param_1 + 0x14) + 0x18c) >> 2);
  }
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(param_1 + 0x2c,&local_40);
  (**(code **)(*(int *)(param_1 + 0x2c) + 0x1c))(param_1 + 0x2c,1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar4 = local_40;
  if (local_3c < local_40) {
    do {
      puVar4 = puVar4 + 3;
    } while (puVar4 != local_3c);
  }
  fn_001008c4(local_40,((int)local_38 - (int)local_40) / 0xc,0);
  return 1;
}


