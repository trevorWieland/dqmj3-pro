#include "006c4628_006c4d1c.h"



int fn_006c4d1c(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + param_3 * 2 + 4);
}



byte fn_006c4acc(int param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  bool bVar11;
  
  puVar9 = *(ushort **)(param_1 + 4);
  if (puVar9 != (ushort *)0x0) {
    uVar3 = *puVar9;
    uVar8 = 0;
    piVar4 = (int *)fn_002fea64();
    do {
      bVar2 = *(byte *)(*piVar4 + ((uint)uVar3 & (0xff << (uVar8 & 0xff)) >> (uVar8 & 0xff) & 0xff))
      ;
      if ((bVar2 & 0x3e) == 0) {
        return bVar2 & 0x3e;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    uVar8 = (uint)(byte)puVar9[1];
    bVar11 = uVar8 < 5;
    if (bVar11) {
      uVar8 = (uint)(byte)puVar9[2];
    }
    if (((bVar11 && uVar8 < 1000) && (*(byte *)((int)puVar9 + 5) - 1 < 0xc)) &&
       ((byte)puVar9[3] - 1 < 0x1f)) {
      bVar2 = *(byte *)((int)puVar9 + 3);
      iVar10 = 0;
      if (bVar2 != 0) {
        do {
          puVar9 = (ushort *)(*(int *)(param_1 + 4) + iVar10 * 0x10 + 8);
          iVar5 = fn_001a46f4(*puVar9 & 0x7fff);
          if (iVar5 == 0) {
            return 0;
          }
          if ((short)puVar9[1] < 10000) {
            iVar5 = fn_0013add0();
          }
          else {
            iVar5 = *(int *)(param_1 + 8);
            if (iVar5 == 0) {
              return 0;
            }
            iVar7 = 0;
            iVar1 = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2;
            if (iVar1 < 1) {
              return 0;
            }
            while ((puVar6 = *(ushort **)(*(int *)(iVar5 + 0x14) + iVar7 * 4),
                   puVar6 == (ushort *)0x0 || (*puVar6 != puVar9[1]))) {
              iVar7 = iVar7 + 1;
              if (iVar1 <= iVar7) {
                return 0;
              }
            }
            iVar5 = fn_001a46f4((int)(short)puVar6[1]);
          }
          if (iVar5 == 0) {
            return 0;
          }
          uVar8 = 0;
          do {
            uVar3 = puVar9[uVar8 + 2];
            if (uVar3 != 0) {
              if ((short)uVar3 < 10000) {
                iVar5 = fn_0013add0();
              }
              else {
                iVar5 = *(int *)(param_1 + 8);
                if (iVar5 == 0) {
                  return 0;
                }
                iVar7 = 0;
                iVar1 = *(int *)(iVar5 + 0x18) - *(int *)(iVar5 + 0x14) >> 2;
                if (iVar1 < 1) {
                  return 0;
                }
                while ((puVar6 = *(ushort **)(*(int *)(iVar5 + 0x14) + iVar7 * 4),
                       puVar6 == (ushort *)0x0 || (*puVar6 != uVar3))) {
                  iVar7 = iVar7 + 1;
                  if (iVar1 <= iVar7) {
                    return 0;
                  }
                }
                iVar5 = fn_001a46f4((int)(short)puVar6[1]);
              }
              if (iVar5 == 0) {
                return 0;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(uint)bVar2);
      }
      return 1;
    }
  }
  return 0;
}



void fn_006c4a90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  fn_001142a8(param_1,*(byte *)(iVar1 + 4) + 2000,*(undefined1 *)(iVar1 + 5),
               *(undefined1 *)(iVar1 + 6),0,0,0,0);
  return;
}



int fn_006c4a7c(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x10 + 8;
}



int fn_006c4998(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  uint uVar3;
  
  uVar3 = (uint)**(char **)(param_1 + 0x2c);
  if ((int)uVar3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    if (uVar1 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x30);
    }
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(short *)(unaff_r4 + iVar2 * 0x48) == param_2) {
          return unaff_r4 + iVar2 * 0x48;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  if ((int)uVar1 < (int)uVar3) {
    iVar2 = *(int *)(param_1 + 0x30);
    do {
      if (*(short *)(iVar2 + uVar1 * 0x48) == param_2) {
        return iVar2 + uVar1 * 0x48;
      }
      if (*(short *)(iVar2 + uVar1 * 0x48 + 0x48) == param_2) {
        return iVar2 + uVar1 * 0x48 + 0x48;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
  return 0;
}



undefined4 fn_006c496c(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x2c8);
}



undefined4 fn_006c4918(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = param_1[2];
  uVar2 = 1;
  bVar3 = iVar1 != 0x50435042;
  if (!bVar3) {
    iVar1 = param_1[3];
  }
  if ((bVar3 || iVar1 != 0x1000) ||
     (iVar1 = fn_0025097c(*param_1,param_1[1],*(undefined4 *)(&DAT_00895bbc + param_1[6] * 4),0x20)
     , iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006c48fc(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x2cc);
}



undefined4 fn_006c48e0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x2d0);
}



byte fn_006c476c(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 < 2) || ((bVar1 == 2 || bVar1 == 3) || bVar1 == 4)) {
    return 0;
  }
  if (bVar1 == 5) {
    bVar1 = 1;
  }
  else {
    bVar1 = param_1[8];
  }
  return bVar1;
}



byte fn_006c4734(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if ((bVar1 < 2) || (bVar1 == 2 || bVar1 == 3)) {
    return 2;
  }
  if (bVar1 == 4 || bVar1 == 5) {
    bVar1 = 1;
  }
  else {
    bVar1 = param_1[1];
  }
  return bVar1;
}



char fn_006c4720(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[9];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



char * fn_006c46a4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return "doragonkei";
    }
    if (cVar1 == '\x04') {
      return "syokubutukei";
    }
    if (cVar1 == '\x03') {
      return "kemonokei";
    }
    if (cVar1 == '\a') {
      return "bussitukei";
    }
    if (cVar1 == '\x05') {
      return "akumakei";
    }
    if (cVar1 == '\x06') {
      return "zonnbikei";
    }
    if (cVar1 == '\b') {
      return "breakkei";
    }
    if (cVar1 == '\t') {
      return "???kei";
    }
  }
  return "suraimukei";
}



char * fn_006c4628(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
LAB_006c4678:
    return "kinsi";
  }
  if (bVar1 != 3) {
    if (bVar1 == 4) goto LAB_006c4678;
    if (bVar1 != 5) {
      bVar1 = param_1[3];
      if (bVar1 == 0) {
        return "free";
      }
      if (bVar1 != 1) {
        if (bVar1 != 2) {
          return "";
        }
        goto LAB_006c4678;
      }
    }
  }
  return "ikkainomi";
}


