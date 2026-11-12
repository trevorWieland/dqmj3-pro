#include "00188184_0018b420.h"



void fn_0018b420(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x1c)) {
    fn_0018b588(param_1,param_2);
  }
  fn_0019be88(iVar1 + 0x14,0);
  fn_00193fc0();
  fn_0019ea94(&DAT_008ef56c,(int)(char)param_2,param_3);
  return;
}



void fn_0018b20c(int param_1,int param_2,int param_3)

{
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    fn_0018b588();
    if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x20)) {
      fn_0019be88(param_1 + 0x14,0);
      return;
    }
  }
  else {
    fn_0019be88(param_1 + 0x14,(param_3 + 4U) / 5);
  }
  return;
}



void fn_0018963c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_001923e0(param_1,(&PTR_s_battle_subwindows_bflyt_007ba1bc)[param_2],param_3,param_4,param_5);
  return;
}



void fn_0018911c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  fn_0017fde4();
  iVar1 = fn_0019bc38();
  if (iVar1 != -1) {
    if (param_3 == 0) {
      uVar2 = fn_0017fde4(param_2);
      puVar3 = (undefined4 *)fn_0019695c(uVar2,iVar1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar6 = puVar3 + 2;
        *puVar3 = &DAT_00858c10;
        uVar4 = puVar3[2];
        uVar5 = uVar4;
        if ((uint)puVar3[3] < uVar4) {
          do {
            uVar5 = uVar5 + 8;
          } while (uVar5 != puVar3[3]);
        }
        goto LAB_001891d8;
      }
    }
    else {
      uVar2 = fn_0017fde4(param_2);
      puVar3 = (undefined4 *)fn_0019695c(uVar2,iVar1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar6 = puVar3 + 2;
        *puVar3 = &DAT_00858c10;
        uVar4 = puVar3[2];
        uVar5 = uVar4;
        if ((uint)puVar3[3] < uVar4) {
          do {
            uVar5 = uVar5 + 8;
          } while (uVar5 != puVar3[3]);
        }
LAB_001891d8:
        fn_001008c4(uVar4,(int)(puVar6[2] - uVar4) >> 3,0);
        fn_002feef8(puVar6 + -2);
        uVar2 = fn_0017fde4(param_1);
        fn_00196998(uVar2,0xffffffff);
        return;
      }
    }
  }
  return;
}



void fn_00188f58(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = *param_4;
  uVar2 = fn_002febd8((char *)&DAT_001890e0);
  iVar5 = fn_00190fe0(*(int *)(iVar5 + 0x30) + 100,(char *)&DAT_001890e0,uVar2);
  uVar2 = fn_0017fde4(param_2);
  uVar2 = fn_00191238(uVar2,&DAT_001890ec);
  if (((DAT_0088fec8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_0088fec8), iVar3 != 0)) {
    DAT_008c7800 = 0;
    DAT_008c7804 = 0x429dcccd;
    DAT_008c7808 = 0;
  }
  uVar7 = 0x4099999a;
  uVar6 = 0x3f000000;
  if (param_3 == 0x1b) {
    uVar7 = 0x406ccccd;
    uVar6 = 0x3fe66666;
  }
  puVar4 = (undefined4 *)fn_00145b00(0x2c,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[2] = 0;
    puVar4[1] = uVar2;
    puVar4[3] = 0;
    *puVar4 = &DAT_00844f68;
    puVar4[4] = 0;
  }
  uVar2 = fn_0017fde4(param_1);
  fn_0018cdf4(puVar4,uVar2);
  uVar1 = DAT_008c7808;
  uVar2 = DAT_008c7804;
  puVar4[5] = DAT_008c7800;
  puVar4[6] = uVar2;
  puVar4[7] = uVar1;
  puVar4[8] = param_5;
  puVar4[9] = uVar7;
  puVar4[10] = uVar6;
  uVar2 = fn_0017fde4(param_2);
  uVar2 = fn_0018d16c(uVar2,puVar4);
  uVar7 = fn_0017fde4(param_1);
  fn_00196998(uVar7,uVar2);
  if (iVar5 == -1) {
    iVar5 = 0;
  }
  if (param_6 == 0) {
    fn_0018d060(param_1,iVar5,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001890c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,iVar5);
  return;
}



short * fn_00188184(int param_1,int param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  int extraout_r1;
  uint *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  undefined4 *unaff_r5;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_854;
  uint local_850;
  int iStack_84c;
  int iStack_848;
  undefined4 *local_844;
  short asStack_840 [1024];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_34;
  int iStack_30;
  char *pcStack_2c;
  uint local_28;
  
  if (param_2 == 0) {
    return (short *)0x0;
  }
  puVar4 = *(undefined4 **)(param_2 + 0xc);
  local_34 = param_1;
  iStack_30 = param_2;
  pcStack_2c = param_3;
  local_28 = param_4;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)fn_0015a320(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 8));
    *(undefined4 **)(param_2 + 0xc) = puVar4;
  }
  iVar12 = 0;
  iVar5 = 0;
  cVar2 = *param_3;
  while (cVar2 != '\0') {
    pcVar1 = param_3 + iVar12;
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 * 0x1f + (int)*pcVar1;
    cVar2 = param_3[iVar12];
  }
  fn_00169f1c(iVar5,*puVar4);
  uVar16 = puVar4[extraout_r1 * 2 + 1];
  if (uVar16 != 0) {
    uVar15 = puVar4[extraout_r1 * 2 + 2];
    uVar6 = fn_002febd8(param_3);
    if (uVar6 == 0) {
      unaff_r5 = (undefined4 *)&DAT_008f9d04;
    }
    local_844 = (undefined4 *)&DAT_008f9d04;
    if (uVar6 != 0) {
      puVar10 = &local_850;
      if (0x20 < uVar6) {
        puVar10 = &local_854;
      }
      local_854 = uVar6;
      local_850 = 0x20;
      uVar13 = *puVar10;
      if (0xfffffff1 < uVar13) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar13,0xfffffff1);
      }
      if (uVar13 < uVar6) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar6,uVar13);
      }
      if (uVar13 == 0) {
        puVar7 = &DAT_008f9cf8;
      }
      else {
        puVar7 = (undefined4 *)fn_00100fc6(uVar13 + 0xe,0);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        puVar11 = (undefined1 *)((int)puVar7 + uVar6 + 0xc);
        *puVar7 = 0;
        puVar7[1] = uVar13;
        puVar7[2] = uVar6;
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0;
        }
      }
      unaff_r5 = puVar7 + 3;
    }
    fn_00301a9c(unaff_r5,param_3,uVar6);
    uVar6 = 0;
    if (uVar16 != 0) {
      do {
        iVar12 = uVar15 + 4;
        uVar17 = *(uint *)((int)puVar4 + (uVar15 & 0xfffffffc));
        iVar5 = (int)puVar4 + iVar12;
        uVar15 = unaff_r5[-1];
        uVar13 = fn_002febd8();
        if ((uint)unaff_r5[-1] < uVar15) {
          uVar15 = unaff_r5[-1];
        }
        iVar5 = fn_001010c8(unaff_r5,iVar5);
        if (iVar5 == 0 && uVar15 == uVar13) {
          psVar14 = (short *)((uVar17 & 0xfffffffe) + (int)puVar4);
          local_40 = 0x2010001;
          uStack_3c = 0;
          iVar12 = fn_00101160(psVar14,&DAT_00188610);
          iVar5 = fn_00101160(psVar14,&local_40);
          if (((uint)(iVar12 != 0 || iVar5 != 0) & ~local_28) == 0) {
            if (local_844 == unaff_r5) {
              return psVar14;
            }
            iVar12 = unaff_r5[-3];
            if (iVar12 != -1) {
              if (unaff_r5 + -3 == &DAT_008f9cf8) {
                return psVar14;
              }
              unaff_r5[-3] = iVar12 + -1;
              if (iVar12 != 0) {
                return psVar14;
              }
            }
            iVar12 = unaff_r5[-2];
            goto LAB_00188518;
          }
          uVar16 = 0;
          psVar8 = asStack_840;
          do {
            uVar16 = uVar16 + 1;
            psVar9 = psVar8 + 1;
            *psVar8 = *psVar14;
            bVar18 = psVar14[1] == 0;
            psVar8 = psVar9;
            psVar14 = psVar14 + 1;
          } while ((bVar18 || uVar16 < 0x400) && (!bVar18 && uVar16 != 0x3ff));
          *psVar9 = 0;
          iVar3 = local_34;
          if (iVar12 != 0) {
            iStack_848 = local_34 + 0x118;
            iStack_84c = local_34 + 0xd8;
            local_850 = local_34 + 0x98;
            local_854 = local_34 + 0x58;
            fn_0018a618(local_34 + 0x158,0x400,0x3ff,asStack_840,local_34 + 0x18);
            iVar12 = 0;
            *(undefined4 *)(iVar3 + 0x14) = 0;
            do {
              fn_00158f6c(iVar3 + iVar12 * 0x40 + 0x18,0x40);
              iVar12 = iVar12 + 1;
            } while (iVar12 < 5);
            uVar16 = 0;
            psVar14 = (short *)(local_34 + 0x158);
            psVar8 = asStack_840;
            do {
              uVar16 = uVar16 + 1;
              psVar9 = psVar8 + 1;
              *psVar8 = *psVar14;
              bVar18 = psVar14[1] == 0;
              psVar14 = psVar14 + 1;
              psVar8 = psVar9;
            } while ((bVar18 || uVar16 < 0x400) && (!bVar18 && uVar16 != 0x3ff));
            *psVar9 = 0;
          }
          if (iVar5 != 0) {
            fn_0018861c(local_34,asStack_840);
            uVar16 = 0;
            psVar14 = (short *)(local_34 + 0x158);
            psVar8 = asStack_840;
            do {
              uVar16 = uVar16 + 1;
              psVar9 = psVar8 + 1;
              *psVar8 = *psVar14;
              bVar18 = psVar14[1] == 0;
              psVar14 = psVar14 + 1;
              psVar8 = psVar9;
            } while ((bVar18 || uVar16 < 0x400) && (!bVar18 && uVar16 != 0x3ff));
            *psVar9 = 0;
          }
          psVar14 = (short *)(local_34 + 0x158);
          if (local_844 != unaff_r5) {
            iVar12 = unaff_r5[-3];
            if ((iVar12 == -1) ||
               ((unaff_r5 + -3 != &DAT_008f9cf8 && (unaff_r5[-3] = iVar12 + -1, iVar12 == 0)))) {
              iVar12 = unaff_r5[-2];
LAB_00188518:
              fn_001008c4(unaff_r5 + -3,iVar12 + 0xe,0);
            }
          }
          return psVar14;
        }
        cVar2 = *(char *)((int)puVar4 + iVar12);
        while (cVar2 != '\0') {
          iVar12 = iVar12 + 1;
          cVar2 = *(char *)((int)puVar4 + iVar12);
        }
        uVar6 = uVar6 + 1;
        uVar15 = iVar12 + 4U & 0xfffffffc;
      } while (uVar6 < uVar16);
    }
    if (unaff_r5 != local_844) {
      iVar12 = unaff_r5[-3];
      if ((iVar12 == -1) ||
         ((unaff_r5 + -3 != &DAT_008f9cf8 && (unaff_r5[-3] = iVar12 + -1, iVar12 == 0)))) {
        fn_001008c4(unaff_r5 + -3,unaff_r5[-2] + 0xe,0);
      }
    }
  }
  return (short *)0x0;
}


