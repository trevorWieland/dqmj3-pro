#include "0019a32c_0019a32c.h"



/* WARNING: Removing unreachable block (ram,0x0019a644) */

undefined4 fn_0019a32c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 in_s0;
  undefined4 in_s1;
  char local_40 [24];
  undefined1 auStack_28 [8];
  
  cVar1 = *(char *)(param_1 + 0x2c);
  uVar11 = 1;
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x38); uVar4 = uVar4 + 1) {
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
  if (0xff < iVar5) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
  }
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(char *)(param_1 + 0x2c) = (char)iVar5;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (cVar1 != '0') {
LAB_0019a5dc:
    local_40[0] = cVar1;
    fn_001a293c(param_1 + 0x34,local_40);
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x2c);
      if (uVar4 == 0x2e) {
LAB_0019a62c:
        uVar11 = 2;
        if (uVar4 == 0x65 || uVar4 == 0x45) {
          piVar6 = (int *)(param_1 + 0x34);
          uVar3 = *(undefined1 *)(param_1 + 0x2c);
          uVar11 = 4;
          if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
            iVar5 = *(uint *)(param_1 + 0x38) << 1;
            if (iVar5 == 0) {
              iVar5 = 4;
            }
            iVar7 = fn_0018388c(*piVar6,*(uint *)(param_1 + 0x3c),iVar5);
            *piVar6 = iVar7;
            *(int *)(param_1 + 0x3c) = iVar5;
          }
          puVar8 = (undefined1 *)(*piVar6 + *(int *)(param_1 + 0x38));
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = uVar3;
          }
          iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
          if (0xff < iVar5) {
            (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
          }
          if (iVar5 == 0) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else {
            *(char *)(param_1 + 0x2c) = (char)iVar5;
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          if (*(char *)(param_1 + 0x2c) == '+' || *(char *)(param_1 + 0x2c) == '-') {
            piVar6 = (int *)(param_1 + 0x34);
            uVar3 = *(undefined1 *)(param_1 + 0x2c);
            if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
              iVar5 = *(uint *)(param_1 + 0x38) << 1;
              if (iVar5 == 0) {
                iVar5 = 4;
              }
              iVar7 = fn_0018388c(*piVar6,*(uint *)(param_1 + 0x3c),iVar5);
              *piVar6 = iVar7;
              *(int *)(param_1 + 0x3c) = iVar5;
            }
            puVar8 = (undefined1 *)(*piVar6 + *(int *)(param_1 + 0x38));
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
            if (puVar8 != (undefined1 *)0x0) {
              *puVar8 = uVar3;
            }
            iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
            if (0xff < iVar5) {
              (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
            }
            if (iVar5 == 0) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else {
              *(char *)(param_1 + 0x2c) = (char)iVar5;
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          }
          bVar2 = *(byte *)(param_1 + 0x2c);
          piVar6 = (int *)fn_002fea64();
          if (*(char *)(*piVar6 + (uint)bVar2) != ' ') {
            (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019a878);
          }
        }
      }
      else {
        piVar6 = (int *)fn_002fea64();
        if (*(char *)(*piVar6 + uVar4) != ' ') {
          if (uVar4 == 0x65 || uVar4 == 0x45) goto LAB_0019a62c;
          goto LAB_0019a5a4;
        }
        if ((uVar4 == 0x65) || (uVar4 == 0x45)) goto LAB_0019a62c;
      }
      piVar6 = (int *)(param_1 + 0x34);
      uVar3 = *(undefined1 *)(param_1 + 0x2c);
      if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
        iVar5 = *(uint *)(param_1 + 0x38) << 1;
        if (iVar5 == 0) {
          iVar5 = 4;
        }
        iVar7 = fn_0018388c(*piVar6,*(uint *)(param_1 + 0x3c),iVar5);
        *piVar6 = iVar7;
        *(int *)(param_1 + 0x3c) = iVar5;
      }
      puVar8 = (undefined1 *)(*piVar6 + *(int *)(param_1 + 0x38));
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = uVar3;
      }
      iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
      if (0xff < iVar5) {
        (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
      }
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(char *)(param_1 + 0x2c) = (char)iVar5;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    } while( true );
  }
  iVar5 = fn_00102b04(*(undefined1 *)(param_1 + 0x2c));
  uVar4 = *(byte *)(param_1 + 0x2c) - 0x30;
  if (iVar5 == 0x58) {
    if (7 < uVar4) {
      iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
      if (0xff < iVar5) {
        (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
      }
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(char *)(param_1 + 0x2c) = (char)iVar5;
      }
      uVar11 = 3;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      piVar6 = (int *)fn_002fea64();
      while (uVar4 = (uint)*(byte *)(*piVar6 + (uint)*(byte *)(param_1 + 0x2c)),
            ((uVar4 ^ uVar4 << 2) & 0x80) != 0) {
        piVar10 = (int *)(param_1 + 0x34);
        uVar3 = *(undefined1 *)(param_1 + 0x2c);
        if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
          iVar5 = *(uint *)(param_1 + 0x38) << 1;
          if (iVar5 == 0) {
            iVar5 = 4;
          }
          iVar7 = fn_0018388c(*piVar10,*(uint *)(param_1 + 0x3c),iVar5);
          *piVar10 = iVar7;
          *(int *)(param_1 + 0x3c) = iVar5;
        }
        puVar8 = (undefined1 *)(*piVar10 + *(int *)(param_1 + 0x38));
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = uVar3;
        }
        iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
        if (0xff < iVar5) {
          (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
        }
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 0x2c) = 0;
        }
        else {
          *(char *)(param_1 + 0x2c) = (char)iVar5;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      if (8 < *(uint *)(param_1 + 0x38)) {
        (**(code **)(param_1 + 0x40))
                  (*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019a83c);
      }
      goto LAB_0019a5a4;
    }
  }
  else if (7 < uVar4) goto LAB_0019a5dc;
  uVar11 = 5;
  while (*(byte *)(param_1 + 0x2c) - 0x30 < 8) {
    piVar6 = (int *)(param_1 + 0x34);
    uVar3 = *(undefined1 *)(param_1 + 0x2c);
    if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
      iVar5 = *(uint *)(param_1 + 0x38) << 1;
      if (iVar5 == 0) {
        iVar5 = 4;
      }
      iVar7 = fn_0018388c(*piVar6,*(uint *)(param_1 + 0x3c),iVar5);
      *piVar6 = iVar7;
      *(int *)(param_1 + 0x3c) = iVar5;
    }
    puVar8 = (undefined1 *)(*piVar6 + *(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = uVar3;
    }
    iVar5 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28));
    if (0xff < iVar5) {
      (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0080e0fc);
    }
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(char *)(param_1 + 0x2c) = (char)iVar5;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  bVar2 = *(byte *)(param_1 + 0x2c);
  piVar6 = (int *)fn_002fea64();
  if (*(char *)(*piVar6 + (uint)bVar2) == ' ') {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44),(char *)&DAT_0019a824);
  }
LAB_0019a5a4:
  local_40[0] = '\0';
  fn_001a293c(param_1 + 0x34,local_40);
  switch(uVar11) {
  default:
    return 0;
  case 1:
    pcVar9 = *(char **)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    cVar1 = *pcVar9;
    while (cVar1 != '\0') {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 10 + -0x30 + (int)*pcVar9;
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    break;
  case 2:
  case 4:
    fn_001a2480(*(undefined4 *)(param_1 + 0x34),auStack_28);
    *(float *)(param_1 + 0x20) = (float)(double)CONCAT44(in_s1,in_s0);
    return 0x105;
  case 3:
    pcVar9 = *(char **)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*pcVar9 != '\0') {
      piVar6 = (int *)fn_002fea64();
      do {
        iVar5 = (int)*pcVar9;
        uVar4 = (uint)*(byte *)(*piVar6 + iVar5);
        if (uVar4 == 0x20) {
          iVar5 = *(int *)(param_1 + 0x1c) * 0x10 + -0x30 + iVar5;
        }
        else {
          if (((uVar4 ^ uVar4 << 2) & 0x80) == 0) {
code_r0x0019a9b4:
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          iVar5 = fn_00102b04(iVar5);
          iVar5 = iVar5 + *(int *)(param_1 + 0x1c) * 0x10 + -0x37;
        }
        pcVar9 = pcVar9 + 1;
        *(int *)(param_1 + 0x1c) = iVar5;
      } while (*pcVar9 != '\0');
    }
    break;
  case 5:
    pcVar9 = *(char **)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    cVar1 = *pcVar9;
    while (cVar1 != '\0') {
      if (7 < (int)*pcVar9 - 0x30U) goto code_r0x0019a9b4;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 8 + -0x30 + (int)*pcVar9;
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
  }
  return 0x104;
}


