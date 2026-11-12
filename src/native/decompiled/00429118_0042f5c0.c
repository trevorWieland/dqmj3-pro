#include "00429118_0042f5c0.h"



void fn_0042f5c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 local_28;
  
  local_28 = param_4;
  uVar1 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),0);
  if (uVar1 != *(byte *)(param_1 + 0x70)) {
    iVar2 = fn_006e9d4c(*(undefined4 *)(param_1 + 0x98),0);
    *(char *)(param_1 + 0x70) = (char)iVar2;
    iVar3 = *(int *)(param_1 + 0x74);
    bVar6 = *(byte *)(iVar3 + 0x44) & 0xfe;
    if (iVar2 != 0) {
      *(byte *)(iVar3 + 0x44) = bVar6 | 1;
      uVar1 = 1;
      *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe | 1;
      do {
        uVar4 = fn_00230e40(uVar1 & 0xff,0);
        uVar5 = fn_001827b0(*(undefined4 *)(param_1 + 100),
                             *(undefined4 *)(&DAT_007c6d64 + uVar1 * 4));
        fn_00190d50(uVar5,uVar4);
        iVar2 = fn_00344e3c(uVar1 & 0xff,*(undefined1 *)(param_1 + 0x70));
        if (iVar2 == 0) {
          local_28 = DAT_00893f7c;
          fn_00688d44(uVar5,&local_28);
        }
        else {
          fn_00688fd8(uVar5);
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < 10);
      uVar4 = fn_00230374(*(undefined1 *)(param_1 + 0x70));
      fn_00190d50(*(undefined4 *)(param_1 + 0x74),uVar4,*(undefined4 *)(param_1 + 0x74),local_28);
      return;
    }
    *(byte *)(iVar3 + 0x44) = bVar6;
    *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe;
  }
  return;
}



void fn_0042f204(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x905) = param_2;
  *(undefined1 *)(param_1 + 0x8f4) = 1;
  return;
}



void fn_0042da78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar5 = iVar1 * iVar2 + param_2;
  if (((int)uVar5 < 0) ||
     ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar5)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc) + uVar5 * 0x10;
  }
  uVar3 = fn_0016a82c((int)*(short *)(iVar1 + 4));
  uVar4 = fn_0022ee7c((int)*(short *)(iVar1 + 4));
  fn_00321118(*(undefined4 *)(param_1 + 0xb4),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0042cefc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  uVar6 = *(undefined4 *)(iVar2 + 0x10);
  uVar3 = fn_00172c98(iVar2,(char *)&DAT_0042d010);
  uVar3 = fn_0068897c(uVar3,(char *)&DAT_0042d024);
  uVar4 = fn_0068897c(uVar6,(char *)&DAT_0042d02c);
  uVar6 = fn_0068897c(uVar6,(char *)&DAT_0042d03c);
  iVar2 = *(int *)(param_1 + 100);
  iVar5 = 0;
  pcVar7 = "";
  bVar1 = *(byte *)(iVar2 + 8);
  if (bVar1 < 2) {
    iVar5 = (int)*(short *)(iVar2 + 0x10);
  }
  else if (bVar1 == 2) {
    iVar5 = (int)*(short *)(iVar2 + 0x1c);
  }
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      pcVar7 = (char *)&DAT_0042d04c;
      fn_0022f4a4(&local_1c,iVar2 + 0xc,0);
      fn_00190d50(uVar6,local_1c);
      fn_001588d4(&local_1c);
      goto LAB_0042cfcc;
    }
    if (bVar1 != 2) goto LAB_0042cfcc;
  }
  pcVar7 = (char *)&DAT_0042d05c;
LAB_0042cfcc:
  uVar6 = fn_0022f750(pcVar7);
  fn_00190d50(uVar3,uVar6);
  fn_0023097c(&local_20,iVar5,0);
  fn_00190d50(uVar4,local_20);
  fn_001588d4(&local_20);
  return;
}



void fn_0042a534(int param_1)

{
  undefined4 uVar1;
  
  fn_0022da58(param_1 + 0xb4,(&DAT_007c4dae)[*(int *)(param_1 + 0xc0) * 2]);
  uVar1 = fn_00231cb8((&DAT_007c4daf)[*(int *)(param_1 + 0xc0) * 2]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  fn_003f59b4(param_1,3);
  fn_003f5990(param_1);
  return;
}



void fn_00429f38(int param_1)

{
  undefined4 uVar1;
  
  fn_0022da38(param_1 + 0xb4,(&DAT_007c4d88)[*(int *)(param_1 + 0xc0) * 2]);
  uVar1 = fn_00231cb8((&DAT_007c4d89)[*(int *)(param_1 + 0xc0) * 2]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  fn_003f59b4(param_1,3);
  fn_003f5990(param_1);
  return;
}



void fn_00429948(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,0x12);
  puVar1[0x1a] = 0;
  *puVar1 = &DAT_0083b4ac;
  puVar1[0x1b] = 0;
  if (param_3 == (char *)0x0) {
    puVar1[0x1e] = 0;
    puVar1[0x1c] = 2;
    puVar1[0x1d] = 1;
    return;
  }
  puVar1[0x1c] = (int)*param_3;
  puVar1[0x1d] = (int)param_3[1];
  puVar1[0x1e] = (int)*(short *)(param_3 + 2);
  return;
}



void fn_00429118(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined2 *puVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  int unaff_r6;
  undefined2 *puVar11;
  
  puVar10 = (undefined2 *)*param_2;
  if ((undefined2 *)param_2[1] != puVar10) {
    while( true ) {
      psVar8 = *(short **)(puVar10 + 6);
      psVar2 = *(short **)(puVar10 + 4);
      while( true ) {
        if (psVar2 != psVar8) {
          unaff_r6 = (int)*psVar2;
        }
        if (psVar2 == psVar8 || unaff_r6 == param_3) break;
        psVar2 = psVar2 + 1;
      }
      if (psVar2 != psVar8) break;
      psVar8 = *(short **)(puVar10 + 0xc);
      psVar2 = *(short **)(puVar10 + 10);
      while( true ) {
        if (psVar2 != psVar8) {
          unaff_r6 = (int)*psVar2;
        }
        if (psVar2 == psVar8 || unaff_r6 == param_3) break;
        psVar2 = psVar2 + 1;
      }
      if (psVar2 != psVar8) {
        if (*(int *)(puVar10 + 10) != *(int *)(puVar10 + 0xc)) {
          psVar7 = psVar2 + 1;
          if (psVar8 != psVar7) {
            if (psVar8 < psVar7) {
              do {
                psVar6 = psVar7 + 1;
                *psVar2 = *psVar7;
                psVar2 = psVar2 + 1;
                psVar7 = psVar6;
              } while (psVar6 != psVar8);
            }
            else {
              iVar3 = (int)psVar8 - (int)psVar7;
              if (0 < iVar3) {
                psVar8 = psVar2 + -1;
                if (iVar3 * 0x40000000 < 0) {
                  *psVar2 = *psVar7;
                  psVar8 = psVar2;
                  psVar2 = psVar7;
                }
                for (iVar3 = iVar3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
                  psVar8[1] = psVar2[1];
                  psVar2 = psVar2 + 2;
                  psVar8 = psVar8 + 2;
                  *psVar8 = *psVar2;
                }
              }
            }
          }
          *(int *)(puVar10 + 0xc) = *(int *)(puVar10 + 0xc) + -2;
        }
        if (*(int *)(puVar10 + 0xc) - *(int *)(puVar10 + 10) >> 1 != 0) {
          return;
        }
        if (*(int *)(puVar10 + 6) - *(int *)(puVar10 + 4) >> 1 != 0) {
          return;
        }
        puVar11 = (undefined2 *)param_2[1];
        puVar1 = puVar10;
        if ((undefined2 *)*param_2 == puVar11) {
          return;
        }
        while (puVar1 = puVar1 + 0x10, puVar1 != puVar11) {
          *puVar10 = *puVar1;
          puVar10[1] = puVar1[1];
          puVar10[2] = puVar1[2];
          puVar10[3] = puVar1[3];
          fn_0079e834(puVar10 + 4,puVar1 + 4);
          fn_0079e834(puVar10 + 10,puVar1 + 10);
          puVar10 = puVar10 + 0x10;
        }
        iVar3 = param_2[1];
        uVar4 = *(uint *)(iVar3 + -0xc);
        uVar5 = uVar4;
        if (*(uint *)(iVar3 + -8) <= uVar4) {
          for (; uVar5 != *(uint *)(iVar3 + -8); uVar5 = uVar5 + 2) {
          }
        }
        fn_001008c4(uVar4,(int)(*(int *)(iVar3 + -4) - uVar4) >> 1,0);
        uVar4 = *(uint *)(iVar3 + -0x18);
        iVar9 = iVar3 + -0x18;
        uVar5 = uVar4;
        if (*(uint *)(iVar3 + -0x14) < uVar4) {
          do {
            uVar5 = uVar5 + 2;
          } while (uVar5 != *(uint *)(iVar3 + -0x14));
        }
        goto LAB_004292cc;
      }
      puVar10 = puVar10 + 0x10;
      if ((undefined2 *)param_2[1] == puVar10) {
        return;
      }
    }
    if (*(int *)(puVar10 + 4) != *(int *)(puVar10 + 6)) {
      psVar7 = psVar2 + 1;
      if (psVar8 != psVar7) {
        if (psVar8 < psVar7) {
          do {
            psVar6 = psVar7 + 1;
            *psVar2 = *psVar7;
            psVar2 = psVar2 + 1;
            psVar7 = psVar6;
          } while (psVar6 != psVar8);
        }
        else {
          iVar3 = (int)psVar8 - (int)psVar7;
          if (0 < iVar3) {
            psVar8 = psVar2 + -1;
            if (iVar3 * 0x40000000 < 0) {
              *psVar2 = *psVar7;
              psVar8 = psVar2;
              psVar2 = psVar7;
            }
            for (iVar3 = iVar3 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
              psVar8[1] = psVar2[1];
              psVar2 = psVar2 + 2;
              psVar8 = psVar8 + 2;
              *psVar8 = *psVar2;
            }
          }
        }
      }
      *(int *)(puVar10 + 6) = *(int *)(puVar10 + 6) + -2;
    }
    if (*(int *)(puVar10 + 0xc) - *(int *)(puVar10 + 10) >> 1 != 0) {
      return;
    }
    if (*(int *)(puVar10 + 6) - *(int *)(puVar10 + 4) >> 1 != 0) {
      return;
    }
    puVar11 = (undefined2 *)param_2[1];
    puVar1 = puVar10;
    if ((undefined2 *)*param_2 == puVar11) {
      return;
    }
    while (puVar1 = puVar1 + 0x10, puVar1 != puVar11) {
      *puVar10 = *puVar1;
      puVar10[1] = puVar1[1];
      puVar10[2] = puVar1[2];
      puVar10[3] = puVar1[3];
      fn_0079e834(puVar10 + 4,puVar1 + 4);
      fn_0079e834(puVar10 + 10,puVar1 + 10);
      puVar10 = puVar10 + 0x10;
    }
    iVar3 = param_2[1];
    uVar4 = *(uint *)(iVar3 + -0xc);
    uVar5 = uVar4;
    if (*(uint *)(iVar3 + -8) <= uVar4) {
      for (; uVar5 != *(uint *)(iVar3 + -8); uVar5 = uVar5 + 2) {
      }
    }
    fn_001008c4(uVar4,(int)(*(int *)(iVar3 + -4) - uVar4) >> 1,0);
    uVar4 = *(uint *)(iVar3 + -0x18);
    iVar9 = iVar3 + -0x18;
    uVar5 = uVar4;
    if (*(uint *)(iVar3 + -0x14) < uVar4) {
      do {
        uVar5 = uVar5 + 2;
      } while (uVar5 != *(uint *)(iVar3 + -0x14));
    }
LAB_004292cc:
    fn_001008c4(uVar4,(int)(*(int *)(iVar9 + 8) - uVar4) >> 1,0);
    param_2[1] = param_2[1] + -0x20;
  }
  return;
}


