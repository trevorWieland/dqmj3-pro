#include "00163edc_001642a8.h"



int fn_001642a8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  char *pcVar4;
  bool bVar5;
  int aiStack_50 [17];
  
  iVar2 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_50,0x10);
  bVar5 = iVar2 == 0;
  if (iVar2 >= 0) {
    bVar5 = iVar2 == param_2;
  }
  if ((((bVar5 || (iVar2 < 0 || iVar2 < param_2)) || (param_2 < 0)) ||
      (iVar2 = aiStack_50[param_2], iVar2 == 0)) &&
     (iVar2 = fn_00175a48(*(undefined4 *)(param_1 + 0x84)), iVar2 == 0)) {
    psVar3 = (short *)fn_00175aa4(*(undefined4 *)(param_1 + 0x84));
    if (psVar3 == (short *)0x0) {
      iVar2 = fn_001759f8(*(undefined4 *)(param_1 + 0x84));
      if (iVar2 == 0) {
        iVar2 = fn_00175a90(*(undefined4 *)(param_1 + 0x84));
        if (iVar2 == 0) {
          iVar2 = fn_00175c14(*(undefined4 *)(param_1 + 0x84));
          if (iVar2 == 0) {
            iVar2 = fn_00182d68(*(undefined4 *)(param_1 + 0x84));
            if (iVar2 == 0) {
              iVar2 = fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
              if ((iVar2 == 0) ||
                 (pcVar4 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0),
                 *pcVar4 != '\x01')) {
                return 0;
              }
              return (int)*(short *)(pcVar4 + 2);
            }
            iVar2 = fn_00182d68();
          }
          else {
            iVar2 = fn_00175c14();
          }
          goto LAB_00164398;
        }
        psVar3 = (short *)fn_00175a90();
      }
      else {
        psVar3 = (short *)fn_001759f8();
      }
      sVar1 = *psVar3;
    }
    else {
      sVar1 = *psVar3;
    }
    return (int)sVar1;
  }
LAB_00164398:
  return (int)*(short *)(iVar2 + 0x1a);
}



int fn_001642a4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  char *pcVar4;
  bool bVar5;
  int aiStack_50 [17];
  
  iVar2 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_50,0x10);
  bVar5 = iVar2 == 0;
  if (iVar2 >= 0) {
    bVar5 = iVar2 == param_2;
  }
  if ((((bVar5 || (iVar2 < 0 || iVar2 < param_2)) || (param_2 < 0)) ||
      (iVar2 = aiStack_50[param_2], iVar2 == 0)) &&
     (iVar2 = fn_00175a48(*(undefined4 *)(param_1 + 0x84)), iVar2 == 0)) {
    psVar3 = (short *)fn_00175aa4(*(undefined4 *)(param_1 + 0x84));
    if (psVar3 == (short *)0x0) {
      iVar2 = fn_001759f8(*(undefined4 *)(param_1 + 0x84));
      if (iVar2 == 0) {
        iVar2 = fn_00175a90(*(undefined4 *)(param_1 + 0x84));
        if (iVar2 == 0) {
          iVar2 = fn_00175c14(*(undefined4 *)(param_1 + 0x84));
          if (iVar2 == 0) {
            iVar2 = fn_00182d68(*(undefined4 *)(param_1 + 0x84));
            if (iVar2 == 0) {
              iVar2 = fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
              if ((iVar2 == 0) ||
                 (pcVar4 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0),
                 *pcVar4 != '\x01')) {
                return 0;
              }
              return (int)*(short *)(pcVar4 + 2);
            }
            iVar2 = fn_00182d68();
          }
          else {
            iVar2 = fn_00175c14();
          }
          goto LAB_00164398;
        }
        psVar3 = (short *)fn_00175a90();
      }
      else {
        psVar3 = (short *)fn_001759f8();
      }
      sVar1 = *psVar3;
    }
    else {
      sVar1 = *psVar3;
    }
    return (int)sVar1;
  }
LAB_00164398:
  return (int)*(short *)(iVar2 + 0x1a);
}



void fn_0016427c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_0015960c(&local_c,param_3);
  }
  return;
}



undefined4 fn_00164258(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00165020();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_001639e4();
    if (iVar1 == 0x29) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



int fn_00164198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    iVar1 = fn_00174870();
    uVar3 = *(undefined4 *)(iVar1 + 4);
    fn_0017481c(DAT_008977e4);
    iVar1 = 0;
    break;
  default:
    return 0;
  }
  while( true ) {
    iVar2 = fn_003035b0((&DAT_007ba238)[iVar1 * 4],uVar3,param_3,param_4,unaff_r4);
    if (iVar2 == 0) {
      return iVar1;
    }
    iVar2 = fn_003035b0((&DAT_007ba248)[iVar1 * 4],uVar3,param_3,param_4,unaff_r4);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 2;
    if (0x45 < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}



void fn_00163edc(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *in_r3;
  undefined4 *puVar10;
  uint unaff_r7;
  int unaff_r8;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_78 [84];
  
  fn_00183718(&local_bc);
  if (local_bc != 0) {
    unaff_r8 = 0x2aaaaaab;
    unaff_r7 = 0;
  }
  uStack_d4 = uStack_b8;
  uStack_d0 = uStack_b4;
  uStack_cc = uStack_b0;
  uStack_c8 = uStack_ac;
  uStack_c4 = uStack_a8;
  uStack_c0 = uStack_a4;
  if (local_bc != 0) {
    do {
      fn_00176ec8(auStack_78,&uStack_d4,unaff_r7);
      fn_0017821c(&local_bc,auStack_78,0x44);
      puVar10 = (undefined4 *)in_r3[1];
      if (puVar10 == (undefined4 *)in_r3[2]) {
        iVar5 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)in_r3[2] - *in_r3)) >>
                     0x20);
        iVar1 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar10 - *in_r3)) >>
                     0x20);
        uVar2 = (iVar1 >> 1) - (iVar1 >> 0x1f);
        if (uVar2 < (uint)((iVar5 >> 1) - (iVar5 >> 0x1f))) {
          in_r3[1] = (uint)(puVar10 + 3);
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-3];
            puVar10[1] = puVar10[-2];
            puVar10[2] = puVar10[-1];
          }
          puVar7 = puVar10 + -3;
          puVar8 = puVar10;
          if (puVar10 < puVar7) {
            if (0 < (int)puVar7 - (int)puVar10) {
              iVar1 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)((int)puVar7 - (int)puVar10))
                           >> 0x20);
              uVar2 = (iVar1 >> 1) - (iVar1 >> 0x1f);
              if ((uVar2 & 1) != 0) {
                puVar7 = puVar10 + -6;
                puVar8 = puVar10 + -3;
                *puVar8 = *puVar7;
                puVar10[-2] = puVar10[-5];
                puVar10[-1] = puVar10[-4];
              }
              for (iVar1 = (int)uVar2 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                uVar12 = puVar7[-2];
                uVar14 = puVar7[-1];
                puVar8[-3] = puVar7[-3];
                puVar8[-2] = uVar12;
                puVar8[-1] = uVar14;
                uVar12 = puVar7[-5];
                uVar14 = puVar7[-4];
                puVar8[-6] = puVar7[-6];
                puVar8[-5] = uVar12;
                puVar8[-4] = uVar14;
                puVar8 = puVar8 + -6;
                puVar7 = puVar7 + -6;
              }
            }
          }
          else {
            while (puVar10 != puVar7) {
              uVar12 = puVar7[-2];
              uVar14 = puVar7[-1];
              puVar8[-3] = puVar7[-3];
              puVar8[-2] = uVar12;
              puVar8[-1] = uVar14;
              puVar8 = puVar8 + -3;
              puVar7 = puVar7 + -3;
            }
          }
          *puVar10 = local_9c;
          puVar10[1] = uStack_98;
          puVar10[2] = uStack_94;
        }
        else {
          uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          uVar11 = uVar2 + 0x20;
          if (uVar2 + 0x20 <= uVar6) {
            uVar11 = uVar6;
          }
          uVar12 = local_9c;
          uVar14 = uStack_98;
          uVar16 = uStack_94;
          puVar3 = (undefined4 *)fn_00100fc6(uVar11 * 0xc,0);
          puVar8 = puVar3;
          for (puVar7 = (undefined4 *)*in_r3; puVar7 != puVar10; puVar7 = puVar7 + 3) {
            if (puVar8 != (undefined4 *)0x0) {
              uVar13 = puVar7[1];
              uVar15 = puVar7[2];
              *puVar8 = *puVar7;
              puVar8[1] = uVar13;
              puVar8[2] = uVar15;
            }
            puVar8 = puVar8 + 3;
          }
          iVar1 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar10 - *in_r3)) >>
                       0x20);
          puVar7 = puVar3 + ((iVar1 >> 1) - (iVar1 >> 0x1f)) * 3;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uVar12;
            puVar7[1] = uVar14;
            puVar7[2] = uVar16;
          }
          puVar8 = (undefined4 *)in_r3[1];
          iVar1 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)((int)puVar10 - *in_r3)) >>
                       0x20);
          puVar7 = puVar3 + ((iVar1 >> 1) - (iVar1 >> 0x1f)) * 3;
          for (; puVar10 != puVar8; puVar10 = puVar10 + 3) {
            puVar4 = puVar7 + 3;
            if (puVar4 != (undefined4 *)0x0) {
              uVar12 = puVar10[1];
              uVar14 = puVar10[2];
              *puVar4 = *puVar10;
              puVar7[4] = uVar12;
              puVar7[5] = uVar14;
            }
            puVar7 = puVar4;
          }
          uVar6 = *in_r3;
          uVar9 = in_r3[1];
          iVar1 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)(uVar9 - uVar6)) >> 0x20);
          uVar2 = uVar6;
          if (uVar9 < uVar6) {
            do {
              uVar2 = uVar2 + 0xc;
            } while (uVar2 != uVar9);
          }
          iVar5 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)(int)(in_r3[2] - uVar6)) >> 0x20)
          ;
          fn_001008c4(uVar6,(iVar5 >> 1) - (iVar5 >> 0x1f),0);
          *in_r3 = (uint)puVar3;
          in_r3[1] = (uint)(puVar3 + ((iVar1 >> 1) - (iVar1 >> 0x1f)) * 3 + 3);
          in_r3[2] = (uint)(puVar3 + uVar11 * 3);
        }
      }
      else {
        in_r3[1] = (uint)(puVar10 + 3);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = local_9c;
          puVar10[1] = uStack_98;
          puVar10[2] = uStack_94;
        }
      }
      unaff_r7 = unaff_r7 + 1;
    } while (unaff_r7 < local_bc);
  }
  return;
}


