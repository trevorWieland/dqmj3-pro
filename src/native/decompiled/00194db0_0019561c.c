#include "00194db0_0019561c.h"



void fn_0019561c(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*(int *)(param_1 + 4) != 0) && (param_2 <= *param_1)) {
    if (((DAT_008c05d4 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c05d4), iVar1 != 0)) {
      DAT_008ecb10 = 0;
      DAT_008ecb14 = 0;
      DAT_008ecb18 = 0x3f800000;
      DAT_008ecb1c = 0;
      DAT_008ecb20 = 0;
      DAT_008ecb24 = 0x3f800000;
      DAT_008ecb28 = 0x3f800000;
      DAT_008ecb2c = 0x3f800000;
    }
    uVar3 = (uint)param_1[1];
    iVar1 = 0;
    uVar8 = param_2 - uVar3;
    uVar7 = uVar8 & 1;
    do {
      if (0 < (int)uVar8) {
        iVar4 = 0;
        if ((int)uVar3 < (int)param_2) {
          uVar2 = uVar7;
          if (uVar7 == 1) {
            uVar6 = (&DAT_008ecb14)[iVar1 * 2];
            puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 0x20 + iVar1 * 8);
            iVar4 = 1;
            *puVar5 = (&DAT_008ecb10)[iVar1 * 2];
            puVar5[1] = uVar6;
          }
        }
        else {
          uVar2 = 0;
        }
        if ((int)uVar2 < (int)uVar8) {
          do {
            uVar6 = (&DAT_008ecb14)[iVar1 * 2];
            puVar5 = (undefined4 *)((uVar3 + iVar4) * 0x20 + iVar1 * 8 + *(int *)(param_1 + 4));
            *puVar5 = (&DAT_008ecb10)[iVar1 * 2];
            puVar5[1] = uVar6;
            uVar6 = (&DAT_008ecb14)[iVar1 * 2];
            puVar5 = (undefined4 *)((uVar3 + iVar4 + 1) * 0x20 + iVar1 * 8 + *(int *)(param_1 + 4));
            uVar2 = uVar2 + 2;
            *puVar5 = (&DAT_008ecb10)[iVar1 * 2];
            puVar5[1] = uVar6;
            iVar4 = iVar4 + 2;
          } while ((int)uVar2 < (int)uVar8);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    param_1[1] = (byte)param_2;
  }
  return;
}



void fn_0019559c(byte *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 < param_2) {
    if (*(int *)(param_1 + 4) != 0) {
      fn_0019fb94();
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = 0;
      param_1[1] = 0;
    }
    iVar1 = fn_00194ee4(param_2 << 5,4);
    iVar3 = 0;
    if ((iVar1 != 0) && (uVar2 = 0, iVar3 = iVar1, param_2 * 4 != 0)) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2 * 4);
    }
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 != 0) {
      *param_1 = (byte)param_2;
    }
  }
  return;
}



undefined4 * fn_0019533c(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  
  *param_1 = &DAT_00857ed8;
  puVar4 = (undefined4 *)fn_00101a1c(param_1 + 0x1b,fn_0017d8f8,4,2);
  uVar7 = 0;
  puVar8 = puVar4 + -0x1b;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_2 + 0x7c);
  puVar4[5] = *(undefined4 *)(param_2 + 0x80);
  *puVar4 = *(undefined4 *)(param_2 + 0x6c);
  puVar4[1] = *(undefined4 *)(param_2 + 0x70);
  fn_001a40b8(puVar8,puVar4 + 2);
  fn_001a40b8(puVar8,(int)puVar4 + 10);
  uVar5 = (uint)*(ushort *)(param_2 + 0x74);
  fn_0019fdf4(puVar8,uVar5 & 3,(uVar5 & 0xf) >> 2,(uVar5 & 0x3f) >> 4,(uVar5 & 0x1ff) >> 6,
               (uVar5 & 0x200) >> 9,(uVar5 & 0xfff) >> 10,uVar7,(uVar5 & 0x7fff) >> 0xd,
               *(ushort *)(param_2 + 0x74) >> 0xf,(uVar5 & 0x1000) >> 0xc);
  if (puVar4[3] != 0) {
    *(ushort *)((int)puVar4 + 10) =
         *(ushort *)(param_2 + 0x76) & 3 | *(ushort *)((int)puVar4 + 10) & 0xfffc;
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf7;
    *(ushort *)((int)puVar4 + 10) =
         *(ushort *)(param_2 + 0x76) & 0xc | *(ushort *)((int)puVar4 + 10) & 0xfff3;
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf7;
    *(ushort *)((int)puVar4 + 10) =
         *(ushort *)(param_2 + 0x76) & 0x30 | *(ushort *)((int)puVar4 + 10) & 0xffcf;
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf7;
    uVar2 = *(ushort *)((int)puVar4 + 10);
    uVar3 = *(ushort *)(param_2 + 0x76) & 0x1c0;
    *(ushort *)((int)puVar4 + 10) = uVar3 | uVar2 & 0xfe3f;
    uVar1 = *(ushort *)(param_2 + 0x76) & 0x6000;
    *(ushort *)((int)puVar4 + 10) = uVar1 | uVar3 | uVar2 & 0x9e3f;
    *(ushort *)((int)puVar4 + 10) =
         *(ushort *)(param_2 + 0x76) & 0x8000 | uVar1 | uVar3 | uVar2 & 0x1e3f;
    uVar3 = *(ushort *)(puVar4 + 2);
    uVar5 = (uint)uVar3;
    bVar10 = (uVar3 & 0x1000) != 0;
    if (bVar10) {
      iVar6 = 0xc;
    }
    else {
      iVar6 = 4;
    }
    if (bVar10) {
      iVar9 = 0x1c;
    }
    else {
      iVar9 = 0;
    }
    fn_001694e4(puVar4[3],*(undefined4 *)(param_2 + 0x78),
                 (uVar3 >> 8 & 0xc) +
                 iVar9 + iVar6 * ((uVar5 & 0x1ff) >> 6) + (uVar5 & 3) * 0x20 +
                         (uVar3 >> 1 & 0x18) + ((uVar5 & 0xf) >> 2) * 0x14 + (uVar3 >> 6 & 8) +
                 ((uVar5 & 0x7fff) >> 0xd) * 0x14 + (uint)(uVar3 >> 0xf) * 8);
  }
  return puVar8;
}



void fn_0019530c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0018a644();
  *puVar1 = &DAT_00857df0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  return;
}



void fn_00195080(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  uVar8 = param_2 + 1;
  if (((*(ushort *)(param_1 + 0x33) < uVar8) || ((uint *)param_1[0x3e] == (uint *)0x0)) ||
     (*(uint *)param_1[0x3e] < param_3)) {
    (**(code **)(*param_1 + 100))(param_1);
    if (param_5 == 0) {
      uVar1 = fn_001735bc(param_3);
    }
    else {
      uVar1 = 0x48;
    }
    iVar2 = fn_00194ee4(uVar8 * 2,4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          puVar7 = (undefined2 *)(iVar2 + uVar6 * 2);
          uVar6 = uVar6 + 1;
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = 0;
          }
        } while (uVar6 < uVar8);
      }
    }
    iVar3 = fn_00194ee4(uVar1,4);
    iVar9 = 0;
    if (param_4 != 0) {
      iVar9 = fn_00194ee4(param_4,0x10);
    }
    if (param_1[0x3f] != 0) {
      iVar4 = fn_00194ee4(param_3 * 0x2c,4);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        uVar6 = 0;
        if (param_3 != 0) {
          do {
            puVar5 = (undefined4 *)(iVar4 + uVar6 * 0x2c);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0x3f800000;
              puVar5[3] = 0;
              puVar5[6] = 0;
              puVar5[1] = 0x3f800000;
              puVar5[4] = 0;
              puVar5[7] = 0;
              puVar5[2] = 0x3f800000;
              puVar5[5] = 0;
              puVar5[8] = 0;
              *(undefined1 *)(puVar5 + 9) = 0xff;
              *(undefined1 *)(puVar5 + 10) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x25) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x29) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x26) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x2a) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x27) = 0xff;
              *(undefined1 *)((int)puVar5 + 0x2b) = 0xff;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < param_3);
        }
      }
      *(int *)(param_1[0x3f] + 8) = iVar4;
    }
    if (iVar2 != 0) {
      if (((iVar3 != 0) && ((param_4 == 0 || (iVar9 != 0)))) &&
         ((param_1[0x3f] == 0 || (*(int *)(param_1[0x3f] + 8) != 0)))) {
        *(short *)(param_1 + 0x33) = (short)uVar8;
        param_1[0x29] = iVar2;
        if (param_5 == 0) {
          iVar2 = fn_00173580(iVar3,iVar9,param_4,param_3,(*(byte *)(param_1 + 0x34) & 8) >> 3);
          param_1[0x3e] = iVar2;
          return;
        }
        iVar2 = fn_001a0a94(iVar3,iVar9,param_3,(*(byte *)(param_1 + 0x34) & 8) >> 3);
        param_1[0x3e] = iVar2;
        *(int *)(iVar2 + 0x10) = param_4;
        return;
      }
      fn_0019fb94(iVar2);
    }
    if (iVar3 != 0) {
      fn_0019fb94();
    }
    if (iVar9 != 0) {
      fn_0019fb94(iVar9);
    }
    iVar3 = param_1[0x3f];
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      fn_0019fb94();
      *(undefined4 *)(param_1[0x3f] + 8) = 0;
      return;
    }
  }
  return;
}



undefined4 * fn_00194db0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00857b60;
  param_1[3] = 0;
  param_1[5] = param_1 + 5;
  param_1[4] = 0;
  param_1[6] = param_1 + 5;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = uVar2;
  param_1[9] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = uVar2;
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined1 *)((int)param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  *(undefined1 *)((int)param_1 + 0x47) = *(undefined1 *)(param_2 + 0x47);
  fn_001781f0(param_1 + 0x12,param_2 + 0x48);
  param_1[0x1e] = 0;
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x7c);
  pcVar1 = (char *)(param_2 + 0x80);
  uVar6 = 0;
  pcVar4 = (char *)(param_1 + 0x20);
  do {
    uVar6 = uVar6 + 1;
    pcVar3 = pcVar4 + 1;
    *pcVar4 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    bVar8 = *pcVar1 == '\0';
    uVar7 = 0;
    if (!bVar8) {
      uVar7 = 0x18;
    }
    pcVar4 = pcVar3;
  } while ((bVar8 || uVar6 <= uVar7) && (!bVar8 && uVar7 != uVar6));
  *pcVar3 = '\0';
  pcVar1 = (char *)(param_2 + 0x99);
  uVar6 = 0;
  pcVar4 = (char *)((int)param_1 + 0x99);
  do {
    uVar6 = uVar6 + 1;
    pcVar3 = pcVar4 + 1;
    *pcVar4 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    bVar8 = *pcVar1 == '\0';
    uVar7 = 0;
    if (!bVar8) {
      uVar7 = 8;
    }
    pcVar4 = pcVar3;
  } while ((bVar8 || uVar6 <= uVar7) && (!bVar8 && uVar7 != uVar6));
  *pcVar3 = '\0';
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xdf;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
  return param_1;
}


