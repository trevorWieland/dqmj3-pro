#include "0021f3ec_00230098.h"



void fn_00230098(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 1) {
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_002301a4,0);
  }
  else {
    if (param_1 == 2) {
      puVar2 = &DAT_002301ac;
    }
    else {
      if (param_1 != 3) {
        uVar1 = 0;
        goto LAB_002300dc;
      }
      puVar2 = &DAT_002301a0;
    }
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,puVar2,0);
  }
LAB_002300dc:
  fn_0016ba84(DAT_00897800,uVar1);
  fn_0016ba34(DAT_00897800,DAT_008987ac,(char *)&DAT_00230130,0);
  return;
}



undefined4 fn_002279b4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 != 0) {
    if (((((((param_2 == 0) || (iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0ac), iVar1 == 0)) &&
           ((**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0ac), param_2 == 0)) ||
          (iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0bc), iVar1 == 0)) &&
         ((**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0bc), param_2 == 0)) ||
        (iVar1 = fn_003035b0(param_2,(char *)&DAT_0086a0b4), iVar1 == 0)) &&
       ((**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_0086a0b4), param_2 == 0)) {
      (**(code **)(*DAT_00897894 + 0x14))(DAT_00897894,(char *)&DAT_00227c80);
    }
    fn_002277d8(param_1,param_2);
  }
  return 1;
}



undefined4 fn_0021f3ec(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  char *local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 auStack_c8 [140];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x68c) = 0;
    uVar16 = 0;
    *(byte *)(*(int *)(param_1 + 0x60) + 0x44) = *(byte *)(*(int *)(param_1 + 0x60) + 0x44) & 0xbf;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    fn_0054ca94(*(undefined4 *)(param_1 + 0x60),&local_3c);
    iVar2 = fn_006f7a5c(DAT_008977e0);
    uVar9 = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = fn_006f7a5c(DAT_008977e0);
    local_34 = *(undefined4 *)(iVar2 + 0x24);
    local_3c = uVar9;
    local_38 = uVar16;
    fn_0054ca94(*(undefined4 *)(param_1 + 0x104),&local_3c);
    *(undefined4 *)(param_1 + 0x13c) = uVar16;
    *(undefined4 *)(param_1 + 0x140) = uVar16;
    *(undefined4 *)(param_1 + 0x144) = uVar16;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    uVar9 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    pcVar3 = (char *)fn_006af990(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
    if (*pcVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      fn_00301f50(&local_1c8,0x100);
      fn_00301f50(auStack_c8,0x80);
      iVar2 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
      local_1d8 = pcVar3;
      if (iVar2 == 0) {
        fn_0018a618(&local_1c8,0x80,0x7f,DAT_0089174c);
        local_1d8 = pcVar3;
        fn_0017d96c(auStack_c8,0x80,0x7f,DAT_0089175c);
        *(undefined1 *)(param_1 + 0x6b0) = 0;
      }
      else {
        uVar4 = fn_00163d44(0x32);
        local_1d4 = DAT_00891758;
        if (0x17 >= uVar4) {
          local_1d4 = DAT_00891754;
        }
        fn_0018a618(&local_1c8,0x80,0x7f,DAT_00891750);
        if (0x17 < uVar4) {
          local_1d4 = DAT_00891758;
        }
        else {
          local_1d4 = DAT_00891754;
        }
        local_1d8 = pcVar3;
        fn_0017d96c(auStack_c8,0x80,0x7f,DAT_00891760);
        *(undefined1 *)(param_1 + 0x6b0) = 1;
      }
      local_1d8 = (char *)0x1;
      uVar5 = fn_001481c8(*(undefined4 *)(param_1 + 4),&local_1c8,&DAT_0021f7e0,1);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      local_1d0 = 0x10;
      local_1d8 = (char *)0x1;
      local_1d4 = 1;
      iVar2 = fn_001480d0(*(undefined4 *)(param_1 + 4),uVar5,auStack_c8,pcVar3);
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 != -1) {
        iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),iVar2);
        uVar17 = CONCAT44(0xc1f00000,uVar16);
        piVar8 = *(int **)(iVar2 + 0x10);
        local_1c8 = 0xc1f00000;
        local_1c4 = uVar16;
        local_1c0 = uVar16;
        uVar16 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f7e8,1);
        fn_0054ca94(uVar16,&local_1c8);
        uVar16 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f7f4,1);
        *(undefined4 *)(param_1 + 0x68) = uVar16;
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,pcVar3,1);
        *(int *)(param_1 + 0x6c) = iVar2;
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f804,1);
        *(int *)(param_1 + 100) = iVar2;
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f810,1);
        *(int *)(param_1 + 0x78) = iVar2;
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f820,1);
        *(int *)(param_1 + 0x7c) = iVar2;
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f834,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021f840,1);
        *(int *)(param_1 + 0xa0) = iVar2;
        if (iVar2 != 0) {
          if ((((byte)DAT_008c62ec & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62ec), iVar6 != 0))
          {
            DAT_008c62f0 = (undefined4)uVar17;
            DAT_008c62f4 = DAT_008c62f0;
          }
          local_1bc = DAT_008c62f0;
          local_1b8 = DAT_008c62f4;
          local_1b4 = (undefined4)uVar17;
          fn_0054ca94(iVar2);
          *(byte *)(*(int *)(param_1 + 0xa0) + 0x44) =
               *(byte *)(*(int *)(param_1 + 0xa0) + 0x44) & 0xfe | 1;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fbb4,1);
        if (iVar2 != 0) {
          fn_0021b654(param_1,0x10,(char *)&DAT_0021fbb4,1);
        }
        uVar16 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
        iVar2 = fn_00551a3c(uVar16,(char *)&DAT_0021fbc0);
        if (iVar2 != 0) {
          fn_0021b654(param_1,0x11,(char *)&DAT_0021fbc0,1);
        }
        uVar16 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fbc8,1);
        *(undefined4 *)(param_1 + 0xf4) = uVar16;
        uVar16 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fbd8,1);
        *(undefined4 *)(param_1 + 0xf8) = uVar16;
        uVar16 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fbe4,1);
        *(undefined4 *)(param_1 + 0xfc) = uVar16;
        uVar16 = (**(code **)(**(int **)(param_1 + 0x68) + 0x2c))
                           (*(int **)(param_1 + 0x68),(char *)&DAT_0021fbf8,1);
        *(undefined4 *)(param_1 + 0x100) = uVar16;
        iVar2 = *(int *)(param_1 + 0x78);
        bVar10 = **(int **)(DAT_008977e0 + 0x40) != 0;
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = !bVar10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc08,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = !bVar10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc18,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = !bVar10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc28,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = !bVar10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc3c,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = !bVar10 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc50,1);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | bVar10;
        }
        iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
        iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                          (*(int **)(iVar2 + 0x10),(char *)&DAT_0021fc5c,1);
        if (iVar2 != 0) {
          bVar1 = fn_006f7358(DAT_008977e0);
          *(byte *)(iVar2 + 0x44) = bVar1 | *(byte *)(iVar2 + 0x44) & 0xfe;
        }
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_0021fc6c,1);
        fVar15 = *(float *)(iVar2 + 0x3c) * 0.5 - 160.0;
        fVar14 = *(float *)(iVar2 + 0x40) * 0.5 - 120.0;
        *(float *)(param_1 + 400) = fVar14;
        *(float *)(param_1 + 0x19c) = fVar15;
        *(float *)(param_1 + 0x194) = -fVar14;
        *(float *)(param_1 + 0x198) = -fVar15;
        fVar11 = *(float *)(*(int *)(param_1 + 0x6c) + 0x20);
        fVar12 = *(float *)(*(int *)(param_1 + 0x6c) + 0x1c) + (float)((ulonglong)uVar17 >> 0x20);
        in_s0 = -fVar14 - fVar11;
        fVar13 = -fVar15 - fVar12;
        *(float *)(param_1 + 0x19c) = fVar15 - fVar12;
        *(float *)(param_1 + 400) = fVar14 - fVar11;
        *(float *)(param_1 + 0x194) = in_s0;
        *(float *)(param_1 + 0x198) = fVar13;
        iVar2 = fn_006f7358(DAT_008977e0);
        if ((iVar2 != 0) && (uVar4 = fn_00163d44(0), uVar4 < 9)) {
          fVar13 = 450.0;
          in_s0 = *(float *)(param_1 + 0x194) + 450.0;
          *(float *)(param_1 + 0x194) = in_s0;
        }
        fn_0022013c(param_1);
        iVar2 = fn_00211ea0(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
        if (iVar2 == 0) {
          fn_0021ad18(param_1,pcVar3);
        }
        else {
          iVar2 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
          if (iVar2 != 0) {
            fn_0021ad18(param_1);
          }
        }
        iVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
        uVar16 = (**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))(*(int **)(iVar2 + 0x10),(char *)&DAT_0021d408,1);
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x230) = 0;
        do {
          local_1d8 = (char *)fn_006892dc(uVar16);
          local_1d8[0x44] = local_1d8[0x44] & 0xfe;
          fn_0018a69c(*(undefined4 *)(param_1 + 0x68),local_1d8);
          piVar8 = *(int **)(param_1 + 0x228);
          if (piVar8 == *(int **)(param_1 + 0x22c)) {
            fn_00798eb0(param_1 + 0x224,piVar8,&local_1d8);
          }
          else {
            *(int **)(param_1 + 0x228) = piVar8 + 1;
            if (piVar8 != (int *)0x0) {
              *piVar8 = (int)local_1d8;
            }
          }
          uVar5 = (undefined4)uVar17;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 10);
        fn_0021d738(param_1);
        if ((*(int *)(param_1 + 0x224) != *(int *)(param_1 + 0x228)) &&
           (uVar4 = 0, *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2 != 0)) {
          do {
            uVar7 = uVar4 + 1;
            iVar2 = *(int *)(*(int *)(param_1 + 0x224) + uVar4 * 4);
            *(undefined4 *)(iVar2 + 0x24) = uVar5;
            *(float *)(iVar2 + 0x1c) = in_s0;
            *(float *)(iVar2 + 0x20) = fVar13;
            *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
            uVar4 = uVar7;
          } while (uVar7 < (uint)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2));
        }
      }
      fn_006afb0c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
      *(float *)(param_1 + 0x188) = in_s0;
      fn_006af9a8(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
      *(float *)(param_1 + 0x18c) = in_s0;
      uVar9 = fn_006af5dc(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar9);
      uVar16 = *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x40);
      uVar4 = fn_00100b58(uVar9);
      iVar2 = *(int *)(param_1 + 0xe4);
      bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe;
      if ((int)uVar4 < 4) {
        *(byte *)(iVar2 + 0x44) = bVar1 | 1;
        *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) & 0xfe;
        (**(code **)(**(int **)(param_1 + 0xe4) + 0x58))(*(int **)(param_1 + 0xe4),uVar4 & 0xffff,0)
        ;
        (**(code **)(**(int **)(param_1 + 0xe4) + 0x68))(*(int **)(param_1 + 0xe4),uVar9,0);
        fVar11 = *(float *)(param_1 + 0xf0);
      }
      else {
        *(byte *)(iVar2 + 0x44) = bVar1;
        *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) & 0xfe | 1;
        fVar11 = (float)VectorSignedToFloat((uVar4 - 4) * 0xd,(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = *(float *)(param_1 + 0xf0) + fVar11;
        fn_00182810(*(undefined4 *)(param_1 + 0xe8),uVar9);
      }
      iVar2 = *(int *)(param_1 + 0xec);
      *(float *)(iVar2 + 0x3c) = fVar11;
      *(undefined4 *)(iVar2 + 0x40) = uVar16;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
      iVar6 = fn_006f7a84(DAT_008977e0);
      uVar9 = *(undefined4 *)(iVar6 + 0x24);
      uVar16 = *(undefined4 *)(iVar6 + 0x28);
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(param_1 + 0x1c4) = uVar9;
      *(undefined4 *)(param_1 + 0x1c8) = uVar16;
      do {
        iVar6 = param_1 + iVar2 * 0x18;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar6 + 0x1dc) = 0x3c;
          *(undefined4 *)(iVar6 + 0x1d4) = 5;
          uVar9 = *(undefined4 *)(param_1 + 0x70);
LAB_0021ff0c:
          *(undefined4 *)(iVar6 + 0x1e0) = uVar9;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(iVar6 + 0x1dc) = 0;
          *(undefined4 *)(iVar6 + 0x1d4) = 5;
          uVar9 = *(undefined4 *)(param_1 + 0x78);
          goto LAB_0021ff0c;
        }
        *(undefined4 *)(iVar6 + 0x1cc) = *(undefined4 *)(iVar6 + 0x1d4);
        *(undefined4 *)(iVar6 + 0x1d0) = *(undefined4 *)(iVar6 + 0x1d4);
        *(undefined4 *)(iVar6 + 0x1d8) = *(undefined4 *)(iVar6 + 0x1dc);
        if (*(int *)(iVar6 + 0x1e0) != 0) {
          *(undefined1 *)(*(int *)(iVar6 + 0x1e0) + 0x45) = 0xff;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      fn_0021a8a4(param_1);
      piVar8 = *(int **)(param_1 + 0x70);
      local_1d0 = 0;
      local_1cc = 0;
      local_1c8 = 0;
      pcVar3 = (char *)0x0;
      local_1c4 = 0;
      local_1c0 = 0;
      local_1bc = 0;
      local_1b8 = 0;
      local_1b4 = 0;
      do {
        local_1d8 = pcVar3;
        fn_0017d96c(&local_1d0,0x20,0x1f,(char *)&DAT_00220010);
        iVar2 = (**(code **)(*piVar8 + 0x2c))(piVar8,&local_1d0,1);
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
        local_1d8 = pcVar3;
        fn_0017d96c(&local_1d0,0x20,0x1f,(char *)&DAT_00220028);
        iVar6 = (**(code **)(*piVar8 + 0x2c))(piVar8,&local_1d0,1);
        iVar2 = (int)pcVar3 * 4;
        pcVar3 = pcVar3 + 1;
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
        *(undefined4 *)(param_1 + iVar2 + 0x65c) = 0;
      } while ((int)pcVar3 < 4);
    }
  }
  return 1;
}


