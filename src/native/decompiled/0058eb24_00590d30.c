#include "0058eb24_00590d30.h"



void fn_0058eb24(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  
  if (*(char *)(*(int *)(param_1 + 0x80) + 0x11bc) != '\0') {
    *(undefined4 *)(param_1 + 0x70) = 7;
    *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x11bc) = 0;
  }
  bVar10 = true;
  if ((*(char *)(param_1 + 0xcd) == '\0') && (iVar3 = fn_0058e3fc(param_1), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0xcd) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    if (param_2 != 1) goto LAB_0058f05c;
    fn_00590d30(param_1,0);
    fn_0069e82c(param_1,0x100019c);
    uVar6 = 1;
    goto LAB_0058efb4;
  }
  if (iVar3 == 1) {
    if (param_2 == 0) {
      return;
    }
    if (param_2 == 1) {
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      bVar2 = *(byte *)(iVar3 + 0x2c) & 1;
      if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
        bVar2 = 1;
      }
      if (bVar2 != 1) {
        return;
      }
      uVar6 = 2;
      goto LAB_0058efb4;
    }
LAB_0058f05c:
    if (param_2 == 3) {
      uVar8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
      iVar3 = fn_00176d68(uVar8);
      uVar6 = *(undefined4 *)(param_1 + 0x2c0);
      uVar7 = *(undefined4 *)(param_1 + 0x2c4);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 700);
      *(undefined4 *)(iVar3 + 0x68) = uVar6;
      *(undefined4 *)(iVar3 + 0x78) = uVar7;
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
      uVar6 = fn_00176d68(uVar8);
      fn_005456f4(uVar6,param_1 + 0x2b0);
      fn_002b1a28(*(undefined4 *)(param_1 + 0x8c));
      if (*(int *)(param_1 + 0x9c) != -1) {
        piVar5 = (int *)fn_001c9330(*(undefined4 *)(param_1 + 0x84));
        if ((*(byte *)(piVar5 + 0xb) & 1) != 0) {
          (**(code **)(*piVar5 + 0x10))(piVar5,0);
        }
        if ((char)piVar5[5] != '\0') {
          (**(code **)(*piVar5 + 0xc))(piVar5);
        }
      }
      piVar9 = *(int **)(param_1 + 0xa8);
      piVar5 = *(int **)(param_1 + 0xac);
      if (piVar9 != piVar5) {
        do {
          if ((int *)*piVar9 != (int *)0x0) {
            (**(code **)(*(int *)*piVar9 + 0x14))();
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != piVar5);
        return;
      }
    }
    return;
  }
  if (iVar3 == 2) {
    if (param_2 == 0) {
      fn_00590d30(param_1,1);
      fn_0069e82c(param_1,0x100019c);
      return;
    }
    if (param_2 == 1) {
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      bVar2 = *(byte *)(iVar3 + 0x2c) & 1;
      if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
        bVar2 = 1;
      }
      if (bVar2 != 1) {
        return;
      }
      uVar6 = 3;
      goto LAB_0058efb4;
    }
    goto LAB_0058f05c;
  }
  if (iVar3 == 3) {
    if (param_2 == 0) {
      fn_00590d30(param_1,2);
      fn_0069e82c(param_1,0x100019d);
      uVar6 = fn_0023e194(*(undefined4 *)(param_1 + 0x88),0xc754,0);
      *(undefined4 *)(param_1 + 0xa0) = uVar6;
      fn_0023dd30(*(undefined4 *)(param_1 + 0x88),uVar6);
      return;
    }
    if (param_2 == 1) {
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      uVar4 = (uint)*(byte *)(param_1 + 0xca);
      fVar11 = (float)VectorUnsignedToFloat(uVar4 * 6,(byte)(in_fpscr >> 0x16) & 3);
      if ((fVar11 < *(float *)(iVar3 + 0x10)) && (uVar4 < 7)) {
        if ((uVar4 < *(byte *)(param_1 + 200)) || (uVar4 < *(byte *)(param_1 + 0xc9))) {
          fn_0069e82c(param_1,0x1000a1a);
        }
        *(char *)(param_1 + 0xca) = *(char *)(param_1 + 0xca) + '\x01';
      }
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      bVar2 = *(byte *)(iVar3 + 0x2c) & 1;
      if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
        bVar2 = 1;
      }
      if (bVar2 != 1) {
        return;
      }
      uVar6 = 4;
      goto LAB_0058efb4;
    }
    goto LAB_0058f05c;
  }
  if (iVar3 == 4) {
    if (param_2 == 0) {
      bVar2 = *(byte *)(param_1 + 200);
      bVar10 = bVar2 < 8;
      if (bVar10) {
        bVar2 = *(byte *)(param_1 + 0xc9);
      }
      if (!bVar10 || 7 < bVar2) {
        fn_0069e82c(param_1,0x1000a1b);
      }
      fn_00590d30(param_1,3);
      return;
    }
    if (param_2 == 1) {
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      bVar2 = *(byte *)(iVar3 + 0x2c) & 1;
      if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
        bVar2 = 1;
      }
      if (bVar2 != 1) {
        return;
      }
      uVar6 = 5;
      goto LAB_0058efb4;
    }
    goto LAB_0058f05c;
  }
  if (iVar3 == 5) {
    if (param_2 == 0) {
      fn_00590d30(param_1,4);
      return;
    }
    if (param_2 == 1) {
      iVar3 = fn_001c9330(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c));
      bVar2 = *(byte *)(iVar3 + 0x2c) & 1;
      if ((*(byte *)(iVar3 + 0x2c) & 1) != 0) {
        bVar2 = 1;
      }
      if (bVar2 != 1) {
        return;
      }
      uVar6 = 6;
      goto LAB_0058efb4;
    }
    goto LAB_0058f05c;
  }
  if (iVar3 != 6) {
    if (iVar3 == 7) {
      if (param_2 == 0) {
        fn_001f7d54(param_1,0x14,1);
        return;
      }
      if (param_2 == 1) {
        iVar3 = fn_006ad868(param_1,1);
        if (iVar3 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x70) = 8;
        iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x98));
        *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) & 0xfe;
        return;
      }
    }
    else if (iVar3 == 8) {
      if (param_2 == 0) {
        if (*(int *)(param_1 + 0xa0) != -1) {
          (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
        }
        uVar6 = 9;
        goto LAB_0058efb4;
      }
    }
    else if (iVar3 == 9 && param_2 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x80) + 9) = 1;
      return;
    }
    goto LAB_0058f05c;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xb4) != -1) {
      iVar3 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
      fn_0018d060(*(undefined4 *)(iVar3 + 0x14),8,4);
    }
    if (*(int *)(param_1 + 0xbc) != -1) {
      iVar3 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
      fn_0018d060(*(undefined4 *)(iVar3 + 0x14),8,4);
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    return;
  }
  if (param_2 != 1) goto LAB_0058f05c;
  if (*(int *)(param_1 + 0xb4) == -1) {
    *(undefined1 *)(param_1 + 0xcb) = 1;
  }
  else if (*(char *)(param_1 + 0xcb) == '\0') {
    iVar3 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = fn_0069ef00();
    if (iVar3 != 0) {
      fn_0018d060(uVar6,0,4);
    }
    *(bool *)(param_1 + 0xcb) = iVar3 != 0;
  }
  if (*(int *)(param_1 + 0xbc) == -1) {
LAB_0058ef84:
    *(bool *)(param_1 + 0xcc) = bVar10;
  }
  else if (*(char *)(param_1 + 0xcc) == '\0') {
    iVar3 = fn_002b1588(*(undefined4 *)(param_1 + 0x8c));
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    iVar3 = fn_0069ef00();
    bVar10 = iVar3 != 0;
    if (bVar10) {
      fn_0018d060(uVar6,0,4);
    }
    goto LAB_0058ef84;
  }
  iVar3 = *(int *)(param_1 + 0xc4) + 1;
  *(int *)(param_1 + 0xc4) = iVar3;
  if (iVar3 < 0x2e) {
    return;
  }
  bVar10 = *(char *)(param_1 + 0xcb) != '\0';
  cVar1 = '\0';
  if (bVar10) {
    cVar1 = *(char *)(param_1 + 0xcc);
  }
  if (!bVar10 || cVar1 == '\0') {
    return;
  }
  uVar6 = 7;
LAB_0058efb4:
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  return;
}



void fn_00590d30(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x9c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x84));
  }
  uVar1 = fn_001c9278(*(undefined4 *)(param_1 + 0x84),(&PTR_s_monster_icon_in_0089648c)[param_2],
                       *(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  piVar2 = (int *)fn_001c9330(*(undefined4 *)(param_1 + 0x84),uVar1);
  (**(code **)(*piVar2 + 0x10))(piVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00590da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x50))(piVar2,0);
  return;
}


