#include "001ab7ec_001ac07c.h"



int fn_001ac07c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = fn_001ad034(0xf4);
  if (iVar1 != 0) {
    fn_001ac0f8(iVar1,param_2,param_1,*(undefined4 *)(param_1 + 0xec),
                 *(undefined4 *)(param_1 + 0xf0));
  }
  if (*(uint *)(param_1 + 0xe8) <= *(uint *)(param_1 + 0xe4)) {
    iVar4 = *(uint *)(param_1 + 0xe4) << 1;
    if (iVar4 == 0) {
      iVar4 = 4;
    }
    uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0xe0),*(uint *)(param_1 + 0xe8) << 2,iVar4 << 2);
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
    *(int *)(param_1 + 0xe8) = iVar4;
  }
  piVar3 = (int *)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xe4) * 4);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar1;
  }
  return iVar1;
}



void fn_001ac040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xe4) * 4 + -4);
  fn_001ac354(uVar1);
  fn_0019d680(uVar1,0xf4);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
  return;
}



void fn_001ab9f0(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint local_7c;
  int *local_78;
  uint local_74;
  int *local_70;
  undefined1 local_6c;
  uint local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  
  iVar4 = *(int *)(param_1 + 0xa8);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 8);
    if (0 < iVar1) {
      do {
        if ((*(int *)(*(int *)(iVar4 + 4) + iVar1 * 0x14 + -0x14) == 0x8000010) &&
           (*(uint *)(*(int *)(iVar4 + 4) + iVar1 * 0x14 + -0x10) == param_2[1])) {
          local_54 = (int *)(iVar1 + -1);
          if (iVar1 != 0) {
            local_68 = *param_2;
            local_64 = (int *)param_2[1];
            if ((local_68 & 0x8000000) != 0) {
              local_64[1] = local_64[1] + 1;
            }
            local_3c = (int *)0x1000001;
            local_58 = 0x5000002;
            local_38 = (int *)0x0;
            local_34 = (int *)0x1000001;
            local_30 = (int *)0x0;
            fn_0019e864(&local_3c,&local_68);
            fn_0019e864(&local_34,&local_58);
            local_40 = local_40 & 0xffffff00;
            if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
              iVar4 = *(uint *)(param_1 + 0x58) << 1;
              if (iVar4 == 0) {
                iVar4 = 4;
              }
              uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x54),*(uint *)(param_1 + 0x5c) * 0x14,
                                   iVar4 * 0x14);
              *(undefined4 *)(param_1 + 0x54) = uVar2;
              *(int *)(param_1 + 0x5c) = iVar4;
            }
            puVar3 = (undefined1 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 0x14);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            if (puVar3 != (undefined1 *)0x0) {
              *(undefined4 *)(puVar3 + 8) = 0;
              *(undefined4 *)(puVar3 + 4) = 0x1000001;
              *(undefined4 *)(puVar3 + 0x10) = 0;
              *(undefined4 *)(puVar3 + 0xc) = 0x1000001;
              *puVar3 = (undefined1)local_40;
              fn_0019e864(puVar3 + 0xc,&local_34);
              fn_0019e864(puVar3 + 4,&local_3c);
            }
            if ((((uint)local_34 & 0x8000000) != 0) &&
               (iVar4 = local_30[1], local_30[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_30 + 8))();
            }
            if ((((uint)local_3c & 0x8000000) != 0) &&
               (iVar4 = local_38[1], local_38[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_38 + 8))();
            }
            if (((local_58 & 0x8000000) != 0) &&
               (iVar4 = local_54[1], local_54[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_54 + 8))();
            }
            if ((local_68 & 0x8000000) == 0) {
              return;
            }
            iVar4 = local_64[1];
            local_64[1] = iVar4 + -1;
            if (iVar4 + -1 == 0) {
              (**(code **)(*local_64 + 8))();
              return;
            }
            return;
          }
          break;
        }
        iVar1 = iVar1 + -1;
      } while (0 < iVar1);
    }
    local_34 = (int *)0x0;
    if (0 < *(int *)(iVar4 + 0x58)) {
      do {
        if (*(uint *)(*(int *)(iVar4 + 0x54) + (int)local_34 * 0x14 + 8) == param_2[1]) {
          if (local_34 != (int *)&DAT_ffffffff) {
            local_40 = *param_2;
            local_3c = (int *)param_2[1];
            if ((local_40 & 0x8000000) != 0) {
              local_3c[1] = local_3c[1] + 1;
            }
            local_68 = 0x1000001;
            local_38 = (int *)0x5000002;
            local_64 = (int *)0x0;
            local_60 = 0x1000001;
            local_5c = (int *)0x0;
            fn_0019e864(&local_68,&local_40);
            fn_0019e864(&local_60,&local_38);
            local_6c = 2;
            if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
              iVar4 = *(uint *)(param_1 + 0x58) << 1;
              if (iVar4 == 0) {
                iVar4 = 4;
              }
              uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x54),*(uint *)(param_1 + 0x5c) * 0x14,
                                   iVar4 * 0x14);
              *(undefined4 *)(param_1 + 0x54) = uVar2;
              *(int *)(param_1 + 0x5c) = iVar4;
            }
            puVar3 = (undefined1 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 0x14);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            if (puVar3 != (undefined1 *)0x0) {
              *(undefined4 *)(puVar3 + 8) = 0;
              *(undefined4 *)(puVar3 + 4) = 0x1000001;
              *(undefined4 *)(puVar3 + 0x10) = 0;
              *(undefined4 *)(puVar3 + 0xc) = 0x1000001;
              *puVar3 = local_6c;
              fn_0019e864(puVar3 + 0xc,&local_60);
              fn_0019e864(puVar3 + 4,&local_68);
            }
            if (((local_60 & 0x8000000) != 0) &&
               (iVar4 = local_5c[1], local_5c[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_5c + 8))();
            }
            if (((local_68 & 0x8000000) != 0) &&
               (iVar4 = local_64[1], local_64[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_64 + 8))();
            }
            if ((((uint)local_38 & 0x8000000) != 0) &&
               (iVar4 = local_34[1], local_34[1] = iVar4 + -1, iVar4 + -1 == 0)) {
              (**(code **)(*local_34 + 8))();
            }
            if ((local_40 & 0x8000000) == 0) {
              return;
            }
            iVar4 = local_3c[1];
            local_3c[1] = iVar4 + -1;
            if (iVar4 + -1 == 0) {
              (**(code **)(*local_3c + 8))();
              return;
            }
            return;
          }
          break;
        }
        local_34 = (int *)((int)local_34 + 1);
      } while ((int)local_34 < *(int *)(iVar4 + 0x58));
    }
  }
  local_50 = *param_2;
  local_4c = (int *)param_2[1];
  if ((local_50 & 0x8000000) != 0) {
    local_4c[1] = local_4c[1] + 1;
  }
  local_48 = *param_2;
  local_44 = (int *)param_2[1];
  if ((local_48 & 0x8000000) != 0) {
    local_44[1] = local_44[1] + 1;
  }
  local_7c = 0x1000001;
  local_78 = (int *)0x0;
  local_74 = 0x1000001;
  local_70 = (int *)0x0;
  fn_0019e864(&local_7c,&local_50);
  fn_0019e864(&local_74,&local_48);
  if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x58)) {
    iVar4 = *(uint *)(param_1 + 0x58) << 1;
    if (iVar4 == 0) {
      iVar4 = 4;
    }
    uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x54),*(uint *)(param_1 + 0x5c) * 0x14,
                         iVar4 * 0x14);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  puVar3 = (undefined1 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 0x14);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 4) = 0x1000001;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0x1000001;
    *puVar3 = 1;
    fn_0019e864(puVar3 + 0xc,&local_74);
    fn_0019e864(puVar3 + 4,&local_7c);
  }
  if (((local_74 & 0x8000000) != 0) &&
     (iVar4 = local_70[1], local_70[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if (((local_7c & 0x8000000) != 0) &&
     (iVar4 = local_78[1], local_78[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*local_78 + 8))();
  }
  if (((local_48 & 0x8000000) != 0) &&
     (iVar4 = local_44[1], local_44[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*local_44 + 8))();
  }
  if (((local_50 & 0x8000000) == 0) ||
     (iVar4 = local_4c[1], local_4c[1] = iVar4 + -1, iVar4 + -1 != 0)) {
    return;
  }
  (**(code **)(*local_4c + 8))();
  return;
}



uint * fn_001ab7ec(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0) {
    param_2 = (uint *)fn_001ab258(param_1[8],param_2,1);
  }
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = 0xf0099;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = 0xf009a;
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar2 = 2;
  }
  else {
    iVar2 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar4 << 2 | iVar2 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar3 = 0;
  param_2[5] = 0xf009b;
  if ((char)param_1[3] == '\x03' || (char)param_1[3] == '\0') {
    param_2[6] = 0;
    param_2[7] = 0xf009c;
    goto LAB_001ab968;
  }
  fVar6 = (float)param_1[4];
  fVar7 = 0.0;
  if ((fVar6 != 0.0) && ((uint)ABS(fVar6) >> 0x17 != 0xff)) {
    fVar6 = (fVar6 + 16.0) * 256.0;
    if (0.0 <= fVar6) {
      bVar5 = SBORROW4((int)fVar6,0x46000000);
      iVar4 = (int)fVar6 + -0x46000000;
      if ((int)fVar6 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar6,0x45800000);
        iVar4 = (int)fVar6 + -0x45800000;
        fVar7 = fVar6;
      }
      else {
        fVar7 = 8191.0;
      }
      if (iVar4 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_001ab94c;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar7 + 4096.0,3);
  }
LAB_001ab94c:
  param_2[6] = uVar3 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18
  ;
  param_2[7] = 0xf009c;
LAB_001ab968:
  param_2[8] = *param_1 >> 3;
  param_2[9] = 0xf009d;
  param_2[10] = (uint)(byte)param_1[2];
  param_2[0xb] = 0xf009e;
  return param_2 + 0xc;
}


