#include "0022d948_0022e468.h"



void fn_0022e468(undefined4 *param_1,int param_2)

{
  fn_00763e68(*param_1,param_1[1],(&PTR_LAB_007c7e2c)[param_2]);
  return;
}



void fn_0022de60(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar7 = (undefined4 *)*param_1;
  puVar8 = (undefined4 *)param_1[1];
  pcVar6 = *(code **)(&DAT_007c7d90 + param_2 * 4);
  if (puVar7 != puVar8) {
    fn_007a91c0(puVar7,puVar8,(int)puVar8 - (int)puVar7 >> 2,pcVar6);
    if ((int)puVar8 - (int)puVar7 < 0x41) {
      puVar2 = puVar7 + 1;
      if (puVar2 != puVar8) {
        do {
          local_30 = *puVar2;
          iVar1 = (*pcVar6)(&local_30,puVar7);
          if (iVar1 == 0) {
            local_2c = local_30;
            iVar1 = (*pcVar6)(&local_2c);
            puVar3 = puVar2;
            while (iVar1 != 0) {
              *(undefined2 *)puVar3 = *(undefined2 *)(puVar3 + -1);
              *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar3 + -2);
              iVar1 = (*pcVar6)(&local_2c);
              puVar3 = puVar3 + -1;
            }
            *(undefined2 *)puVar3 = (undefined2)local_2c;
            local_2c = (local_2c & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_2c >> 0x10)) & 0xff) << 16);
            *(undefined1 *)((int)puVar3 + 2) = ((unsigned int)(local_2c) >> 16) & 0xff;
          }
          else {
            puVar3 = puVar2 + 1;
            puVar5 = puVar2;
            if (puVar7 < puVar2) {
              iVar4 = 1;
              iVar1 = (int)puVar2 - (int)puVar7 >> 2;
              if (1 < iVar1 + 1) {
                do {
                  iVar4 = iVar4 + 1;
                  *(undefined2 *)(puVar3 + -1) = *(undefined2 *)(puVar5 + -1);
                  *(undefined1 *)((int)puVar3 + -2) = *(undefined1 *)((int)puVar5 + -2);
                  puVar3 = puVar3 + -1;
                  puVar5 = puVar5 + -1;
                } while (iVar4 < iVar1 + 1);
              }
            }
            else {
              while (puVar7 != puVar5) {
                *(undefined2 *)(puVar3 + -1) = *(undefined2 *)(puVar5 + -1);
                *(undefined1 *)((int)puVar3 + -2) = *(undefined1 *)((int)puVar5 + -2);
                puVar3 = puVar3 + -1;
                puVar5 = puVar5 + -1;
              }
            }
            *(undefined2 *)puVar7 = (undefined2)local_30;
            *(undefined1 *)((int)puVar7 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
          }
          puVar2 = puVar2 + 1;
        } while (puVar2 != puVar8);
        return;
      }
    }
    else {
      puVar2 = puVar7;
      while (puVar3 = puVar2 + 1, puVar3 != puVar7 + 0x10) {
        local_30 = *puVar3;
        iVar1 = (*pcVar6)(&local_30,puVar7);
        if (iVar1 == 0) {
          local_2c = local_30;
          iVar1 = (*pcVar6)(&local_2c);
          puVar2 = puVar3;
          while (iVar1 != 0) {
            *(undefined2 *)puVar2 = *(undefined2 *)(puVar2 + -1);
            *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar2 + -2);
            iVar1 = (*pcVar6)(&local_2c);
            puVar2 = puVar2 + -1;
          }
          *(undefined2 *)puVar2 = (undefined2)local_2c;
          local_2c = (local_2c & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_2c >> 0x10)) & 0xff) << 16);
          *(undefined1 *)((int)puVar2 + 2) = ((unsigned int)(local_2c) >> 16) & 0xff;
          puVar2 = puVar3;
        }
        else {
          puVar2 = puVar2 + 2;
          puVar5 = puVar3;
          if (puVar7 < puVar3) {
            iVar4 = 1;
            iVar1 = (int)puVar3 - (int)puVar7 >> 2;
            if (1 < iVar1 + 1) {
              do {
                iVar4 = iVar4 + 1;
                *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar5 + -1);
                *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar5 + -2);
                puVar2 = puVar2 + -1;
                puVar5 = puVar5 + -1;
              } while (iVar4 < iVar1 + 1);
            }
          }
          else {
            while (puVar7 != puVar5) {
              *(undefined2 *)(puVar2 + -1) = *(undefined2 *)(puVar5 + -1);
              *(undefined1 *)((int)puVar2 + -2) = *(undefined1 *)((int)puVar5 + -2);
              puVar2 = puVar2 + -1;
              puVar5 = puVar5 + -1;
            }
          }
          *(undefined2 *)puVar7 = (undefined2)local_30;
          *(undefined1 *)((int)puVar7 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
          puVar2 = puVar3;
        }
      }
      for (puVar7 = puVar7 + 0x10; puVar7 != puVar8; puVar7 = puVar7 + 1) {
        local_30 = *puVar7;
        iVar1 = (*pcVar6)(&local_30,puVar7 + -1);
        puVar3 = puVar7 + -1;
        puVar2 = puVar7;
        while (puVar5 = puVar3, iVar1 != 0) {
          *(undefined2 *)puVar2 = *(undefined2 *)puVar5;
          *(undefined1 *)((int)puVar2 + 2) = *(undefined1 *)((int)puVar5 + 2);
          iVar1 = (*pcVar6)(&local_30,puVar5 + -1);
          puVar3 = puVar5 + -1;
          puVar2 = puVar5;
        }
        *(undefined2 *)puVar2 = (undefined2)local_30;
        local_30 = (local_30 & ~((unsigned int)0xff << 16)) | (((unsigned int)((undefined1)((uint)local_30 >> 0x10)) & 0xff) << 16);
        *(undefined1 *)((int)puVar2 + 2) = ((unsigned int)(local_30) >> 16) & 0xff;
      }
    }
  }
  return;
}



void fn_0022de40(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],(&PTR_FUN_007c7dc0)[param_2]);
  return;
}



void fn_0022db74(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_r4;
  int iVar12;
  short *psVar13;
  uint uVar14;
  undefined4 in_lr;
  
  iVar12 = 1;
  iVar3 = fn_006616e0();
  if (iVar3 < 2) {
LAB_0022de30:
    fn_0076410c(*param_2,param_2[1],fn_006015f0,&PTR_FUN_007c7dc0,unaff_r4,in_lr);
    return;
  }
LAB_0022db90:
  sVar2 = (short)iVar12;
  iVar3 = (int)sVar2;
  iVar12 = fn_0028bc24();
  if (iVar12 != 0) {
    fn_0066173c(iVar3);
    iVar12 = fn_0066158c();
    iVar4 = fn_00154ac8(0x19);
    if (iVar4 != 0) {
      iVar12 = fn_0066158c(4);
    }
    iVar4 = 0;
    if (0 < iVar12) {
      do {
        iVar5 = fn_006616f4(iVar3,iVar4);
        if (iVar5 == param_3) goto LAB_0022dc5c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar12);
    }
    iVar12 = fn_00154ac8(0x19);
    if (iVar12 == 0) {
      uVar6 = 0x32;
    }
    else {
      uVar6 = 100;
    }
    iVar12 = fn_006614d0(uVar6);
    iVar4 = 0;
    if (0 < iVar12) {
      do {
        iVar5 = fn_00661248(iVar3,iVar4);
        if (iVar5 == param_3) goto LAB_0022dc5c;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar12);
    }
  }
  goto LAB_0022de18;
LAB_0022dc5c:
  psVar13 = (short *)param_2[1];
  if (psVar13 == (short *)param_2[2]) {
    uVar1 = (int)((int)psVar13 - *param_2) >> 1;
    if (uVar1 < (uint)((int)((int)param_2[2] - *param_2) >> 1)) {
      param_2[1] = (uint)(psVar13 + 1);
      if (psVar13 != (short *)0x0) {
        *psVar13 = psVar13[-1];
      }
      psVar8 = psVar13 + -1;
      psVar9 = psVar13;
      if (psVar13 < psVar8) {
        iVar3 = (int)psVar8 - (int)psVar13;
        if (0 < iVar3) {
          if (iVar3 * 0x40000000 < 0) {
            psVar8 = psVar13 + -2;
            psVar9 = psVar13 + -1;
            *psVar9 = *psVar8;
          }
          for (iVar3 = iVar3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
            psVar9[-1] = psVar8[-1];
            psVar8 = psVar8 + -2;
            psVar9 = psVar9 + -2;
            *psVar9 = *psVar8;
          }
        }
      }
      else {
        while (psVar13 != psVar8) {
          psVar8 = psVar8 + -1;
          psVar9[-1] = *psVar8;
          psVar9 = psVar9 + -1;
        }
      }
      *psVar13 = sVar2;
    }
    else {
      uVar14 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar14 < uVar1 + 0x20) {
        uVar14 = uVar1 + 0x20;
      }
      psVar7 = (short *)fn_00100fc6(uVar14 << 1,0);
      psVar9 = psVar7;
      for (psVar8 = (short *)*param_2; psVar8 != psVar13; psVar8 = psVar8 + 1) {
        if (psVar9 != (short *)0x0) {
          *psVar9 = *psVar8;
        }
        psVar9 = psVar9 + 1;
      }
      psVar8 = (short *)(((int)psVar13 - *param_2 & 0xfffffffe) + (int)psVar7);
      if (psVar8 != (short *)0x0) {
        *psVar8 = sVar2;
      }
      psVar9 = (short *)param_2[1];
      psVar8 = (short *)(((int)psVar13 - *param_2 & 0xfffffffe) + (int)psVar7);
      for (; psVar13 != psVar9; psVar13 = psVar13 + 1) {
        psVar8 = psVar8 + 1;
        if (psVar8 != (short *)0x0) {
          *psVar8 = *psVar13;
        }
      }
      uVar10 = param_2[1];
      uVar11 = *param_2;
      uVar1 = uVar11;
      if (uVar10 <= uVar11) {
        for (; uVar1 != uVar10; uVar1 = uVar1 + 2) {
        }
      }
      fn_001008c4(uVar11,(int)(param_2[2] - uVar11) >> 1,0);
      param_2[2] = (uint)(psVar7 + uVar14);
      param_2[1] = (uint)(psVar7 + ((int)(uVar10 - uVar11) >> 1) + 1);
      *param_2 = (uint)psVar7;
    }
  }
  else {
    param_2[1] = (uint)(psVar13 + 1);
    if (psVar13 != (short *)0x0) {
      *psVar13 = sVar2;
    }
  }
LAB_0022de18:
  iVar12 = (int)(short)(sVar2 + 1);
  iVar3 = fn_006616e0();
  if (iVar3 <= iVar12) goto LAB_0022de30;
  goto LAB_0022db90;
}



void fn_0022da78(int *param_1,int param_2,int param_3)

{
  fn_00763e68(*param_1 + param_3 * 4,param_1[1],(&PTR_LAB_007c7db0)[param_2]);
  return;
}



void fn_0022da58(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],*(undefined4 *)(&DAT_007c7e10 + param_2 * 4));
  return;
}



void fn_0022da38(undefined4 *param_1,int param_2)

{
  fn_0076410c(*param_1,param_1[1],*(undefined4 *)(&DAT_007c7de8 + param_2 * 4));
  return;
}



void fn_0022d9f8(undefined4 *param_1)

{
  *param_1 = &DAT_0081cf84;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  fn_006896f4(param_1);
  fn_002feef8();
  return;
}



undefined4 *
fn_0022d948(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            )

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_0068af70();
  *puVar2 = &DAT_0081cf84;
  puVar2[4] = *(undefined4 *)(param_2 + 8);
  puVar2[5] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 9) = 0;
  *(undefined2 *)((int)puVar2 + 0x26) = 0;
  *(undefined1 *)(puVar2 + 10) = 1;
  *(undefined1 *)((int)puVar2 + 0x29) = 1;
  *(undefined1 *)((int)puVar2 + 0x2a) = param_5;
  *(undefined1 *)((int)puVar2 + 0x2b) = param_5;
  *(undefined1 *)(puVar2 + 0xb) = 0xff;
  *(undefined1 *)((int)puVar2 + 0x2d) = 0xff;
  *(undefined1 *)((int)puVar2 + 0x2e) = 0xff;
  *(undefined1 *)((int)puVar2 + 0x2f) = 0xff;
  *(undefined1 *)(puVar2 + 0xc) = param_5;
  *(undefined1 *)((int)puVar2 + 0x31) = param_5;
  *(short *)((int)puVar2 + 0x26) = (short)param_3;
  uVar1 = fn_0068b0a4(param_3);
  *(undefined1 *)((int)puVar2 + 0x2d) = uVar1;
  uVar1 = fn_0068b334(param_4);
  *(undefined1 *)((int)puVar2 + 0x2f) = uVar1;
  return puVar2;
}


