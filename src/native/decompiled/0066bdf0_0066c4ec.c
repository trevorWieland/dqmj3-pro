#include "0066bdf0_0066c4ec.h"



undefined4 fn_0066c4ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  wchar16 *local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c [55];
  undefined1 local_30 [4];
  undefined1 auStack_2c [24];
  
  uVar4 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_130 = L"5812c478";
  uStack_12c = 60000;
  uStack_128 = 0;
  fn_004bbbb8(auStack_2c,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x9c),0x1acb00);
  local_30[0] = 1;
  iVar1 = fn_006d3b54(auStack_2c,local_30);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
    uVar2 = fn_0045a590();
    uVar3 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar3;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar2,&local_130,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar1 = *(int *)(param_1 + 0x9c);
    local_130 = *(wchar16 **)(iVar1 + 0x38);
    uStack_12c = *(undefined4 *)(iVar1 + 0x3c);
    uStack_128 = *(undefined4 *)(iVar1 + 0x40);
    local_124 = 0x10001;
    iVar1 = fn_006d3b74(&local_130,&local_124);
    if (iVar1 != 1) {
      local_120 = 0x8001000b;
      iVar1 = fn_006d3b74(&local_130,&local_120);
      if (iVar1 == 0) {
        local_11c = 0x8001000a;
        iVar1 = fn_006d3b74(&local_130,&local_11c);
        if (iVar1 == 0) {
          local_118 = 0x80010004;
          iVar1 = fn_006d3b74(&local_130,&local_118);
          if (iVar1 == 0) {
            local_114 = 0x80650000;
            iVar1 = fn_006d3b74(&local_130,&local_114);
            if (iVar1 == 0) {
              local_110 = 0x80650002;
              iVar1 = fn_006d3b74(&local_130,&local_110);
              if (iVar1 == 0) {
                local_10c[0] = 0x80650009;
                fn_006d3b74(&local_130,local_10c);
              }
            }
          }
        }
      }
      uVar4 = 0xffffffff;
      uVar2 = fn_006d3f08(*(undefined4 *)(param_1 + 0x84));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
  }
  return uVar4;
}



bool fn_0066c4bc(int *param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,0x1f);
  }
  return bVar1;
}



undefined4 fn_0066bdf0(int *param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fn_00673cb8();
  iVar5 = 0;
  switch(param_1[0x11]) {
  default:
    uVar7 = fn_001296d0(DAT_00898840);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      bVar6 = (*(byte *)(param_1 + 0x13) & 0x10) != 0;
      if (bVar6) {
        iVar4 = param_1[0x21];
      }
      if (bVar6 && iVar4 != 0) {
        fn_006d1828(&uStack_20);
        local_28[0] = 1;
        iVar4 = fn_006d3b54(&uStack_20,local_28);
        if (iVar4 != 1) {
          iVar5 = -1;
          fn_006688a0(param_1,param_1 + 0x1d,&uStack_20,0);
        }
      }
    }
    break;
  case 1:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) {
      piVar2 = (int *)fn_0066eb80(DAT_00898840,1);
      iVar5 = (**(code **)(*piVar2 + 0x2c))(piVar2);
      if (iVar5 == 0) {
        fn_0067ceb0(piVar2);
      }
LAB_0066c058:
      iVar5 = 0;
      (**(code **)(*param_1 + 0x34))(param_1,1);
      break;
    }
    if (iVar4 == 1) {
      iVar5 = fn_0066eb80(DAT_00898840,1);
      bVar1 = *(byte *)(iVar5 + 0x4c) & 1;
      goto joined_r0x0066c088;
    }
    if (iVar4 == 2) {
      if ((*(byte *)(param_1 + 0x13) & 2) != 0) break;
      iVar5 = param_1[0x1b];
LAB_0066c0bc:
      (**(code **)(*param_1 + 0x34))(param_1,3);
      break;
    }
    if (iVar4 != 3) break;
    iVar4 = fn_00673be8(param_1);
joined_r0x0066c1ec:
    iVar5 = 0;
    if (iVar4 != 0) break;
    goto LAB_0066c3dc;
  case 2:
    iVar5 = fn_00667390(param_1);
    break;
  case 3:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) {
      fn_00473ca4(param_1[0x21],&DAT_00898858);
LAB_0066c23c:
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      goto LAB_0066c058;
    }
    if (iVar4 != 1) {
      if (iVar4 != 2) break;
      iVar4 = fn_00673be8(param_1);
      goto joined_r0x0066c1ec;
    }
    if ((param_1[0x13] & 2U) != 0) break;
    iVar5 = param_1[0x1b];
    if (iVar5 == 0) {
      uVar3 = param_1[0x13] & 0xffffffef;
      goto LAB_0066c0a0;
    }
    goto LAB_0066c1a8;
  case 4:
    iVar5 = fn_0066b05c(param_1);
    break;
  case 5:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) {
      iVar5 = fn_0066eb80(DAT_00898840,6);
      if ((*(byte *)(iVar5 + 0x4c) & 2) == 0) {
        fn_00670598();
      }
      goto LAB_0066c058;
    }
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        bVar6 = (*(byte *)(param_1 + 0x13) & 2) != 0;
        if (!bVar6) {
          iVar5 = param_1[0x1b];
        }
        if (bVar6 || iVar5 != 0) break;
        goto LAB_0066c0bc;
      }
      if (iVar4 != 3) break;
      iVar4 = fn_00673be8(param_1);
      goto joined_r0x0066c1ec;
    }
    iVar5 = fn_0066eb80(DAT_00898840,6);
    bVar1 = *(byte *)(iVar5 + 0x4c) & 2;
joined_r0x0066c088:
    iVar5 = 0;
    if (bVar1 == 0) break;
    iVar5 = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    uVar3 = param_1[0x13] | 2;
    goto LAB_0066c0a0;
  case 6:
    iVar5 = fn_0066b930(param_1);
    break;
  case 7:
    iVar5 = fn_0066ae1c(param_1);
    break;
  case 8:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) goto LAB_0066c23c;
    if (iVar4 != 1) {
      if (iVar4 != 2) break;
      iVar4 = fn_00673be8(param_1);
      goto joined_r0x0066c1ec;
    }
    bVar6 = (param_1[0x13] & 2U) == 0;
    if (bVar6) {
      iVar5 = param_1[0x1b];
    }
    if (!bVar6 || iVar5 != 0) break;
    uVar3 = param_1[0x13] | 0x40;
    goto LAB_0066c0a0;
  case 9:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        iVar4 = fn_00673be8(param_1);
        goto joined_r0x0066c1ec;
      }
      bVar6 = (param_1[0x13] & 2U) == 0;
      if (bVar6) {
        iVar5 = param_1[0x1b];
      }
      if (!bVar6 || iVar5 != 0) break;
      uVar3 = param_1[0x13] | 0x80;
      goto LAB_0066c0a0;
    }
    if (*(char *)(DAT_00898840 + 0x4d) != '\0') goto LAB_0066c23c;
    goto LAB_0066c1a8;
  case 0xb:
    iVar5 = fn_0066a3e8(param_1);
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    iVar5 = fn_00669eb0(param_1);
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) {
      fn_0066eb80(DAT_00898840,4);
      fn_0066da34();
      goto LAB_0066c23c;
    }
    if (iVar4 == 1) {
      bVar6 = (*(byte *)(param_1 + 0x13) & 2) != 0;
      if (!bVar6) {
        iVar5 = param_1[0x1b];
      }
      if (bVar6 || iVar5 != 0) break;
      iVar4 = param_1[0x27];
      if (*(char *)(iVar4 + 0x10) != '\x02') {
        local_24 = *(undefined4 *)(iVar4 + 0x38);
        uStack_20 = *(undefined4 *)(iVar4 + 0x3c);
        uStack_1c = *(undefined4 *)(iVar4 + 0x40);
        iVar5 = -1;
        fn_006688a0(param_1,param_1 + 0x1d,&local_24,0);
      }
      fn_0066eb80(DAT_00898840,4);
      fn_0066db88();
      goto LAB_0066c1a8;
    }
    if (iVar4 != 2) break;
    iVar4 = fn_00673be8(param_1);
    goto joined_r0x0066c3d8;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) goto LAB_0066c23c;
    if (iVar4 == 1) {
      if ((*(byte *)(param_1 + 0x13) & 2) != 0) break;
      iVar5 = param_1[0x1b];
      goto LAB_0066c1a8;
    }
    if (iVar4 != 2) break;
    iVar4 = fn_00673be8(param_1);
    goto joined_r0x0066c3d8;
  case 0x1e:
    uVar3 = param_1[0x12];
    bVar6 = uVar3 != 0;
    if (!bVar6) {
      uVar3 = (uint)*(byte *)(param_1 + 0x13);
    }
    if (bVar6 || (uVar3 & 2) != 0) break;
    iVar4 = fn_00673be8(param_1);
joined_r0x0066c3d8:
    iVar5 = 0;
    if (iVar4 == 0) {
LAB_0066c3dc:
      iVar5 = 0;
      (**(code **)(*param_1 + 0x30))(param_1,0);
    }
    break;
  case 0x1f:
    iVar4 = param_1[0x12];
    iVar5 = 0;
    if (iVar4 == 0) {
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x13] = param_1[0x13] | 2;
      (**(code **)(*param_1 + 0x34))(param_1,1);
    }
    else if (iVar4 != 1) {
      if (iVar4 != 2) break;
      iVar4 = fn_00673be8(param_1);
      goto joined_r0x0066c3d8;
    }
    bVar6 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar6) {
      iVar5 = param_1[0x1b];
    }
    if (!bVar6 || iVar5 != 0) break;
    uVar3 = 0;
LAB_0066c0a0:
    param_1[0x13] = uVar3;
LAB_0066c1a8:
    (**(code **)(*param_1 + 0x34))(param_1,2);
  }
  if ((*(byte *)(param_1 + 0x13) & 8) != 0 || iVar5 != 0) {
    fn_00119b40(local_28);
    (**(code **)(*param_1 + 0x24))(param_1,local_28);
    fn_0066e870(DAT_00898840,local_28);
  }
  return 1;
}


