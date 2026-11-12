#include "00228e40_00229310.h"



void fn_00229310(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  bVar1 = false;
  iVar2 = *param_1;
  fn_001237e4(&local_38);
  local_30 = local_38;
  uStack_2c = uStack_34;
  uVar8 = *(uint *)(iVar2 + 0xb00);
  if (*(int *)(iVar2 + 0xb04) != 0 || uVar8 != 0) {
    local_38 = 0x1a;
    uVar9 = fn_00129f6c(&local_30,uVar8,0x26d694b3,0x112e0be8);
    uVar8 = (uint)((ulonglong)uVar9 >> 0x20) ^ *(uint *)(iVar2 + 0xb04);
    if ((int)uVar9 != *(int *)(iVar2 + 0xb00) || uVar8 != 0) {
      bVar1 = true;
    }
  }
  local_38 = 0x1a;
  uVar9 = fn_00129f6c(&local_30,uVar8,0x26d694b3,0x112e0be8);
  *(undefined8 *)(*param_1 + 0xb00) = uVar9;
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0xaf8) = 0;
    fn_00114248(&local_28);
    local_38 = local_28;
    uStack_34 = uStack_24;
    uVar8 = fn_0011a36c(&local_38);
    uVar3 = fn_0011a3c4(&local_38);
    iVar4 = fn_0011a314(&local_38);
    uVar5 = fn_00129e2c(&local_38);
    uVar6 = fn_00129e94(&local_38);
    uVar7 = fn_00129f00(&local_38);
    *(uint *)(*param_1 + 0xb08) = uVar8 & 0xffff | (uVar3 & 0xff) << 0x10 | iVar4 << 0x18;
    *(uint *)(*param_1 + 0xb0c) = (uVar7 & 0xff) << 0x10 | uVar5 & 0xff | (uVar6 & 0xff) << 8;
    if (*(char *)(iVar2 + 0xb18) != '\0') {
      *(undefined1 *)(iVar2 + 0xb18) = 0;
      *(undefined4 *)(iVar2 + 0xb10) = 0;
      *(undefined4 *)(iVar2 + 0xb14) = 0;
    }
  }
  return;
}



undefined4 fn_002292c4(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = fn_00229714(param_1,1);
  uVar1 = *param_2;
  uVar5 = fn_0077f194(uVar2,*param_1,100);
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  piVar3 = (int *)uVar5;
  if (piVar3 != (int *)0x0) {
    iVar4 = *piVar3;
  }
  if (piVar3 != (int *)0x0 && iVar4 != 0) {
    *(undefined1 *)(piVar3 + 2) = uVar1;
    fn_0024e8c4(piVar3,0);
  }
  return uVar2;
}



undefined4 fn_00229248(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar1 = fn_00229714(param_1,2);
  uVar8 = fn_0077f194(uVar1,*param_1,100);
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  piVar2 = (int *)uVar8;
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
  }
  if (piVar2 != (int *)0x0 && iVar4 != 0) {
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    iVar7 = param_2[4];
    piVar2[2] = *param_2;
    piVar2[3] = iVar4;
    piVar2[4] = iVar5;
    piVar2[5] = iVar6;
    piVar2[6] = iVar7;
    fn_0024e8c4(piVar2,0);
  }
  uVar3 = fn_002ea524((int)*(short *)((int)param_2 + 6));
  iVar4 = fn_00250388();
  if (iVar4 == 0) {
    fn_002508f4(uVar3,param_2[4]);
  }
  return uVar1;
}



undefined4 fn_002291a8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 in_d8;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = (int)((ulonglong)in_d8 >> 0x20);
  uVar2 = fn_00229714(param_1,3);
  iVar1 = *param_2;
  iVar5 = param_2[2];
  uVar7 = fn_0077f194(uVar2,*param_1,100);
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  piVar3 = (int *)uVar7;
  if (piVar3 != (int *)0x0) {
    iVar4 = *piVar3;
  }
  if (piVar3 != (int *)0x0 && iVar4 != 0) {
    piVar3[2] = iVar1;
    piVar3[3] = iVar6;
    piVar3[4] = iVar5;
    fn_0024e8c4(piVar3,0);
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x00228fb8) */
/* WARNING: Removing unreachable block (ram,0x00228fbc) */
/* WARNING: Removing unreachable block (ram,0x00228fc0) */
/* WARNING: Removing unreachable block (ram,0x00228fc4) */
/* WARNING: Removing unreachable block (ram,0x00228fc8) */

void fn_00228e40(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 unaff_r4;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 in_lr;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint local_28;
  
  puVar15 = (undefined4 *)0x0;
  iVar13 = 0;
  puVar7 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)0x0;
  local_28 = param_4;
  do {
    puVar4 = puVar7;
    puVar3 = puVar2;
    if ((*(int *)(*param_1 + iVar13 * 0x1c) != 0) &&
       (iVar1 = fn_0024dfa4(*param_1 + iVar13 * 0x1c), iVar1 != 0)) {
      puVar16 = (undefined4 *)(*param_1 + iVar13 * 0x1c);
      if (puVar7 == puVar15) {
        uVar14 = (int)puVar7 - (int)puVar2 >> 2;
        if (uVar14 < (uint)((int)puVar15 - (int)puVar2 >> 2)) {
          puVar2 = puVar7 + -1;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = puVar7[-1];
          }
          puVar4 = puVar7 + 1;
          puVar8 = puVar7;
          if (puVar7 < puVar2) {
            iVar1 = (int)puVar2 - (int)puVar7;
            if (0 < iVar1) {
              if (iVar1 * 0x20000000 < 0) {
                puVar2 = puVar7 + -2;
                puVar8 = puVar7 + -1;
                *puVar8 = *puVar2;
              }
              for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar8[-1] = puVar2[-1];
                puVar2 = puVar2 + -2;
                puVar8 = puVar8 + -2;
                *puVar8 = *puVar2;
              }
            }
          }
          else {
            while (puVar7 != puVar2) {
              puVar2 = puVar2 + -1;
              puVar8[-1] = *puVar2;
              puVar8 = puVar8 + -1;
            }
          }
          *puVar7 = *puVar16;
        }
        else {
          local_28 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
          if (local_28 < uVar14 + 0x20) {
            local_28 = uVar14 + 0x20;
          }
          puVar3 = (undefined4 *)fn_00100fc6(local_28 << 2,0);
          puVar8 = puVar3;
          for (puVar4 = puVar2; puVar4 != puVar7; puVar4 = puVar4 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar4;
            }
            puVar8 = puVar8 + 1;
          }
          puVar4 = (undefined4 *)(((int)puVar7 - (int)puVar2 & 0xfffffffcU) + (int)puVar3);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar16;
          }
          puVar4 = puVar2;
          if (puVar7 <= puVar2) {
            for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
            }
          }
          fn_001008c4(puVar2,(int)puVar15 - (int)puVar2 >> 2,0);
          puVar4 = puVar3 + ((int)puVar7 - (int)puVar2 >> 2) + 1;
          puVar15 = puVar3 + local_28;
        }
      }
      else {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar16;
        }
        puVar4 = puVar7 + 1;
      }
    }
    iVar13 = iVar13 + 1;
    puVar7 = puVar4;
    puVar2 = puVar3;
  } while (iVar13 < 100);
  uVar14 = 0;
  if ((int)puVar4 - (int)puVar3 >> 2 != 0) {
    do {
      iVar13 = *param_1;
      piVar5 = (int *)fn_0077f194(puVar3[uVar14],iVar13,100);
      if (piVar5 != (int *)0x0) {
        if (*piVar5 != 0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          piVar5[5] = 0;
          piVar5[6] = 0;
        }
        fn_007af2a4(iVar13,(uint *)(iVar13 + 0xaf0),100,2000);
        fn_007a53b4(iVar13,iVar13 + 0x1c0);
        for (puVar11 = (uint *)(iVar13 + 0x1c0); puVar11 != (uint *)(iVar13 + 0xaf0);
            puVar11 = puVar11 + 7) {
          uVar12 = *puVar11;
          uVar17 = puVar11[1];
          uVar18 = puVar11[2];
          uVar19 = puVar11[3];
          uVar20 = puVar11[4];
          uVar21 = puVar11[5];
          uVar22 = puVar11[6];
          puVar6 = puVar11 + -7;
          puVar10 = puVar11;
          if ((uVar12 != 0) &&
             ((puVar9 = puVar11, *puVar6 == 0 || (uVar12 != 0 && uVar12 < *puVar6)))) {
            do {
              puVar10 = puVar6;
              uVar23 = puVar10[1];
              uVar24 = puVar10[2];
              uVar25 = puVar10[3];
              uVar26 = puVar10[4];
              uVar27 = puVar10[5];
              uVar28 = puVar10[6];
              *puVar9 = *puVar10;
              puVar9[1] = uVar23;
              puVar9[2] = uVar24;
              puVar9[3] = uVar25;
              puVar9[4] = uVar26;
              puVar9[5] = uVar27;
              puVar9[6] = uVar28;
              puVar6 = puVar10 + -7;
              if (uVar12 == 0) break;
              puVar9 = puVar10;
            } while ((*puVar6 == 0) || (uVar12 != 0 && uVar12 < *puVar6));
          }
          *puVar10 = uVar12;
          puVar10[1] = uVar17;
          puVar10[2] = uVar18;
          puVar10[3] = uVar19;
          puVar10[4] = uVar20;
          puVar10[5] = uVar21;
          puVar10[6] = uVar22;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)((int)puVar4 - (int)puVar3 >> 2));
  }
  puVar7 = puVar3;
  if (puVar4 < puVar3) {
    do {
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
  }
  fn_002feef8(puVar3,(int)puVar15 - (int)puVar3 >> 2,0,local_28,unaff_r4,in_lr);
  return;
}


