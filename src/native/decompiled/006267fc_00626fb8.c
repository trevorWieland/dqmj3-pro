#include "006267fc_00626fb8.h"



undefined4 fn_00626fb8(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006f4810();
  if ((iVar2 == 0) || (cVar1 = fn_006f4830(param_2 + 0xe8), (char)(cVar1 - *param_2) != '\x01')) {
    return 0;
  }
  return 1;
}



void fn_00626c64(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint local_60;
  uint local_5c [3];
  uint local_50 [5];
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30 [3];
  
  local_3c = fn_0062a40c();
  cVar1 = *(char *)(param_2 + 5);
  iVar11 = (int)cVar1;
  iVar2 = fn_006f4850(param_3 + 0x180470);
  if ((iVar2 == 0) && (iVar2 = fn_001639e4(local_3c), iVar2 == 0xf)) {
    iVar12 = 0;
    iVar2 = param_3 + 0x180388 + iVar11 * 0x418;
    iVar10 = 0;
    if (0 < *param_4) {
      local_34 = iVar11 - 0x10;
      local_38 = iVar11 - 0x18;
      do {
        iVar3 = 0;
        uVar14 = (uint)(short)param_4[iVar10 * 0x68 + 8];
        if (0 < (int)(uVar14 - 1)) {
          piVar6 = param_4 + iVar10 * 0x68 + 7;
          if ((uVar14 & 1) == 0) {
            piVar6 = param_4 + iVar10 * 0x68 + 9;
            iVar3 = *piVar6;
          }
          iVar13 = piVar6[2];
          iVar9 = 0;
          for (iVar8 = (int)(uVar14 - 1) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            iVar3 = iVar3 + iVar13;
            iVar13 = piVar6[6];
            iVar9 = iVar9 + piVar6[4];
            piVar6 = piVar6 + 4;
          }
          iVar3 = iVar3 + iVar9;
        }
        if (-1 < (int)(uVar14 - 1)) {
          iVar3 = iVar3 + param_4[iVar10 * 0x68 + (uVar14 - 1) * 2 + 9];
        }
        if (iVar3 != 0) {
          cVar5 = *(char *)(iVar2 + -0x3fe6);
          uVar4 = 0x32;
          if (cVar5 < '\x01') {
            cVar5 = *(char *)(iVar2 + -0x3fe5);
          }
          if (cVar5 < '\x01') {
            if ('\0' < *(char *)(iVar2 + -0x3fe4)) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 100;
          }
          iVar3 = fn_00655488(uVar4,100);
          if (iVar3 != 0) {
            iVar3 = fn_00691af0(local_3c,1);
            uVar4 = fn_00691af0(local_3c,2);
            uVar14 = local_34;
            if (local_34 >= 4) {
              uVar14 = local_38;
            }
            if ((local_34 < 4 || uVar14 < 4) || (iVar11 == 0x20 || iVar11 == 0x22)) {
              iVar8 = param_3 + 0x180388 + *(char *)((int)param_4 + iVar10 * 0x1a0 + 9) * 0x418;
              uVar15 = fn_00300f74(*(int *)(iVar8 + -0x3c78) * iVar3,uVar4);
              puVar7 = (uint *)((ulonglong)uVar15 >> 0x20);
              local_60 = (uint)uVar15;
              local_30[0] = 0;
              local_5c[0] = *(uint *)(iVar8 + -0x3c74);
              if (0x7fffffff < local_5c[0]) goto code_r0x00626f78;
              if ((int)local_60 < 0) {
                puVar7 = local_30;
              }
              if (local_60 < 0x80000000) {
                puVar7 = &local_60;
              }
              if ((int)local_5c[0] < (int)*puVar7) {
                puVar7 = local_5c;
              }
              local_60 = *puVar7;
              local_50[0] = 0;
              local_5c[0] = (short)(ushort)*(byte *)(iVar2 + -0x4028) * 100;
              puVar7 = (uint *)0x0;
              if ((short)(ushort)*(byte *)(iVar2 + -0x4028) * -100 != 0 && local_5c[0] == 0)
              goto code_r0x00626f78;
              if ((int)local_60 < 0) {
                puVar7 = local_50;
              }
              if (local_60 < 0x80000000) {
                puVar7 = &local_60;
              }
              if ((int)local_5c[0] < (int)*puVar7) {
                puVar7 = local_5c;
              }
              uVar14 = *puVar7;
              *(uint *)(iVar8 + -0x3c74) = *(int *)(iVar8 + -0x3c74) - uVar14;
              *(uint *)(param_3 + 0x180468) = *(int *)(param_3 + 0x180468) + uVar14;
            }
            else {
              uVar15 = fn_00300f74(*(int *)(param_3 + 0x180464) * iVar3,uVar4);
              puVar7 = (uint *)((ulonglong)uVar15 >> 0x20);
              local_60 = (uint)uVar15;
              local_50[0] = 0;
              local_5c[0] = *(uint *)(param_3 + 0x180468);
              if (0x7fffffff < local_5c[0]) {
code_r0x00626f78:
                    /* WARNING: Subroutine does not return */
                fn_00146590();
              }
              if ((int)local_60 < 0) {
                puVar7 = local_50;
              }
              if (local_60 < 0x80000000) {
                puVar7 = &local_60;
              }
              if ((int)local_5c[0] < (int)*puVar7) {
                puVar7 = local_5c;
              }
              local_60 = *puVar7;
              local_5c[0] = (short)(ushort)*(byte *)(iVar2 + -0x4028) * 100;
              puVar7 = (uint *)0x0;
              if ((short)(ushort)*(byte *)(iVar2 + -0x4028) * -100 != 0 && local_5c[0] == 0)
              goto code_r0x00626f78;
              if ((int)local_60 < 0) {
                puVar7 = local_50;
              }
              if (local_60 < 0x80000000) {
                puVar7 = &local_60;
              }
              if ((int)local_5c[0] < (int)*puVar7) {
                puVar7 = local_5c;
              }
              uVar14 = *puVar7;
              *(uint *)(param_3 + 0x180468) = *(int *)(param_3 + 0x180468) - uVar14;
              *(uint *)(iVar2 + -0x3c74) = *(int *)(iVar2 + -0x3c74) + uVar14;
            }
            local_50[0] = 0;
            iVar12 = iVar12 + uVar14;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *param_4);
      if (iVar12 != 0) {
        iVar2 = param_4[1];
        *(undefined1 *)((int)param_4 + iVar2 * 0x1a0 + 0x208a) = 4;
        *(undefined2 *)(param_4 + iVar2 * 0x68 + 0x823) = 0xe;
        *(char *)(param_4 + iVar2 * 0x68 + 0x822) = cVar1;
        *(char *)((int)param_4 + iVar2 * 0x1a0 + 0x2089) = cVar1;
        *(undefined1 *)((int)param_4 + iVar2 * 0x1a0 + 0x208e) = 0;
        *(undefined1 *)((int)param_4 + iVar2 * 0x1a0 + 0x208f) = 8;
        param_4[iVar2 * 0x68 + 0x829] = iVar12;
        param_4[1] = param_4[1] + 1;
      }
    }
  }
  return;
}



int fn_00626c48(undefined4 param_1,int param_2,int param_3)

{
  return param_2 + *(char *)(param_3 + 5) * 0x418 + -0x4080;
}



int fn_00626c2c(undefined4 param_1,int param_2,int param_3)

{
  return param_2 + *(char *)(param_3 + 5) * 0x418 + -0x4080;
}



void fn_006267fc(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined2 auStack_80 [4];
  char acStack_78 [12];
  undefined1 *local_6c;
  undefined1 auStack_68 [24];
  char acStack_50 [28];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  iVar11 = 0x10;
  bVar4 = false;
  iVar12 = param_3 + 0x180388;
  bVar5 = false;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  do {
    iVar7 = fn_006f44fc(iVar12 + iVar11 * 0x418 + -0x4080,0x1c9);
    if (iVar7 != 0) {
      bVar5 = true;
      break;
    }
    iVar11 = (int)(char)((char)iVar11 + '\x01');
  } while (iVar11 < 0x14);
  iVar11 = 0x14;
  do {
    iVar8 = fn_006f44fc(iVar12 + iVar11 * 0x418 + -0x4080,0x1c9);
    iVar7 = local_34;
    if (iVar8 != 0) {
      bVar4 = true;
      break;
    }
    iVar11 = (int)(char)((char)iVar11 + '\x01');
  } while (iVar11 < 0x18);
  iVar11 = local_34 + 4;
  if (*(char *)(local_34 + 0x18) == '\0') {
    fn_00166824(acStack_50 + 0x10,local_34 + 0x74);
    fn_00301a9c(auStack_68,iVar7 + 0x7c,0x28);
    iVar7 = 0x10;
    uVar10 = extraout_r1;
    do {
      cVar2 = (char)iVar7;
      if (*(char *)(param_2 + 0xfb) != '\0') {
        uVar9 = iVar7 - 0x10;
        if (uVar9 >= 8) {
          uVar10 = iVar7 - 0x18;
        }
        if (uVar9 < 8 || uVar10 < 8) {
          bVar14 = uVar9 < 4;
          if (!bVar14) {
            uVar9 = iVar7 - 0x18;
          }
          if ((bVar14 || uVar9 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
            cVar6 = cVar2 + '\x04';
          }
          else {
            cVar6 = cVar2 + -4;
          }
          iVar7 = (int)cVar6;
        }
        else if (iVar7 - 0x20U < 2) {
          if (iVar7 == 0x20 || iVar7 == 0x22) {
            iVar7 = 0x21;
          }
          else {
            iVar7 = 0x20;
          }
        }
        else if (iVar7 - 0x22U < 2) {
          if (iVar7 == 0x20 || iVar7 == 0x22) {
            iVar7 = 0x23;
          }
          else {
            iVar7 = 0x22;
          }
        }
        else {
          iVar7 = 0;
        }
      }
      uVar10 = 7;
      iVar8 = param_2 + iVar7 * 0x418;
      if ((((*(char *)(iVar8 + -0x401e) == '\0') && (uVar10 = 8, *(char *)(iVar8 + -0x401d) == '\0')
           ) && (uVar10 = 9, *(char *)(iVar8 + -0x401c) == '\0')) &&
         ((uVar10 = 0xc, *(char *)(iVar8 + -0x4019) == '\0' &&
          (uVar10 = 0x2c, *(char *)(iVar8 + -0x3ff9) == '\0')))) {
        uVar15 = fn_006f44fc(iVar8 + -0x4080,0xc6);
        uVar10 = (uint)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 == 0) {
          uVar9 = iVar7 - 0x10;
          bVar14 = 3 < uVar9;
          if (bVar14) {
            uVar9 = iVar7 - 0x18;
          }
          bVar3 = bVar4;
          if ((bVar14 && 3 < uVar9) && (iVar7 != 0x20 && iVar7 != 0x22)) {
            bVar3 = bVar5;
          }
          uVar1 = (undefined1)iVar7;
          if ((!bVar3) && (acStack_50[iVar7] != '\0')) {
            local_6c = (undefined1 *)(local_28 + *(int *)(local_28 + 4) * 0x1a0 + 0x2088);
            fn_00301f50(local_6c,0x1a0);
            local_6c[2] = 0x12;
            *(ushort *)(local_6c + 4) = (ushort)*(byte *)(iVar8 + -0x407e);
            *(undefined2 *)(local_6c + 0x18) = 1;
            *local_6c = uVar1;
            local_6c[1] = uVar1;
            local_6c[0x59] = 1;
            local_6c[0xba] = 1;
            acStack_78[8] = '\x01';
            acStack_78[9] = '\0';
            acStack_78[10] = '\0';
            acStack_78[0xb] = '\0';
            fn_0062454c(local_34,local_6c,iVar12,0);
            fn_00654bf4(iVar12,*(undefined4 *)(local_6c + 0x194));
            fn_00654c30(iVar12,*(undefined4 *)(local_6c + 0x198));
            uVar10 = *(int *)(local_28 + 4) + 1;
            *(uint *)(local_28 + 4) = uVar10;
          }
          if (acStack_78[iVar7] != '\0') {
            iVar8 = local_28 + *(int *)(local_28 + 4) * 0x1a0;
            puVar13 = (undefined1 *)(iVar8 + 0x2088);
            fn_00301f50(puVar13,0x1a0);
            *(undefined1 *)(iVar8 + 0x208a) = 0x13;
            *(undefined2 *)(iVar8 + 0x208c) = auStack_80[iVar7];
            *(undefined2 *)(iVar8 + 0x20a0) = 1;
            *puVar13 = uVar1;
            *(undefined1 *)(iVar8 + 0x2089) = uVar1;
            *(char *)(iVar8 + 0x20e1) = acStack_78[iVar7 * 2 + 8];
            *(undefined1 *)(iVar8 + 0x2142) = 1;
            acStack_78[8] = '\x01';
            acStack_78[9] = '\0';
            acStack_78[10] = '\0';
            acStack_78[0xb] = '\0';
            fn_0062454c(local_34,puVar13,iVar12,0);
            fn_00654bf4(iVar12,*(undefined4 *)(iVar8 + 0x221c));
            fn_00654c30(iVar12,*(undefined4 *)(iVar8 + 0x2220));
            uVar10 = *(int *)(local_28 + 4) + 1;
            *(uint *)(local_28 + 4) = uVar10;
          }
        }
      }
      iVar7 = (int)(char)(cVar2 + '\x01');
    } while (iVar7 < 0x18);
  }
  fn_0012a2d0(iVar11);
  fn_00656104(iVar11);
  return;
}


