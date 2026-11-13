#include "0021c4c0_0021cd38.h"



void fn_0021cd38(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
LAB_0021cd50:
  do {
    piVar4 = (int *)(param_1 + iVar5 * 4 + 0x18);
    if (*piVar4 != -1) {
      switch(iVar5) {
      default:
        piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),*piVar4);
LAB_0021cdcc:
        (**(code **)(*piVar3 + 0xc))();
        break;
      case 1:
      case 7:
        piVar3 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),*piVar4);
        if ((float)piVar3[9] != 0.0) goto LAB_0021cdcc;
        fn_00159f34(*(undefined4 *)(param_1 + 4),*piVar4);
        *piVar4 = -1;
        break;
      case 3:
        fn_001854ac(*(undefined4 *)(param_1 + 4),*piVar4);
        iVar5 = fn_00154a6c();
        if (*(int *)(param_1 + 0x138) == 5) {
          if (iVar5 != 0) {
            fn_00159f34(*(undefined4 *)(param_1 + 4),*piVar4);
            *piVar4 = -1;
            uVar2 = fn_001853ec(*(undefined4 *)(param_1 + 4),(char *)&DAT_0021cf28,
                                 *(undefined4 *)(param_1 + 0x10));
            *(undefined4 *)(param_1 + 0x24) = uVar2;
            piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 4),uVar2);
            (**(code **)(*piVar4 + 0x50))(piVar4,1);
            *(undefined4 *)(param_1 + 0x138) = 6;
          }
        }
        else if ((*(int *)(param_1 + 0x138) == 7) && (iVar5 != 0)) {
          fn_00159f34(*(undefined4 *)(param_1 + 4),*piVar4);
          *piVar4 = -1;
          *(undefined4 *)(param_1 + 0x138) = 0;
        }
        iVar5 = 4;
        goto LAB_0021cd50;
      case 4:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        break;
      }
    }
    iVar5 = iVar5 + 1;
    if (0x11 < iVar5) {
      piVar3 = *(int **)(param_1 + 0x20c);
      for (piVar4 = (int *)*piVar3; piVar4 != piVar3; piVar4 = (int *)*piVar4) {
        if (piVar4[4] != -1) {
          piVar1 = (int *)fn_001c8a8c(*(undefined4 *)(param_1 + 4));
          (**(code **)(*piVar1 + 0xc))();
        }
      }
      return;
    }
  } while( true );
}



void fn_0021cbcc(int param_1)

{
  int iVar1;
  uint uVar2;
  float in_s0;
  int iVar3;
  float in_s1;
  float in_s2;
  undefined1 local_18 [12];
  
  if (*(int *)(param_1 + 0x224) != *(int *)(param_1 + 0x228)) {
    fn_0021d738(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x224) + *(int *)(param_1 + 0x230) * 4);
    in_s0 = in_s0 - *(float *)(iVar1 + 0x1c);
    in_s1 = in_s1 - *(float *)(iVar1 + 0x20);
    in_s2 = in_s2 - *(float *)(iVar1 + 0x24);
    if ((0x41200000 < (int)SQRT(in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2)) ||
       ((*(byte *)(iVar1 + 0x44) & 1) == 0)) {
      iVar1 = (*(int *)(param_1 + 0x230) + 9) % 10;
      *(int *)(param_1 + 0x230) = iVar1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x224) + iVar1 * 4);
      fn_0054ca94(iVar1,local_18);
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
      *(undefined1 *)(iVar1 + 0x45) = 0xdc;
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x224) + uVar2 * 4);
        if ((*(byte *)(iVar1 + 0x44) & 1) != 0) {
          iVar3 = (int)(*(float *)(param_1 + 0x188) * 7.0);
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          iVar3 = (uint)*(byte *)(iVar1 + 0x45) - iVar3;
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          *(char *)(iVar1 + 0x45) = (char)iVar3;
          if (iVar3 == 0) {
            *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2));
    }
  }
  return;
}



void fn_0021c9f8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_38;
  int local_34;
  float local_30;
  float local_2c;
  int local_28;
  
  puVar3 = &local_38;
  puVar4 = &local_38;
  if (*(int *)(param_1 + 0x238) != 0) {
    if (param_3 != 0) {
      iVar7 = 0;
      iVar9 = 0x20;
      iVar1 = 0x20;
      local_28 = 0;
      goto LAB_0021caec;
    }
    fn_002194f4(param_1,&local_30);
    local_38 = (int)local_30 - 5;
    puVar2 = (uint *)&local_34;
    if (0 < (int)local_38) {
      puVar2 = &local_38;
    }
    local_34 = 0;
    local_28 = *puVar2;
    local_38 = (int)local_30 + 5;
    if (0x1f < (int)local_38) {
      puVar3 = &DAT_007be534;
    }
    iVar1 = *puVar3;
    local_38 = 0;
    local_34 = (int)local_2c + -5;
    puVar3 = (uint *)&local_34;
    if ((int)local_2c + -5 < 1) {
      puVar3 = &local_38;
    }
    iVar7 = *puVar3;
    if (0x1f < (int)((int)local_2c + 5U)) {
      puVar4 = &DAT_007be534;
    }
    local_38 = (int)local_2c + 5U;
    iVar9 = *puVar4;
    if (iVar7 < iVar9) {
      do {
        if (local_28 < iVar1) {
LAB_0021caec:
          iVar6 = local_28;
          do {
            uVar5 = iVar6 + iVar7 * 0x20;
            if ((*(int *)(param_1 + 0x23c) == 0) ||
               ((*(uint *)(*(int *)(param_1 + 0x23c) + ((int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1)
                == 0)) {
              local_38 = (uint)*(byte *)(param_1 + iVar7 * 0x20 + iVar6 + 0x250) * -0x1c + 0xff &
                         0xff;
            }
            else {
              local_38 = 0;
            }
            iVar8 = iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1d);
            iVar10 = iVar6 % 8;
            iVar6 = iVar6 + 1;
            iVar8 = (&DAT_007be5c8)[(iVar7 % 8) * 8 + iVar10] +
                    (((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1d)) >> 3) * 4 + (iVar8 >> 3)) *
                    0x40;
            local_34 = (uint)*(byte *)(*(int *)(param_1 + 0x238) + iVar8) - param_2;
            if ((int)local_38 < local_34) {
              puVar3 = (uint *)&local_34;
            }
            else {
              puVar3 = &local_38;
            }
            *(char *)(*(int *)(param_1 + 0x238) + iVar8) = (char)*puVar3;
          } while (iVar6 < iVar1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar9);
    }
  }
  return;
}



void fn_0021c4c0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int extraout_r1;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x1b4) == *(int *)(param_1 + 0x1b8)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  uVar5 = 0;
  *(byte *)(*(int *)(param_1 + 0x110) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x110) + 0x44) & 0xfe | 1;
  *(byte *)(*(int *)(param_1 + 0x114) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x114) + 0x44) & 0xfe | 1;
  uVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  iVar2 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  uVar7 = ((iVar2 >> 6) - (iVar2 >> 0x1f)) + 1;
  uVar1 = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 2;
  if (uVar7 < uVar1) {
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(param_1 + 0x118);
        uVar1 = *(int *)(param_1 + 0x11c) - iVar2 >> 2;
        if (uVar1 <= uVar5) {
          local_28 = uVar1;
          fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5);
          iVar2 = extraout_r1;
        }
        bVar3 = (byte)iVar2;
        if ((int)uVar5 < (int)uVar7) {
          bVar3 = 1;
        }
        if ((int)uVar7 <= (int)uVar5) {
          bVar3 = 0;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x118) + uVar5 * 4);
        uVar5 = uVar5 + 1;
        *(byte *)(iVar2 + 0x44) = bVar3 | *(byte *)(iVar2 + 0x44) & 0xfe;
      } while (uVar5 < (uint)(*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 2));
    }
  }
  else if (uVar1 != 0) {
    do {
      uVar1 = *(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 2;
      if (uVar1 <= uVar5) {
        local_28 = uVar1;
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x118) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118) >> 2));
  }
  iVar2 = fn_006f7a84(DAT_008977e0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar2 + 0x24);
  uVar5 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  iVar4 = (int)((longlong)(int)uVar5 * -0x72c234f7 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  iVar2 = (int)((longlong)(int)uVar5 * -0x72c234f7 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  *(int *)(param_1 + 0x1a8) = (iVar4 >> 6) - (iVar4 >> 0x1f);
  uVar1 = 0;
  if (iVar2 >> 6 != iVar2 >> 0x1f) {
    do {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x1b4) + uVar1 * 0x74) + 0x44) & 1) == 0) {
        *(uint *)(param_1 + 0x1a8) = uVar1;
        break;
      }
      iVar2 = (int)((longlong)(int)uVar5 * -0x72c234f7 + ((ulonglong)uVar5 << 0x20) >> 0x20);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)((iVar2 >> 6) - (iVar2 >> 0x1f)));
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1a8);
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar6 = *(int **)(iVar2 + 0x10);
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c840,1);
  local_28 = *(uint *)(iVar2 + 0x1c);
  local_20 = *(undefined4 *)(iVar2 + 0x24);
  local_24 = *(undefined4 *)
              (*(int *)(*(int *)(param_1 + 0x118) + *(int *)(param_1 + 0x1ac) * 4) + 0x20);
  fn_0054ca94(iVar2,&local_28);
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c854,1);
  if (*(int *)(param_1 + 0x698) == *(int *)(param_1 + 0x69c)) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    uVar1 = 0;
    uVar5 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
    iVar4 = (int)((longlong)(int)uVar5 * -0x72c234f7 + ((ulonglong)uVar5 << 0x20) >> 0x20);
    if (iVar4 >> 6 != iVar4 >> 0x1f) {
      do {
        if (*(char *)(*(int *)(param_1 + 0x698) + uVar1) == '\x02') break;
        iVar4 = (int)((longlong)(int)uVar5 * -0x72c234f7 + ((ulonglong)uVar5 << 0x20) >> 0x20);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)((iVar4 >> 6) - (iVar4 >> 0x1f)));
    }
    local_28 = *(uint *)(iVar2 + 0x1c);
    local_20 = *(undefined4 *)(iVar2 + 0x24);
    local_24 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x118) + uVar1 * 4) + 0x20);
    fn_0054ca94(iVar2,&local_28);
  }
  iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  piVar6 = *(int **)(iVar2 + 0x10);
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c0d8,1);
  uVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  iVar4 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  *(byte *)(iVar2 + 0x44) =
       (iVar4 >> 6) - (iVar4 >> 0x1f) == *(int *)(param_1 + 0x1a8) | *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c0f0,1);
  *(byte *)(iVar2 + 0x44) = *(int *)(param_1 + 0x1a8) == 0 | *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c104,1);
  uVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4);
  iVar4 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  *(byte *)(iVar2 + 0x44) =
       *(uint *)(param_1 + 0x1a8) < (uint)((iVar4 >> 6) - (iVar4 >> 0x1f)) |
       *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c118,1);
  *(byte *)(iVar2 + 0x44) = 0 < *(int *)(param_1 + 0x1a8) | *(byte *)(iVar2 + 0x44) & 0xfe;
  iVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,(char *)&DAT_0021c12c,1);
  local_20 = *(undefined4 *)(iVar2 + 0x1c);
  fn_0054ca94(iVar2,&local_20);
  return;
}


