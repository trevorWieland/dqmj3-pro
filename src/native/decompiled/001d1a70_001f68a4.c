#include "001d1a70_001f68a4.h"



void fn_001f68a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  do {
    if (piVar2 == (int *)(param_1 + 8)) {
      iVar1 = 0;
code_r0x001f68d4:
      fn_00148b94(param_1,iVar1);
      return;
    }
    if (piVar2[-4] == param_2) {
      iVar1 = (int)(piVar2 + -4);
      goto code_r0x001f68d4;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



void fn_001f5bac(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  piVar7 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
  if ((piVar7 != (int *)0x0) && (cVar1 = (char)piVar7[0x37], param_3 != 0)) {
    if (cVar1 == '\0') {
      pcVar4 = (char *)&DAT_007c1254;
      uVar5 = 0x39;
    }
    else if (cVar1 == '\x02') {
      pcVar4 = (char *)&DAT_007c1ca4;
      uVar5 = 10;
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      pcVar4 = (char *)&DAT_007c1254;
      uVar5 = 0x35;
    }
    uVar3 = uVar5 & 1;
    iVar6 = 0;
    if (uVar3 != 0) {
      do {
        iVar2 = fn_003035b0(pcVar4 + iVar6 * 0x18,param_3);
        if (iVar2 == 0) {
          iVar6 = *(int *)(pcVar4 + iVar6 * 0x18 + 0x14);
          goto LAB_001f5ccc;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar3);
    }
    if (uVar3 < uVar5) {
      while( true ) {
        iVar6 = fn_003035b0(pcVar4 + uVar3 * 0x18,param_3);
        if (iVar6 == 0) {
          iVar6 = *(int *)(pcVar4 + uVar3 * 0x18 + 0x14);
          goto LAB_001f5ccc;
        }
        iVar6 = fn_003035b0(pcVar4 + uVar3 * 0x18 + 0x18,param_3);
        if (iVar6 == 0) break;
        uVar3 = uVar3 + 2;
        if (uVar5 <= uVar3) {
          return;
        }
      }
      iVar6 = *(int *)(pcVar4 + uVar3 * 0x18 + 0x2c);
LAB_001f5ccc:
      if (iVar6 != -1) {
                    /* WARNING: Could not recover jumptable at 0x001f5cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar7 + 0x44))(piVar7,iVar6,param_4,0);
        return;
      }
    }
  }
  return;
}



void fn_001f41d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  int local_18;
  char local_14 [4];
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    (**(code **)(*DAT_00897894 + 0x2c))(DAT_00897894,&local_20,2,0xffff);
    uVar3 = 0;
    if ((int)(local_1c - local_20) >> 2 != 0) {
      do {
        uVar4 = *(uint *)(local_20 + uVar3 * 4);
        uVar2 = fn_00227c98();
        if (((uVar4 <= uVar2) &&
            (iVar1 = (**(code **)(*DAT_00897894 + 0x38))
                               (DAT_00897894,local_14,*(undefined4 *)(local_20 + uVar3 * 4)),
            iVar1 != 0)) && (local_14[0] == '\0')) {
          (**(code **)(*DAT_00897894 + 0x3c))(DAT_00897894,*(undefined4 *)(local_20 + uVar3 * 4),1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)((int)(local_1c - local_20) >> 2));
    }
    fn_00682a8c();
  }
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 2,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001d0470) */
/* WARNING: Removing unreachable block (ram,0x001d0478) */
/* WARNING: Removing unreachable block (ram,0x001d0484) */

void fn_001d1a70(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 ***pppuVar15;
  undefined2 *puVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  short *psVar20;
  uint uVar21;
  undefined4 **ppuVar22;
  int *piVar23;
  bool bVar24;
  int *piStack_6c;
  uint uStack_60;
  int *piStack_5c;
  undefined4 *apuStack_54 [2];
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined4 **appuStack_40 [3];
  undefined4 **appuStack_34 [2];
  uint auStack_2c [3];
  
  iVar11 = fn_00174828(DAT_008977e4);
  for (iVar18 = param_2; iVar18 < param_3; iVar18 = (int)(char)((char)iVar18 + '\x01')) {
    iVar12 = iVar11 + iVar18 * 0x418;
    psVar20 = (short *)(iVar12 + -0x4080);
    if ((((psVar20 != (short *)0x0) && (iVar13 = fn_001a46f4((int)*psVar20), iVar13 != 0)) &&
        (iVar13 = fn_0015b064((int)*psVar20), iVar13 != 0)) &&
       (iVar14 = fn_00100b58(), iVar14 + 1U < 0xd)) {
      fn_001003e0(iVar12 + -0x407c,iVar13);
    }
  }
  iVar18 = fn_00174828(DAT_008977e4);
  piVar19 = (int *)0x0;
  piStack_6c = (int *)0x0;
  piVar10 = (int *)0x0;
  do {
    piVar8 = piVar19;
    if (param_3 <= param_2) {
      for (; piVar8 != piVar10; piVar8 = piVar8 + 1) {
        if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
          piVar23 = (undefined4 *)*piVar8 + -3;
          iVar18 = *piVar23;
          if ((iVar18 == -1) ||
             ((piVar23 != &DAT_008f9ce8 && (*piVar23 = iVar18 + -1, iVar18 == 0)))) {
            fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
          }
        }
      }
      fn_002feef8(piVar19,(int)piStack_6c - (int)piVar19 >> 2,0);
      return;
    }
    iVar11 = iVar18 + param_2 * 0x418;
    piStack_5c = (int *)(iVar11 + -0x4080);
    bVar24 = piStack_5c == (int *)0x0;
    sVar3 = 0;
    if (!bVar24) {
      sVar3 = *(short *)piStack_5c;
    }
    piVar8 = piVar10;
    if ((!bVar24 && sVar3 != 0) && sVar3 < 0 == (bVar24 && SBORROW4(iVar11 + 0x3f80,0x8000))) {
      uStack_4c = iVar11 - 0x407c;
      ppuVar4 = (undefined4 **)fn_00100b58();
      puVar5 = &DAT_008f9cf4;
      if (ppuVar4 != (undefined4 **)0x0) {
        pppuVar15 = appuStack_40;
        if ((undefined4 **)0x20 < ppuVar4) {
          pppuVar15 = appuStack_34;
        }
        appuStack_34[0] = ppuVar4;
        appuStack_40[0] = (undefined4 **)&DAT_00000020;
        ppuVar22 = *pppuVar15;
        if ((undefined4 **)0xfffffff1 < ppuVar22) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,ppuVar22,0xfffffff1);
        }
        if (ppuVar22 < ppuVar4) {
          fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,ppuVar4,ppuVar22);
        }
        if (ppuVar22 == (undefined4 **)0x0) {
          puVar5 = &DAT_008f9ce8;
        }
        else {
          puVar5 = (undefined4 *)fn_00100fc6((int)(ppuVar22 + 2) * 2,0);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
          }
          puVar16 = (undefined2 *)((int)puVar5 + (int)ppuVar4 * 2 + 0xc);
          *puVar5 = 0;
          puVar5[1] = ppuVar22;
          puVar5[2] = ppuVar4;
          if (puVar16 != (undefined2 *)0x0) {
            *puVar16 = 0;
          }
        }
        puVar5 = puVar5 + 3;
      }
      apuStack_54[0] = puVar5;
      fn_00301a9c(puVar5,uStack_4c,(int)ppuVar4 << 1);
      appuStack_34[0] = (undefined4 **)0x1;
      uVar21 = 0;
      if ((int)piVar10 - (int)piVar19 >> 2 == 0) {
code_r0x001d022c:
        appuStack_34[0] = (undefined4 **)0x0;
        cVar1 = (char)param_2;
        while( true ) {
          cVar1 = cVar1 + '\x01';
          if (param_3 <= cVar1) break;
          iVar13 = iVar18 + cVar1 * 0x418;
          bVar24 = (short *)(iVar13 + -0x4080) == (short *)0x0;
          iVar11 = 0;
          iVar12 = iVar13;
          if (!bVar24) {
            iVar11 = (int)*(short *)(iVar13 + -0x4080);
            iVar12 = iVar11;
          }
          if ((!bVar24 && iVar12 != 0) && iVar11 < 0 == (bVar24 && SBORROW4(iVar13 + -0x4000,0x80)))
          {
            iStack_44 = iVar13 + -0x407c;
            uVar21 = apuStack_54[0][-1];
            uStack_48 = fn_00100b58();
            if ((uint)apuStack_54[0][-1] < uVar21) {
              uVar21 = apuStack_54[0][-1];
            }
            uVar6 = fn_001006de(apuStack_54[0],iStack_44);
            uVar2 = uVar6;
            if (uVar6 == 0) {
              uVar2 = uStack_48;
            }
            if (uVar6 == 0 && uVar21 == uVar2) {
              if (0xc < apuStack_54[0][-1] + 2) break;
              uVar7 = fn_0022f750((&PTR_s_suffixA_007ba814)[(int)appuStack_34[0]]);
              if (appuStack_34[0] == (undefined4 **)0x0) {
                fn_0010313a(piStack_5c + 1,uVar7);
                appuStack_34[0] = (undefined4 **)0x1;
              }
              uVar7 = fn_0022f750((&PTR_s_suffixA_007ba814)[(int)appuStack_34[0]]);
              fn_0010313a(iVar13 + -0x407c,uVar7);
              appuStack_34[0] = (undefined4 **)((int)appuStack_34[0] + 1);
            }
          }
        }
        if (piVar10 == piStack_6c) {
          appuStack_40[0] = apuStack_54;
          uVar21 = (int)piVar10 - (int)piVar19 >> 2;
          if (uVar21 < (uint)((int)piStack_6c - (int)piVar19 >> 2)) {
            piVar8 = piVar10 + 1;
            piVar23 = piVar10;
            piVar9 = piVar10;
            if (piVar10 != (int *)0x0) {
              fn_00785420(piVar10,piVar10 + -1);
            }
            for (; piVar10 != piVar9 + -1; piVar9 = piVar9 + -1) {
              fn_007854f8(piVar23 + -1);
              piVar23 = piVar23 + -1;
            }
            fn_007854f8(piVar10,appuStack_40[0]);
          }
          else {
            uStack_4c = uVar21 + (uVar21 >> 1) + (uVar21 >> 3);
            if (uStack_4c < uVar21 + 0x20) {
              uStack_4c = uVar21 + 0x20;
            }
            piVar8 = (int *)fn_00100fc6(uStack_4c << 2,0);
            piStack_5c = piVar8;
            for (piVar23 = piVar19; piVar23 != piVar10; piVar23 = piVar23 + 1) {
              if (piVar8 != (int *)0x0) {
                fn_00785420(piVar8,piVar23);
              }
              piVar8 = piVar8 + 1;
            }
            iVar11 = (int)piStack_5c + ((int)piVar10 - (int)piVar19 & 0xfffffffcU);
            if (iVar11 != 0) {
              fn_00785420(iVar11,appuStack_40[0]);
            }
            bVar24 = piVar19 != piVar10;
            if (bVar24) {
              piVar8 = &DAT_008f9ce8;
            }
            piVar23 = piVar19;
            while (bVar24) {
              if ((undefined4 *)*piVar23 != &DAT_008f9cf4) {
                piVar9 = (undefined4 *)*piVar23 + -3;
                iVar11 = *piVar9;
                if ((iVar11 == -1) || ((piVar9 != piVar8 && (*piVar9 = iVar11 + -1, iVar11 == 0))))
                {
                  fn_001008c4(*piVar23 + -0xc,*(int *)(*piVar23 + -8) + 8,0);
                }
              }
              piVar23 = piVar23 + 1;
              bVar24 = piVar23 != piVar10;
            }
            fn_001008c4(piVar19,(int)piStack_6c - (int)piVar19 >> 2,0);
            piVar8 = piStack_5c + ((int)piVar10 - (int)piVar19 >> 2) + 1;
            piStack_6c = piStack_5c + uStack_4c;
            piVar19 = piStack_5c;
          }
        }
        else {
          piVar8 = piVar10 + 1;
          if (piVar10 != (int *)0x0) {
            fn_00785420(piVar10,apuStack_54);
          }
        }
      }
      else {
        do {
          piVar23 = piVar19 + uVar21;
          if (*(int *)(*piVar23 + -4) == apuStack_54[0][-1]) {
            uStack_60 = *(uint *)(*piVar23 + -4);
            auStack_2c[0] = apuStack_54[0][-1];
            puVar17 = auStack_2c;
            if (uStack_60 <= (uint)apuStack_54[0][-1]) {
              puVar17 = &uStack_60;
            }
            iVar11 = fn_001006de(*piVar23,apuStack_54[0],*puVar17);
            if ((iVar11 == 0) && (*(int *)(*piVar23 + -4) == apuStack_54[0][-1])) {
              appuStack_34[0] = (undefined4 **)0x0;
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)((int)piVar10 - (int)piVar19 >> 2));
        if (appuStack_34[0] != (undefined4 **)0x0) goto code_r0x001d022c;
      }
      if (apuStack_54[0] != &DAT_008f9cf4) {
        piVar10 = apuStack_54[0] + -3;
        iVar11 = *piVar10;
        if ((iVar11 == -1) || ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar11 + -1, iVar11 == 0))))
        {
          fn_001008c4(apuStack_54[0] + -3,apuStack_54[0][-2] + 8,0);
        }
      }
    }
    param_2 = (int)(char)((char)param_2 + '\x01');
    piVar10 = piVar8;
  } while( true );
}


