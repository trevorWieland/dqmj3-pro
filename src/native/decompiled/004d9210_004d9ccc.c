#include "004d9210_004d9ccc.h"



undefined1 * fn_004d9ccc(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else if (*(char *)(param_1 + 0x18) == -3) {
    *(undefined1 *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x19) = 0;
    uVar3 = 0;
    uVar4 = 0xfd;
    if (iVar1 != 0) {
      uVar4 = 0xffff;
    }
    *(undefined1 *)(param_1 + 0x67c) = 0;
    if (iVar1 != 0) {
      do {
        uVar5 = uVar3 & 0xff;
        uVar3 = uVar3 + 1;
        puVar2 = (undefined1 *)(*(int *)(param_1 + 0x5b4) + uVar5 * 0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined2 *)(puVar2 + 2) = uVar4;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)(puVar2 + 8) = 0xffff0000;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        puVar2[0x14] = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0xffff0000;
        puVar2[0x1c] = 0;
      } while (uVar3 < *(uint *)(param_1 + 0x14));
    }
    *(undefined1 *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20) = 1;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x5b8),
                 *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x65c) * 4);
    fn_00158f6c(*(undefined4 *)(param_1 + 0x5bc),*(int *)(param_1 + 0x65c) << 2);
    *(undefined4 *)(param_1 + 0x680) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0;
    *(undefined1 *)(param_1 + 0x688) = 0;
    *(undefined1 *)(param_1 + 0x689) = 0;
    *(undefined1 *)(param_1 + 0x68a) = 0;
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined4 *)(param_1 + 0x690) = 0;
    *(undefined4 *)(param_1 + 0x694) = 0;
    *(undefined4 *)(param_1 + 0x698) = 0;
    *(undefined4 *)(param_1 + 0x69c) = 0xffff0000;
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    *(undefined1 *)(param_1 + 0x6a4) = 0;
    *(undefined4 *)(param_1 + 0x654) = 0;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x5c4),*(int *)(param_1 + 0x14) << 2);
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x6e0),*(int *)(param_1 + 0x65c) << 2);
    puVar2 = (undefined1 *)0x0;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



int fn_004d9c98(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 6;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  fn_00301f50(param_1,0x44);
  return param_1;
}



undefined8 fn_004d996c(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 0x18) == -3) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
  }
  else {
    uVar9 = fn_006d4504(param_1);
    if ((int)uVar9 != 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x18);
      uVar1 = 1 << (param_2 & 0xff);
      if ((*(uint *)(*(int *)(param_1 + 0x5b4) + uVar5 * 0x20 + 4) & uVar1) == 0) {
        if (DAT_008c0630 != 0) {
          uVar5 = 8;
        }
        return CONCAT44(uVar5,0xe0e14826);
      }
      iVar8 = *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x654) + *(int *)(param_1 + 0x6b0);
      puVar2 = (uint *)fn_004d7bc8(param_1,uVar5,iVar8);
      puVar6 = (undefined4 *)*puVar2;
      if (((uint)puVar6 & uVar1) == 0) {
        *puVar2 = (uint)puVar6 | uVar1;
        iVar4 = (iVar8 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
        iVar7 = *(int *)(param_1 + 0x65c);
        if (iVar4 < 0) {
          iVar4 = iVar4 + iVar7;
        }
        else if (iVar7 <= iVar4) {
          iVar4 = iVar4 - iVar7;
        }
        iVar7 = param_1 + param_2 * 8;
        fn_001694e4(((uint)*(byte *)(param_1 + 0x18) * *(int *)(param_1 + 0x65c) + iVar4) *
                     *(int *)(param_1 + 0x650) + *(int *)(iVar7 + 0x5c8) + *(int *)(param_1 + 0x5c0)
                     ,param_3,*(undefined4 *)(iVar7 + 0x5cc));
        iVar8 = fn_006d45c4(param_1,*(undefined1 *)(param_1 + 0x18),iVar8);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x6e0) + iVar8 * 4);
        puVar3 = (undefined1 *)0x0;
        *puVar6 = 0;
      }
      else {
        puVar3 = &DAT_d8a1482e;
      }
      return CONCAT44(puVar6,puVar3);
    }
    param_2 = (uint)((ulonglong)uVar9 >> 0x20);
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
  }
  return CONCAT44(param_2,&DAT_e0a14827);
}



undefined4 fn_004d989c(int param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  cVar1 = *(char *)(param_1 + 0x19);
  if ((cVar1 != '\x01' && cVar1 != '\x02') && (cVar1 != '\x03')) {
    return 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 1) = 0;
  *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x68c);
  *(undefined1 *)(param_1 + 0x19) = 4;
  *(undefined1 *)(param_1 + 0x67c) = param_2;
  DAT_008ee0d0 = param_2;
  *(undefined1 *)(param_1 + 0x689) = 1;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 0x18) =
       0xffff0000;
  *(undefined1 *)(param_1 + 0x68a) = 0;
  *(undefined4 *)(param_1 + 0x698) = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      uVar4 = uVar2 & 0xff;
      uVar2 = uVar2 + 1;
      iVar3 = *(int *)(param_1 + 0x5b4) + uVar4 * 0x20;
      if (*(char *)(iVar3 + 0x14) != '\0') {
        *(undefined1 *)(iVar3 + 1) = 0;
      }
    } while (uVar2 < *(uint *)(param_1 + 0x14));
  }
  return 1;
}



void fn_004d97f4(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x18) != -3) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      do {
        uVar3 = uVar2 & 0xff;
        uVar2 = uVar2 + 1;
        puVar1 = (undefined1 *)(*(int *)(param_1 + 0x5b4) + uVar3 * 0x20);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0xffff;
        *(undefined4 *)(puVar1 + 4) = 0;
        *(undefined4 *)(puVar1 + 8) = 0xffff0000;
        *(undefined4 *)(puVar1 + 0xc) = 0;
        *(undefined4 *)(puVar1 + 0x10) = 0;
        puVar1[0x14] = 0;
        *(undefined4 *)(puVar1 + 0x18) = 0xffff0000;
        puVar1[0x1c] = 0;
      } while (uVar2 < *(uint *)(param_1 + 0x14));
    }
    *(undefined1 *)(param_1 + 0x18) = 0xfd;
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x654) = 0;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x5c4),*(int *)(param_1 + 0x14) << 2);
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
  }
  return;
}



longlong fn_004d9210(int param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  uVar4 = 0;
  puVar7 = &DAT_e0a14827;
  if (*(char *)(param_1 + 0x18) == -3) {
    if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
  }
  else if (*(char *)(param_1 + 0x19) == '\0') {
    puVar7 = (undefined1 *)0xe0e14826;
    if ((param_3 == 0) || (*(uint *)(param_1 + 0x658) < param_3)) {
      if (DAT_008c0630 != 0) {
        uVar4 = 8;
      }
    }
    else if (param_2 >> 0x10 == 0) {
      if (param_4 == 0) {
        if (DAT_008c0630 != 0) {
          uVar4 = 8;
        }
      }
      else {
        uVar5 = 0;
        while (((param_2 & 1 << (uVar5 & 0xff)) == 0 || (*(int *)(param_1 + uVar5 * 8 + 0x5cc) != 0)
               )) {
          uVar5 = uVar5 + 1;
          if (0xf < uVar5) {
            *(undefined4 *)(param_1 + 0x68c) = 0;
            uVar5 = 0;
            if (*(int *)(param_1 + 0x14) != 0) {
              do {
                uVar8 = uVar5 & 0xff;
                pcVar2 = (char *)(*(int *)(param_1 + 0x5b4) + uVar8 * 0x20);
                if (*(byte *)(param_1 + 0x18) == uVar8) {
                  sVar1 = *(short *)(pcVar2 + 2);
                  pcVar2[1] = '\x01';
                  pcVar2[0x14] = '\0';
                  sVar6 = sVar1 + 1;
                  pcVar2[0x18] = '\0';
                  pcVar2[0x19] = '\0';
                  pcVar2[0x1a] = -1;
                  pcVar2[0x1b] = -1;
                  *(short *)(pcVar2 + 2) = sVar6;
                  if (sVar6 == -1) {
                    *(short *)(pcVar2 + 2) = sVar1 + 2;
                  }
                  *(uint *)(pcVar2 + 4) = param_2;
                  if (*(int *)(param_1 + 0x64c) != 0) {
                    *(uint *)(pcVar2 + 4) = param_2 | 0x10000;
                  }
                  pcVar2[0xc] = -1;
                  pcVar2[0xd] = -1;
                  pcVar2[0xe] = -1;
                  pcVar2[0xf] = -1;
                  *(uint *)(*(int *)(param_1 + 0x5c4) + uVar5 * 4) = param_3;
                }
                else if (*pcVar2 != '\0') {
                  *(uint *)(param_1 + 0x68c) = *(uint *)(param_1 + 0x68c) | 1 << uVar8;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(param_1 + 0x14));
            }
            *(int *)(param_1 + 0x660) = param_4;
            *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_1 + 0x68c);
            iVar3 = *(int *)(param_1 + 0x658) * -2 + -10;
            *(int *)(param_1 + 0x668) = iVar3;
            *(int *)(param_1 + 0x66c) = iVar3;
            *(undefined4 *)(param_1 + 0x670) = 0;
            *(undefined4 *)(param_1 + 0x6d0) = 0;
            *(undefined4 *)(param_1 + 0x6d4) = 0;
            *(undefined4 *)(param_1 + 0x6d8) = 0;
            *(undefined4 *)(param_1 + 0x6dc) = 0;
            *(undefined1 *)(param_1 + 0x19) = 1;
            *(undefined4 *)(param_1 + 0x678) = 0;
            *(undefined1 *)(param_1 + 0x67c) = 0;
            *(int *)(param_1 + 0x69c) = iVar3 - *(int *)(param_1 + 0x658);
            *(undefined4 *)(param_1 + 0x6a0) = 0;
            *(undefined1 *)(param_1 + 0x6a4) = 1;
            fn_00158f6c(*(undefined4 *)(param_1 + 0x5b8),
                         *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x65c) * 4);
            fn_00158f6c(*(undefined4 *)(param_1 + 0x5bc),*(int *)(param_1 + 0x65c) << 2);
            fn_00158f6c(*(undefined4 *)(param_1 + 0x6e0),*(int *)(param_1 + 0x65c) << 2);
            DAT_008ee0c6 = 0;
            DAT_008ee0c7 = 0;
            DAT_008ee0c8 = (undefined1)*(undefined4 *)(param_1 + 0x660);
            *(undefined1 *)(param_1 + 0x6fa) = DAT_008ee0c8;
            *(undefined1 *)(param_1 + 0x6fb) = DAT_008ee0c8;
            DAT_008ee0cc = 0;
            DAT_008ee0c9 = DAT_008ee0c8;
            DAT_008ee0d0 = *(byte *)(param_1 + 0x67c);
            *(undefined4 *)(param_1 + 0x6fc) = 0;
            DAT_008ee0d4 = 0;
            *(undefined1 *)(param_1 + 0x709) = 0;
            DAT_008ee0d8 = 0;
            return (ulonglong)*(byte *)(param_1 + 0x67c) << 0x20;
          }
        }
        if (DAT_008c0630 != 0) {
          uVar4 = 8;
        }
      }
    }
    else if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar4 = 8;
  }
  return CONCAT44(uVar4,puVar7);
}


