#include "0024df44_00253b7c.h"



void fn_00253b7c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_0069cd0c(param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Mask/%s.bch",uVar1);
  fn_0016b874(param_1,10,param_2,auStack_90,3,0);
  return;
}



void fn_00253af8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_001caca8(param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Model/%s.bch",uVar1);
  fn_0016b874(param_1,0xb,param_2,auStack_90,2,param_3);
  return;
}



void fn_00253a74(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_90 [132];
  
  uVar1 = fn_00242bd4(param_3);
  fn_00101a50(auStack_90,0x80,L"patch:/data/Model/%s.bch",uVar1);
  fn_0016b874(param_1,0,(int)*param_2,auStack_90,2,0);
  return;
}



void fn_002539f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_0069cd0c(param_2);
  fn_00101a50(auStack_90,0x80,L"rom:/data/Model/%s.bch",uVar1);
  fn_0016b874(param_1,3,param_2,auStack_90,2,param_3);
  return;
}



void fn_0025310c(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_26a8 [20];
  char local_2694;
  char local_2693;
  short sStack_268e;
  char acStack_268b [5];
  undefined1 auStack_2686 [3915];
  char acStack_173b [5];
  undefined1 auStack_1736 [5902];
  
  iVar4 = fn_00174858(DAT_008977e4);
  iVar4 = fn_0028eac8(*(undefined4 *)(iVar4 + 0x14),0xe4);
  fn_0038df80(iVar4,1);
  fn_00174828(DAT_008977e4);
  iVar5 = fn_006a7b78(DAT_008977e4);
  pbVar6 = (byte *)fn_00174834(DAT_008977e4);
  uVar3 = 1;
  switch(pbVar6[0x180384]) {
  case 0:
    iVar8 = fn_00607b14(pbVar6);
    if (*(char *)(iVar5 + 0x36) == '\0') {
      if (*(char *)(iVar5 + 0x34) == '\0') {
        sVar2 = *(short *)(iVar5 + 0x30);
        if (sVar2 == 0) {
          if (*(char *)(iVar5 + 0x37) == '\0') {
            pbVar10 = pbVar6 + 0x185ec0;
            bVar1 = *pbVar10;
            if (bVar1 != 3) {
              pbVar10 = (byte *)(uint)pbVar6[0x185ec9];
            }
            if (((!(bVar1 != 3 && pbVar10 != (byte *)0x3)) ||
                (!(bVar1 != 2 && pbVar10 != (byte *)0x2))) ||
               (!(bVar1 != 1 && pbVar10 != &DAT_00000001))) {
              uVar3 = 0xb;
            }
            else if (iVar8 == 0) {
              if (*(char *)(param_1 + 0x10) < '\x14') goto switchD_00253170_default;
              uVar3 = 10;
            }
            else {
              fn_0015b0dc(pbVar6 + iVar8 * 0x418 + 0x17c30c);
              uVar3 = 9;
            }
          }
          else if (*(char *)(iVar5 + 0x39) == '\0') {
            uVar3 = 0xd;
          }
          else {
            uVar3 = 0xc;
          }
        }
        else {
          iVar8 = 0;
          iVar5 = fn_001746f4();
          if (0 < iVar5) {
            do {
              iVar5 = fn_00163940();
              if ((iVar5 != 0) && (iVar5 = fn_001746dc((int)(short)iVar8), iVar5 == sVar2)) {
                iVar5 = (int)(short)iVar8;
                goto code_r0x00253234;
              }
              iVar8 = iVar8 + 1;
              iVar5 = fn_001746f4();
            } while (iVar8 < iVar5);
          }
          iVar5 = 0;
code_r0x00253234:
          fn_0016a82c(iVar5);
          fn_0015b0dc();
          uVar3 = 8;
        }
      }
      else {
        uVar3 = 7;
      }
    }
    else {
      uVar3 = 5;
    }
    break;
  case 1:
    uVar7 = (uint)*pbVar6;
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      if (pbVar6[uVar7 * 0x266c + 4] == 1) {
        fn_0017821c(auStack_26a8,pbVar6 + uVar7 * 0x266c + 8,0x2660);
        for (iVar5 = (int)local_2694; -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar8 = fn_001667e0(auStack_2686 + iVar5 * 0xc4,2);
          if (iVar8 != 0) {
            iVar8 = (int)acStack_268b[iVar5 * 0xc4];
            uVar11 = iVar8 - 0x10;
            if (uVar11 < 8) {
              bVar12 = 3 < uVar11;
              if (bVar12) {
                uVar11 = iVar8 - 0x18;
              }
              if ((bVar12 && 3 < uVar11) && (iVar8 != 0x20 && iVar8 != 0x22)) {
                if ((*(short *)(acStack_268b + iVar5 * 0xc4 + -3) != 6) || (iVar8 == 0))
                goto LAB_00253454;
                fn_0015b0dc(pbVar6 + iVar8 * 0x418 + 0x17c30c);
                uVar3 = 3;
                goto switchD_00253170_caseD_2;
              }
            }
          }
        }
        for (iVar5 = (int)local_2693; -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar8 = fn_001667e0(auStack_1736 + iVar5 * 0xc4,2);
          if (iVar8 != 0) {
            iVar8 = (int)acStack_173b[iVar5 * 0xc4];
            uVar11 = iVar8 - 0x10;
            if (uVar11 < 8) {
              bVar12 = 3 < uVar11;
              if (bVar12) {
                uVar11 = iVar8 - 0x18;
              }
              if ((bVar12 && 3 < uVar11) && (iVar8 != 0x20 && iVar8 != 0x22)) goto LAB_00253454;
            }
          }
        }
      }
    }
LAB_00253454:
    uVar3 = 2;
    break;
  case 2:
    break;
  case 3:
    uVar3 = 0x10;
    break;
  case 4:
    uVar3 = 4;
    break;
  case 5:
    uVar3 = 6;
    break;
  case 6:
    uVar3 = 0xe;
    break;
  case 7:
    *(undefined1 *)(param_1 + 9) = 0xf;
  default:
    goto switchD_00253170_default;
  }
switchD_00253170_caseD_2:
  *(undefined1 *)(param_1 + 9) = uVar3;
switchD_00253170_default:
  uVar9 = fn_00230e1c((&PTR_DAT_00890248)[*(byte *)(param_1 + 9)]);
  fn_00190d50(*(undefined4 *)(iVar4 + 0x68),uVar9);
  return;
}



void fn_002513b4(int *param_1,int param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint local_40 [9];
  
  uVar10 = 0;
  iVar9 = *param_1;
  puVar1 = (undefined4 *)fn_001287d4(0x10,&DAT_00812c8c);
  pbVar8 = &UNK_007cc503;
  bVar6 = 0x61;
  pbVar2 = (byte *)((int)puVar1 + -1);
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
    bVar5 = bVar6 + (pbVar8[1] ^ bVar6);
    pbVar2[1] = pbVar8[1] ^ bVar6;
    pbVar8 = pbVar8 + 2;
    pbVar2 = pbVar2 + 2;
    *pbVar2 = *pbVar8 ^ bVar5;
    bVar6 = bVar5 + *pbVar2;
  } while (iVar4 != 0);
  iVar3 = fn_005273d8(iVar9,param_2,0xf4,puVar1);
  iVar4 = 0;
  if (iVar3 != 0) {
    uVar10 = (uint)*(byte *)(iVar9 + 0xd0);
    pbVar2 = &UNK_007cc513;
    pbVar8 = (byte *)((int)puVar1 + -1);
    uVar7 = uVar10 ^ 0xb9;
    iVar4 = 8;
    do {
      iVar4 = iVar4 + -1;
      iVar3 = uVar7 + (pbVar2[1] ^ uVar7);
      pbVar8[1] = (byte)(pbVar2[1] ^ uVar7);
      pbVar2 = pbVar2 + 2;
      pbVar8 = pbVar8 + 2;
      *pbVar8 = *pbVar2 ^ (byte)iVar3;
      uVar7 = iVar3 + (uint)*pbVar8 & 0xff;
    } while (iVar4 != 0);
    iVar4 = fn_005273d8(iVar9 + 0xf4,param_2 + 0xf4,0x37b10,puVar1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  fn_002feca8(puVar1);
  if ((iVar4 == 0) || (fn_0013ef80(local_40,iVar9 + 0xf4,0x37af0), (local_40[0] & 0xff) != uVar10))
  {
    fn_00301f50(iVar9,0x37c04);
    return;
  }
  return;
}



void fn_0024e96c(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  local_78 = *param_1;
  iVar2 = 0;
  sVar1 = *(short *)(param_1 + 1);
  while (sVar1 != 0) {
    iVar2 = iVar2 + 1;
    sVar1 = *(short *)((int)(param_1 + 1) + iVar2 * 2);
  }
  local_74 = fn_005f5c50(0xe5d78b83,param_1 + 1,iVar2 << 1);
  local_70 = (int)*(short *)(param_1 + 7);
  local_6c = (uint)*(byte *)((int)param_1 + 0x2e);
  local_68 = (int)*(short *)((int)param_1 + 0x1e);
  local_64 = (int)*(short *)(param_1 + 8);
  local_60 = (int)*(short *)((int)param_1 + 0x26);
  local_5c = (int)*(short *)(param_1 + 10);
  local_58 = (int)*(short *)((int)param_1 + 0x2a);
  local_54 = (int)*(short *)(param_1 + 0xb);
  local_50 = (int)*(short *)(param_1 + 0x21);
  local_4c = (int)*(short *)((int)param_1 + 0x86);
  local_48 = (int)*(short *)(param_1 + 0x22);
  local_44 = (int)*(short *)((int)param_1 + 0x8a);
  local_40 = (int)*(short *)(param_1 + 0x23);
  local_3c = (int)*(short *)((int)param_1 + 0x8e);
  local_38 = fn_005f5c50(0xfe0aa09e,param_1 + 0x11,0x12);
  local_18 = *(undefined2 *)((int)param_1 + 0x56);
  local_16 = *(undefined2 *)((int)param_1 + 0x5a);
  local_14 = *(undefined2 *)((int)param_1 + 0x5e);
  local_12 = *(undefined2 *)((int)param_1 + 0x62);
  local_10 = *(undefined2 *)((int)param_1 + 0x66);
  local_e = *(undefined2 *)((int)param_1 + 0x6a);
  local_c = *(undefined2 *)((int)param_1 + 0x6e);
  local_34 = fn_005f5c50(0x73446a93,&local_18,0xe);
  local_30 = param_1[0xc];
  local_2c = fn_005f5c50(0x27b55baa,param_1 + 0x24,0x40);
  local_28 = *(byte *)(param_1 + 0x10) & 1;
  local_24 = (uint)*(byte *)((int)param_1 + 0x3d);
  local_20 = (uint)*(byte *)(param_1 + 0xf);
  local_1c = (*(ushort *)(param_1 + 0x10) & 0x7ff) >> 10;
  fn_005f5c50(0xf7a92c7d,&local_78,0x60);
  return;
}



void fn_0024df44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0081d724;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  return;
}


