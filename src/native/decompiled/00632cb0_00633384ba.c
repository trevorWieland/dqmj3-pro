#include "00632cb0_00633384ba.h"



undefined4 fn_006331c4(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  
  local_30 = *(uint *)(param_1 + 0x2f);
  local_2c = *(undefined4 *)(param_1 + 0x33);
  local_28 = *(undefined4 *)(param_1 + 0x37);
  local_24 = *(uint *)(param_1 + 0x3b);
  uVar6 = *(uint *)(param_1 + 0x3f);
  local_20 = uVar6;
  local_1c = *(undefined4 *)(param_1 + 0x43);
  uVar3 = local_30 & 0xff;
  if (uVar3 == 0) {
    uVar6 = local_24 & 0xff;
  }
  if (uVar3 != 0 || uVar6 != 0) {
    iVar9 = param_2 + 0x180388;
    bVar2 = false;
    if (uVar3 == 3) {
      iVar7 = 0;
      do {
        iVar4 = (int)*(char *)((int)&local_2c + iVar7);
        uVar6 = iVar4 - 0x10;
        bVar11 = 7 < uVar6;
        if (bVar11) {
          uVar6 = iVar4 - 0x18;
        }
        if (!bVar11 || uVar6 < 8) {
          iVar5 = iVar9 + iVar4 * 0x418;
          bVar11 = (short *)(iVar5 + -0x4080) == (short *)0x0;
          iVar8 = 0;
          iVar4 = iVar4 * 3;
          if (!bVar11) {
            iVar8 = (int)*(short *)(iVar5 + -0x4080);
            iVar4 = iVar8;
          }
          if ((!bVar11 && iVar4 != 0) && iVar8 < 0 == (bVar11 && SBORROW4(iVar5 + 0x3f80,0x8000))) {
            cVar1 = *(char *)(iVar5 + -0x4019);
            bVar11 = cVar1 == '\0';
            if (bVar11) {
              cVar1 = *(char *)(iVar5 + -0x400a);
            }
            bVar10 = bVar11 && cVar1 == '\0';
            if (bVar11 && cVar1 == '\0') {
              bVar10 = *(char *)(iVar5 + -0x4018) == '\0';
            }
            if (bVar10) {
              bVar2 = true;
              fn_00619720(param_2 + 0x184608);
              goto LAB_006332b0;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      local_30 = local_30 & 0xffffff00;
    }
LAB_006332b0:
    if ((char)local_24 == '\x03') {
      iVar7 = 0;
      do {
        iVar4 = (int)*(char *)((int)&local_20 + iVar7);
        uVar6 = iVar4 - 0x10;
        bVar11 = 7 < uVar6;
        if (bVar11) {
          uVar6 = iVar4 - 0x18;
        }
        if (!bVar11 || uVar6 < 8) {
          iVar5 = iVar9 + iVar4 * 0x418;
          bVar11 = (short *)(iVar5 + -0x4080) == (short *)0x0;
          iVar8 = 0;
          iVar4 = iVar4 * 3;
          if (!bVar11) {
            iVar8 = (int)*(short *)(iVar5 + -0x4080);
            iVar4 = iVar8;
          }
          if ((!bVar11 && iVar4 != 0) && iVar8 < 0 == (bVar11 && SBORROW4(iVar5 + 0x3f80,0x8000))) {
            cVar1 = *(char *)(iVar5 + -0x4019);
            bVar11 = cVar1 == '\0';
            if (bVar11) {
              cVar1 = *(char *)(iVar5 + -0x400a);
            }
            bVar10 = bVar11 && cVar1 == '\0';
            if (bVar11 && cVar1 == '\0') {
              bVar10 = *(char *)(iVar5 + -0x4018) == '\0';
            }
            if (bVar10) {
              fn_00619720(param_2 + 0x184610);
              goto LAB_00633350;
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      local_24 = local_24 & 0xffffff00;
    }
    if (bVar2) {
LAB_00633350:
      fn_0061d498(iVar9,&local_30,param_2);
      return 1;
    }
  }
  return 0;
}


