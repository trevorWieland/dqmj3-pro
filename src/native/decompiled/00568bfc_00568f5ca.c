#include "00568bfc_00568f5ca.h"



void fn_00568ca0(undefined4 param_1,uint *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  
  iVar9 = 1;
  iVar2 = fn_006616e0();
  if (1 < iVar2) {
    do {
      sVar1 = (short)iVar9;
      iVar2 = fn_0028bc24();
      if ((iVar2 != 0) && (iVar2 = fn_00227328((int)sVar1), iVar2 == param_3)) {
        psVar10 = (short *)param_2[1];
        if (psVar10 == (short *)param_2[2]) {
          uVar5 = (int)((int)psVar10 - *param_2) >> 1;
          if (uVar5 < (uint)((int)((int)param_2[2] - *param_2) >> 1)) {
            param_2[1] = (uint)(psVar10 + 1);
            if (psVar10 != (short *)0x0) {
              *psVar10 = psVar10[-1];
            }
            psVar6 = psVar10 + -1;
            psVar7 = psVar10;
            if (psVar10 < psVar6) {
              iVar2 = (int)psVar6 - (int)psVar10;
              if (0 < iVar2) {
                if (iVar2 * 0x40000000 < 0) {
                  psVar6 = psVar10 + -2;
                  psVar7 = psVar10 + -1;
                  *psVar7 = *psVar6;
                }
                for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                  psVar7[-1] = psVar6[-1];
                  psVar6 = psVar6 + -2;
                  psVar7 = psVar7 + -2;
                  *psVar7 = *psVar6;
                }
              }
            }
            else {
              while (psVar10 != psVar6) {
                psVar6 = psVar6 + -1;
                psVar7[-1] = *psVar6;
                psVar7 = psVar7 + -1;
              }
            }
            *psVar10 = sVar1;
          }
          else {
            uVar11 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar11 < uVar5 + 0x20) {
              uVar11 = uVar5 + 0x20;
            }
            psVar3 = (short *)fn_00100fc6(uVar11 << 1,0);
            psVar7 = psVar3;
            for (psVar6 = (short *)*param_2; psVar6 != psVar10; psVar6 = psVar6 + 1) {
              if (psVar7 != (short *)0x0) {
                *psVar7 = *psVar6;
              }
              psVar7 = psVar7 + 1;
            }
            psVar6 = (short *)(((int)psVar10 - *param_2 & 0xfffffffe) + (int)psVar3);
            if (psVar6 != (short *)0x0) {
              *psVar6 = sVar1;
            }
            psVar7 = (short *)param_2[1];
            psVar6 = (short *)(((int)psVar10 - *param_2 & 0xfffffffe) + (int)psVar3);
            for (; psVar10 != psVar7; psVar10 = psVar10 + 1) {
              psVar6 = psVar6 + 1;
              if (psVar6 != (short *)0x0) {
                *psVar6 = *psVar10;
              }
            }
            uVar4 = *param_2;
            uVar8 = param_2[1];
            uVar5 = uVar4;
            if (uVar8 < uVar4) {
              do {
                uVar5 = uVar5 + 2;
              } while (uVar5 != uVar8);
            }
            fn_001008c4(uVar4,(int)(param_2[2] - uVar4) >> 1,0);
            param_2[2] = (uint)(psVar3 + uVar11);
            param_2[1] = (uint)(psVar3 + ((int)(uVar8 - uVar4) >> 1) + 1);
            *param_2 = (uint)psVar3;
          }
        }
        else {
          param_2[1] = (uint)(psVar10 + 1);
          if (psVar10 != (short *)0x0) {
            *psVar10 = sVar1;
          }
        }
      }
      iVar9 = (int)(short)(sVar1 + 1);
      iVar2 = fn_006616e0();
    } while (iVar9 < iVar2);
  }
  fn_0022de40(param_2,6);
  return;
}



void fn_00568c64(undefined4 param_1,uint *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  
  iVar2 = fn_0025be70(param_3);
  if (iVar2 != 4) {
    fn_0022db74();
    return;
  }
  iVar9 = 1;
  iVar2 = fn_006616e0(param_1);
  if (1 < iVar2) {
    do {
      sVar1 = (short)iVar9;
      iVar2 = fn_0028bc24();
      if ((iVar2 != 0) && (iVar2 = fn_00227328((int)sVar1), iVar2 == param_3)) {
        psVar10 = (short *)param_2[1];
        if (psVar10 == (short *)param_2[2]) {
          uVar5 = (int)((int)psVar10 - *param_2) >> 1;
          if (uVar5 < (uint)((int)((int)param_2[2] - *param_2) >> 1)) {
            param_2[1] = (uint)(psVar10 + 1);
            if (psVar10 != (short *)0x0) {
              *psVar10 = psVar10[-1];
            }
            psVar6 = psVar10 + -1;
            psVar7 = psVar10;
            if (psVar10 < psVar6) {
              iVar2 = (int)psVar6 - (int)psVar10;
              if (0 < iVar2) {
                if (iVar2 * 0x40000000 < 0) {
                  psVar6 = psVar10 + -2;
                  psVar7 = psVar10 + -1;
                  *psVar7 = *psVar6;
                }
                for (iVar2 = iVar2 >> 2; iVar2 != 0; iVar2 = iVar2 + -1) {
                  psVar7[-1] = psVar6[-1];
                  psVar6 = psVar6 + -2;
                  psVar7 = psVar7 + -2;
                  *psVar7 = *psVar6;
                }
              }
            }
            else {
              while (psVar10 != psVar6) {
                psVar6 = psVar6 + -1;
                psVar7[-1] = *psVar6;
                psVar7 = psVar7 + -1;
              }
            }
            *psVar10 = sVar1;
          }
          else {
            uVar11 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar11 < uVar5 + 0x20) {
              uVar11 = uVar5 + 0x20;
            }
            psVar3 = (short *)fn_00100fc6(uVar11 << 1,0);
            psVar7 = psVar3;
            for (psVar6 = (short *)*param_2; psVar6 != psVar10; psVar6 = psVar6 + 1) {
              if (psVar7 != (short *)0x0) {
                *psVar7 = *psVar6;
              }
              psVar7 = psVar7 + 1;
            }
            psVar6 = (short *)(((int)psVar10 - *param_2 & 0xfffffffe) + (int)psVar3);
            if (psVar6 != (short *)0x0) {
              *psVar6 = sVar1;
            }
            psVar7 = (short *)param_2[1];
            psVar6 = (short *)(((int)psVar10 - *param_2 & 0xfffffffe) + (int)psVar3);
            for (; psVar10 != psVar7; psVar10 = psVar10 + 1) {
              psVar6 = psVar6 + 1;
              if (psVar6 != (short *)0x0) {
                *psVar6 = *psVar10;
              }
            }
            uVar4 = *param_2;
            uVar8 = param_2[1];
            uVar5 = uVar4;
            if (uVar8 < uVar4) {
              do {
                uVar5 = uVar5 + 2;
              } while (uVar5 != uVar8);
            }
            fn_001008c4(uVar4,(int)(param_2[2] - uVar4) >> 1,0);
            param_2[2] = (uint)(psVar3 + uVar11);
            param_2[1] = (uint)(psVar3 + ((int)(uVar8 - uVar4) >> 1) + 1);
            *param_2 = (uint)psVar3;
          }
        }
        else {
          param_2[1] = (uint)(psVar10 + 1);
          if (psVar10 != (short *)0x0) {
            *psVar10 = sVar1;
          }
        }
      }
      iVar9 = (int)(short)(sVar1 + 1);
      iVar2 = fn_006616e0();
    } while (iVar9 < iVar2);
  }
  fn_0022de40(param_2,6);
  return;
}



uint fn_00568bfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_006b7d14(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_3);
  return uVar2 & uVar1;
}


