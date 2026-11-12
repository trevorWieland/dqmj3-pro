#include "006c2a94_006c2e50.h"



void fn_006c2e50(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
  if (iVar2 == 0) {
    return;
  }
  puVar1 = (undefined4 *)fn_00211c48(iVar2,0x20);
  *puVar1 = &DAT_0082e3a4;
  puVar1[0x68] = 0xffffffff;
  puVar1[0x67] = 0;
  return;
}



undefined4 * fn_006c2a94(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  switch(param_2) {
  case 2:
    iVar2 = fn_00145b00(0x1a0,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,2);
      *puVar3 = &UNK_008315e4;
      puVar3[0x67] = 0x43b40000;
    }
    return puVar3;
  case 3:
    iVar2 = fn_00145b00(0x1a0,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,3);
      *puVar3 = &UNK_008315e4;
      puVar3[0x67] = 0x43b40000;
    }
    return puVar3;
  case 4:
    iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,4);
      *puVar3 = &DAT_0082ae04;
      puVar3[0x67] = 0xffffffff;
      puVar3[0x68] = 0;
      *(undefined1 *)(puVar3 + 0x69) = 0;
      fn_006f7a70(DAT_008977e0);
      uVar1 = fn_002ff310(2);
      puVar3[0x4f] = uVar1;
      return puVar3;
    }
    break;
  case 5:
    iVar2 = fn_00145b00(0x19c,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,5);
      *puVar3 = &UNK_007becc4;
    }
    return puVar3;
  case 6:
    iVar2 = fn_00145b00(0x1b0,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,6);
      *puVar3 = &DAT_0082e264;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = fn_0065fdf0();
      }
      puVar3[0x6a] = uVar1;
      return puVar3;
    }
    break;
  case 7:
    iVar2 = fn_00145b00(0x1b0,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,7);
      puVar3[0x67] = 0;
      *puVar3 = &UNK_0082e4e4;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      puVar3[0x6b] = 0xffffffff;
      return puVar3;
    }
    break;
  case 8:
    iVar2 = fn_00145b00(0x1c4,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,8);
      *puVar3 = &DAT_00826f3c;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      puVar3[0x6a] = 0;
      puVar3[0x6b] = 0;
      *(undefined1 *)(puVar3 + 0x6e) = 0;
      puVar3[0x6c] = 0;
      puVar3[0x6f] = 0xffffffff;
      puVar3[0x6d] = 0;
      iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = fn_0065fdf0();
      }
      puVar3[0x70] = uVar1;
      puVar3[0x6c] = 0x7559;
      puVar3[0x6d] = 0x755a;
    }
    return puVar3;
  case 9:
    iVar2 = fn_00145b00(0x1c4,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,9);
      *puVar3 = &DAT_00826f3c;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      puVar3[0x6a] = 0;
      puVar3[0x6b] = 0;
      *(undefined1 *)(puVar3 + 0x6e) = 0;
      puVar3[0x6c] = 0;
      puVar3[0x6f] = 0xffffffff;
      puVar3[0x6d] = 0;
      iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = fn_0065fdf0();
      }
      puVar3[0x70] = uVar1;
      puVar3[0x6c] = 0x755b;
      puVar3[0x6d] = 0x755c;
    }
    return puVar3;
  case 10:
    iVar2 = fn_00145b00(0x1ac,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,10);
      *puVar3 = &UNK_00826dfc;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x69] = 0x755d;
      puVar3[0x6a] = 0x755e;
    }
    return puVar3;
  case 0xb:
    iVar2 = fn_00145b00(0x1ac,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0xb);
      *puVar3 = &UNK_00826dfc;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x69] = 0x755f;
      puVar3[0x6a] = 0x7560;
    }
    return puVar3;
  case 0xc:
    iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0xc);
      *puVar3 = &UNK_0082e624;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0x461c4000;
      puVar3[0x69] = 0;
      return puVar3;
    }
    break;
  case 0xd:
    iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0xd);
      *puVar3 = &DAT_00834a60;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      return puVar3;
    }
    break;
  case 0xe:
    iVar2 = fn_00145b00(0x19c,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0xe);
      *puVar3 = &UNK_0083fac4;
      return puVar3;
    }
    break;
  case 0xf:
    iVar2 = fn_00145b00(0x1b0,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0xf);
      *puVar3 = &DAT_00831724;
      puVar3[0x67] = 0xffffffff;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      puVar3[0x6a] = 0xffffffff;
      puVar3[0x6b] = 0xffffffff;
      fn_006f7a70(DAT_008977e0);
      uVar1 = fn_002ff310(2);
      puVar3[0x4f] = uVar1;
      fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc749);
      fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0xc74a);
      return puVar3;
    }
    break;
  default:
    iVar2 = fn_00145b00(0x19c,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,param_2);
      return puVar3;
    }
    break;
  case 0x12:
    iVar2 = fn_00341260(0xffffffff);
    if (iVar2 == 0) {
      iVar2 = fn_00145b00(0x1b0,&DAT_00812c8c);
      puVar3 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)fn_00303e58(iVar2,0x12);
        *puVar3 = &PTR_FUN_00822c60;
        puVar3[0x69] = 0;
        puVar3[0x6a] = 0x7d34;
        *(undefined1 *)(puVar3 + 0x6b) = 0;
        puVar3[0x67] = 0x44bb8000;
        puVar3[0x68] = 0x44fa0000;
      }
      return puVar3;
    }
    iVar2 = fn_00145b00(0x1bc,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_003193d8();
      *puVar3 = &UNK_007bf0d8;
      iVar2 = fn_001c6d34(puVar3 + 0x6c);
      puVar3 = (undefined4 *)(iVar2 + -0x1b0);
    }
    return puVar3;
  case 0x13:
    iVar2 = fn_00145b00(0x1a8,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x13);
      puVar3[0x67] = 0xffffffff;
      *puVar3 = &DAT_007bef98;
      iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = fn_0065fdf0();
      }
      puVar3[0x68] = uVar1;
      *(undefined1 *)(puVar3 + 0x69) = 0;
    }
    return puVar3;
  case 0x14:
    iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x14);
      *puVar3 = &DAT_0083fd48;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      fn_006f7a70(DAT_008977e0);
      uVar1 = fn_002ff310(2);
      puVar3[0x4f] = uVar1;
      DAT_008918f0 = puVar3;
      return puVar3;
    }
    break;
  case 0x15:
    iVar2 = fn_00145b00(0x1ac,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x15);
      *puVar3 = &UNK_007bf36c;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      *(undefined1 *)((int)puVar3 + 0x19d) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      puVar3[0x6a] = 0;
    }
    return puVar3;
  case 0x16:
    iVar2 = fn_00145b00(0x1b8,&DAT_00812c8c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x16);
      *puVar3 = &DAT_007bf738;
      *(undefined1 *)(puVar3 + 0x67) = 0;
      iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = fn_0065fdf0();
      }
      puVar3[0x6b] = uVar1;
      *(undefined1 *)(puVar3 + 0x6c) = 0;
      puVar3[0x6d] = 0xffffffff;
    }
    return puVar3;
  case 0x17:
    iVar2 = fn_00145b00(0x1a0,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x17);
      puVar3[0x67] = 0;
      *puVar3 = &UNK_00826c80;
      fn_006f7a70(DAT_008977e0);
      uVar1 = fn_002ff310(2);
      puVar3[0x4f] = uVar1;
      return puVar3;
    }
    break;
  case 0x18:
    iVar2 = fn_00145b00(0x19c,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00211c48(iVar2,0x18);
      *puVar3 = &UNK_0083dbd4;
      return puVar3;
    }
    break;
  case 0x19:
    iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
    if (iVar2 != 0) {
      iVar4 = 0;
LAB_00424d40:
      puVar3 = (undefined4 *)fn_00303e58(iVar2,param_2);
      *puVar3 = &UNK_0083b04c;
      puVar3[0x67] = *(undefined4 *)(&UNK_007bf870 + iVar4 * 8);
      puVar3[0x68] = *(undefined4 *)(&UNK_007bf874 + iVar4 * 8);
      return puVar3;
    }
    break;
  case 0x1a:
    iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
    if (iVar2 != 0) {
      iVar4 = 1;
      goto LAB_00424d40;
    }
    break;
  case 0x1b:
    iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
    if (iVar2 != 0) {
      iVar4 = 2;
      goto LAB_00424d40;
    }
    break;
  case 0x1c:
    iVar2 = fn_00145b00(0x1a4,&DAT_00812c8c);
    if (iVar2 != 0) {
      iVar4 = 3;
      goto LAB_00424d40;
    }
    break;
  case 0x1d:
    iVar2 = fn_00145b00(0x1cc,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_005673c8(iVar2,0x1d);
      puVar3[0x6d] = 0x757e;
      puVar3[0x6c] = 0x757a;
      *puVar3 = &UNK_0084367c;
      puVar3[0x70] = 0x41700000;
      puVar3[0x71] = 0x42a00000;
      return puVar3;
    }
    break;
  case 0x1e:
    iVar2 = fn_00145b00(0x1cc,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_005673c8(iVar2,0x1e);
      puVar3[0x6d] = 0x7585;
      puVar3[0x6c] = 0x7584;
      *puVar3 = &UNK_008314a0;
      puVar3[0x70] = 0x42880000;
      puVar3[0x71] = 0x42c80000;
      return puVar3;
    }
    break;
  case 0x1f:
    iVar2 = fn_00145b00(0x1b0,&DAT_00812c8c);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)fn_00303e58(iVar2,0x1f);
      *puVar3 = &UNK_00822b20;
      puVar3[0x69] = 0;
      puVar3[0x6a] = 0x7579;
      *(undefined1 *)(puVar3 + 0x6b) = 0;
      puVar3[0x67] = 0x44bb8000;
      puVar3[0x68] = 0x44fa0000;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}


