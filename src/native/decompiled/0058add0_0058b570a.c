#include "0058add0_0058b570a.h"



void fn_0058b3b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b420(iVar1,param_1);
  return;
}



uint fn_0058b36c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_006b7e90(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24),param_3);
  return uVar2 & uVar1;
}



uint fn_0058b334(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_006b7e90(*(undefined4 *)(DAT_00897804 + 0x24));
  uVar2 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_3);
  return uVar2 & uVar1;
}



void fn_0058b114(undefined4 param_1,uint *param_2,int param_3)

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
      if ((iVar2 != 0) && (iVar2 = fn_0022730c((int)sVar1), iVar2 == param_3)) {
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



void fn_0058b0c8(undefined4 param_1,short *param_2,int param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  bool bVar4;
  
  psVar1 = (short *)fn_00231d50(param_4);
  uVar2 = 0;
  psVar3 = param_2;
  if (param_3 != 1) {
    do {
      uVar2 = uVar2 + 1;
      param_2 = psVar3 + 1;
      *psVar3 = *psVar1;
      bVar4 = psVar1[1] == 0;
      psVar1 = psVar1 + 1;
      psVar3 = param_2;
    } while ((bVar4 || uVar2 <= param_3 - 1U) && (!bVar4 && param_3 - 1U != uVar2));
  }
  *param_2 = 0;
  return;
}



void fn_0058b020(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x160))(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0058b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0058b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x15c))(param_1,param_2,param_3);
  return;
}



void fn_0058aec4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = &DAT_008438a0;
  return;
}



undefined4 fn_0058add0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = (param_1[2] - param_1[1]) / 0x34;
  puVar2 = (undefined4 *)fn_006f7770(DAT_008977e0);
  local_30 = *puVar2;
  uStack_2c = puVar2[1];
  uStack_28 = puVar2[2];
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      psVar5 = (short *)(param_1[1] + iVar4 * 0x34);
      if (((char)psVar5[2] != '\0') && (iVar3 = fn_00368c90(param_2,(int)*psVar5), iVar3 == 0)) {
        fn_005f1940(&local_30,psVar5 + 8);
        iVar3 = (**(code **)(*param_1 + 0x40))(param_1,(int)*psVar5);
        if (iVar3 != 0) {
          (**(code **)(*param_1 + 0x6c))(param_1,iVar3,0,iVar4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


