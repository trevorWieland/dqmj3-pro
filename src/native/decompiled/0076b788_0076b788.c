#include "0076b788_0076b788.h"



void fn_0076b788(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint in_lr;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  
  iVar8 = *param_3;
  if (iVar8 == *(int *)(param_2 + 0x10)) {
    *param_1 = *(int *)(param_2 + 0x10);
    return;
  }
  iVar5 = *(int *)(iVar8 + 0xc);
  if (*(int *)(iVar8 + 0xc) == 0) {
    iVar5 = *(int *)(iVar8 + 4);
    if (iVar8 == *(int *)(iVar5 + 0xc)) {
      do {
        iVar8 = iVar5;
        iVar5 = *(int *)(iVar8 + 4);
      } while (iVar8 == *(int *)(iVar5 + 0xc));
    }
    if (*(int *)(iVar8 + 0xc) != iVar5) {
      iVar8 = iVar5;
    }
  }
  else {
    do {
      iVar8 = iVar5;
      iVar5 = *(int *)(iVar8 + 8);
    } while (*(int *)(iVar8 + 8) != 0);
  }
  pbVar9 = (byte *)*param_3;
  pbVar6 = *(byte **)(pbVar9 + 8);
  pbVar4 = *(byte **)(pbVar9 + 0xc);
  pbVar10 = pbVar9;
  if (pbVar6 == (byte *)0x0) {
    if (pbVar4 != (byte *)0x0) goto LAB_0076b844;
    pbVar4 = *(byte **)(pbVar9 + 4);
    if (*(byte **)(param_2 + 0x10) == pbVar4) {
      *(byte **)(*(byte **)(param_2 + 0x10) + 0xc) = pbVar4;
      *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    }
    else if (*(byte **)(pbVar4 + 8) == pbVar9) {
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 8) == pbVar9) {
        *(byte **)(*(int *)(param_2 + 0x10) + 8) = pbVar4;
      }
    }
    else {
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      if (*(byte **)(*(int *)(param_2 + 0x10) + 0xc) == pbVar9) {
        *(byte **)(*(int *)(param_2 + 0x10) + 0xc) = pbVar4;
      }
    }
  }
  else {
    if (pbVar4 == (byte *)0x0) {
      pbVar4 = pbVar6;
    }
    else {
      iVar5 = *(int *)(pbVar4 + 8);
      pbVar10 = pbVar4;
      while (iVar5 != 0) {
        pbVar10 = *(byte **)(pbVar10 + 8);
        iVar5 = *(int *)(pbVar10 + 8);
      }
      pbVar4 = *(byte **)(pbVar10 + 0xc);
    }
LAB_0076b844:
    if (pbVar10 == pbVar9) {
      *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar10 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar4;
      }
      else {
        iVar5 = *(int *)(pbVar9 + 4);
        if (*(byte **)(iVar5 + 8) == pbVar9) {
          *(byte **)(iVar5 + 8) = pbVar4;
        }
        else {
          *(byte **)(iVar5 + 0xc) = pbVar4;
        }
      }
      in_lr = *(uint *)(param_2 + 0x10);
      if (*(byte **)(in_lr + 8) == pbVar9) {
        if (*(int *)(pbVar9 + 0xc) == 0) {
          *(undefined4 *)(in_lr + 8) = *(undefined4 *)(pbVar9 + 4);
        }
        else {
          pbVar13 = *(byte **)(pbVar4 + 8);
          pbVar6 = pbVar4;
          while (pbVar3 = pbVar13, pbVar3 != (byte *)0x0) {
            pbVar6 = pbVar3;
            pbVar13 = *(byte **)(pbVar3 + 8);
          }
          *(byte **)(in_lr + 8) = pbVar6;
        }
      }
      iVar5 = *(int *)(param_2 + 0x10);
      if (*(byte **)(iVar5 + 0xc) == pbVar9) {
        if (*(int *)(pbVar9 + 8) == 0) {
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(pbVar9 + 4);
        }
        else {
          pbVar9 = *(byte **)(pbVar4 + 0xc);
          pbVar6 = pbVar4;
          while (pbVar13 = pbVar9, pbVar13 != (byte *)0x0) {
            pbVar6 = pbVar13;
            pbVar9 = *(byte **)(pbVar13 + 0xc);
          }
          *(byte **)(iVar5 + 0xc) = pbVar6;
        }
      }
    }
    else {
      *(byte **)(pbVar6 + 4) = pbVar10;
      *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(pbVar9 + 8);
      if (*(byte **)(pbVar9 + 0xc) == pbVar10) {
        if (pbVar4 != (byte *)0x0) {
          *(byte **)(pbVar4 + 4) = pbVar10;
        }
      }
      else {
        if (pbVar4 != (byte *)0x0) {
          *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(pbVar10 + 4);
        }
        *(byte **)(*(int *)(pbVar10 + 4) + 8) = pbVar4;
        *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(pbVar9 + 0xc);
        *(byte **)(*(int *)(pbVar9 + 0xc) + 4) = pbVar10;
      }
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar9) {
        *(byte **)(*(int *)(param_2 + 0x10) + 4) = pbVar10;
      }
      else {
        iVar5 = *(int *)(pbVar9 + 4);
        if (*(byte **)(iVar5 + 8) == pbVar9) {
          *(byte **)(iVar5 + 8) = pbVar10;
        }
        else {
          *(byte **)(iVar5 + 0xc) = pbVar10;
        }
      }
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = pbVar10;
      }
      *(undefined4 *)(pbVar10 + 4) = *(undefined4 *)(pbVar9 + 4);
      bVar1 = *pbVar10;
      *pbVar10 = *pbVar9;
      *pbVar9 = bVar1;
      pbVar10 = pbVar9;
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x10);
  bVar14 = pbVar6 != pbVar4;
  if (bVar14) {
    pbVar6 = (byte *)(uint)*pbVar10;
  }
  if (!bVar14 || pbVar6 == (byte *)0x0) {
LAB_0076bbac:
    *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(param_2 + 4);
    fn_00170f54(pbVar10 + 0x10);
    *(byte **)(param_2 + 4) = pbVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    *param_1 = iVar8;
    return;
  }
LAB_0076bb8c:
  if ((*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar4) || (*pbVar4 != 1)) goto LAB_0076bba8;
  pbVar9 = *(byte **)(pbVar4 + 4);
  pbVar6 = *(byte **)(pbVar9 + 8);
  if (pbVar6 == pbVar4) {
    pbVar6 = *(byte **)(pbVar9 + 0xc);
    if (pbVar6 != (byte *)0x0) {
      if (*pbVar6 == 0) {
        *pbVar6 = 1;
        **(undefined1 **)(pbVar4 + 4) = 0;
        iVar7 = *(int *)(pbVar4 + 4);
        iVar5 = *(int *)(iVar7 + 0xc);
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar5 + 8);
        if (*(int *)(iVar5 + 8) != 0) {
          *(int *)(*(int *)(iVar5 + 8) + 4) = iVar7;
        }
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar7 + 4);
        in_lr = *(uint *)(param_2 + 0x10);
        if (*(int *)(in_lr + 4) == iVar7) {
          *(int *)(in_lr + 4) = iVar5;
        }
        else {
          in_lr = *(uint *)(iVar7 + 4);
          if (*(int *)(in_lr + 8) == iVar7) {
            *(int *)(in_lr + 8) = iVar5;
          }
          else {
            *(int *)(in_lr + 0xc) = iVar5;
          }
        }
        *(int *)(iVar5 + 8) = iVar7;
        *(int *)(iVar7 + 4) = iVar5;
        pbVar9 = *(byte **)(pbVar4 + 4);
        pbVar6 = *(byte **)(pbVar9 + 0xc);
        if (pbVar6 == (byte *)0x0) goto LAB_0076bb64;
      }
      pbVar9 = *(byte **)(pbVar6 + 8);
      if (pbVar9 != (byte *)0x0) {
        in_lr = (uint)*pbVar9;
      }
      if (pbVar9 == (byte *)0x0 || in_lr == 1) {
        pbVar13 = *(byte **)(pbVar6 + 0xc);
        in_lr = 0;
        if (pbVar13 != (byte *)0x0) {
          in_lr = (uint)*pbVar13;
        }
        if (pbVar13 == (byte *)0x0 || in_lr == 1) goto LAB_0076bb84;
      }
      pcVar12 = *(char **)(pbVar6 + 0xc);
      cVar2 = '\0';
      if (pcVar12 != (char *)0x0) {
        cVar2 = *pcVar12;
      }
      if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
        if (pbVar9 != (byte *)0x0) {
          *pbVar9 = 1;
        }
        *pbVar6 = 0;
        iVar5 = *(int *)(pbVar6 + 8);
        *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(iVar5 + 0xc);
        if (*(int *)(iVar5 + 0xc) != 0) {
          *(byte **)(*(int *)(iVar5 + 0xc) + 4) = pbVar6;
        }
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar6 + 4);
        if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
          *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
        }
        else {
          iVar7 = *(int *)(pbVar6 + 4);
          if (*(byte **)(iVar7 + 0xc) == pbVar6) {
            *(int *)(iVar7 + 0xc) = iVar5;
          }
          else {
            *(int *)(iVar7 + 8) = iVar5;
          }
        }
        *(byte **)(iVar5 + 0xc) = pbVar6;
        *(int *)(pbVar6 + 4) = iVar5;
        pbVar6 = *(byte **)(*(int *)(pbVar4 + 4) + 0xc);
        if (pbVar6 == (byte *)0x0) goto LAB_0076bba8;
      }
      *pbVar6 = **(byte **)(pbVar4 + 4);
      **(undefined1 **)(pbVar4 + 4) = 1;
      if (*(undefined1 **)(pbVar6 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(pbVar6 + 0xc) = 1;
      }
      iVar5 = *(int *)(pbVar4 + 4);
      iVar7 = *(int *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar7 + 8);
      if (*(int *)(iVar7 + 8) != 0) {
        *(int *)(*(int *)(iVar7 + 8) + 4) = iVar5;
      }
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar5 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar7;
      }
      else {
        iVar11 = *(int *)(iVar5 + 4);
        if (*(int *)(iVar11 + 8) == iVar5) {
          *(int *)(iVar11 + 8) = iVar7;
        }
        else {
          *(int *)(iVar11 + 0xc) = iVar7;
        }
      }
      *(int *)(iVar7 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar7;
      goto LAB_0076bba8;
    }
  }
  else if (pbVar6 != (byte *)0x0) {
    if (*pbVar6 == 0) {
      *pbVar6 = 1;
      **(undefined1 **)(pbVar4 + 4) = 0;
      iVar5 = *(int *)(pbVar4 + 4);
      in_lr = *(uint *)(iVar5 + 8);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(in_lr + 0xc);
      if (*(int *)(in_lr + 0xc) != 0) {
        *(int *)(*(int *)(in_lr + 0xc) + 4) = iVar5;
      }
      *(undefined4 *)(in_lr + 4) = *(undefined4 *)(iVar5 + 4);
      if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar5) {
        *(uint *)(*(int *)(param_2 + 0x10) + 4) = in_lr;
      }
      else {
        iVar7 = *(int *)(iVar5 + 4);
        if (*(int *)(iVar7 + 0xc) == iVar5) {
          *(uint *)(iVar7 + 0xc) = in_lr;
        }
        else {
          *(uint *)(iVar7 + 8) = in_lr;
        }
      }
      *(int *)(in_lr + 0xc) = iVar5;
      *(uint *)(iVar5 + 4) = in_lr;
      pbVar9 = *(byte **)(pbVar4 + 4);
      pbVar6 = *(byte **)(pbVar9 + 8);
      if (pbVar6 == (byte *)0x0) goto LAB_0076bb64;
    }
    pbVar9 = *(byte **)(pbVar6 + 0xc);
    if (pbVar9 != (byte *)0x0) {
      in_lr = (uint)*pbVar9;
    }
    if (pbVar9 == (byte *)0x0 || in_lr == 1) {
      pbVar13 = *(byte **)(pbVar6 + 8);
      in_lr = 0;
      if (pbVar13 != (byte *)0x0) {
        in_lr = (uint)*pbVar13;
      }
      if (pbVar13 == (byte *)0x0 || in_lr == 1) {
LAB_0076bb84:
        *pbVar6 = 0;
        pbVar4 = *(byte **)(pbVar4 + 4);
        goto LAB_0076bb8c;
      }
    }
    pcVar12 = *(char **)(pbVar6 + 8);
    cVar2 = '\0';
    if (pcVar12 != (char *)0x0) {
      cVar2 = *pcVar12;
    }
    if (pcVar12 == (char *)0x0 || cVar2 == '\x01') {
      if (pbVar9 != (byte *)0x0) {
        *pbVar9 = 1;
      }
      *pbVar6 = 0;
      iVar5 = *(int *)(pbVar6 + 0xc);
      *(undefined4 *)(pbVar6 + 0xc) = *(undefined4 *)(iVar5 + 8);
      if (*(int *)(iVar5 + 8) != 0) {
        *(byte **)(*(int *)(iVar5 + 8) + 4) = pbVar6;
      }
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(pbVar6 + 4);
      if (*(byte **)(*(int *)(param_2 + 0x10) + 4) == pbVar6) {
        *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
      }
      else {
        iVar7 = *(int *)(pbVar6 + 4);
        if (*(byte **)(iVar7 + 8) == pbVar6) {
          *(int *)(iVar7 + 8) = iVar5;
        }
        else {
          *(int *)(iVar7 + 0xc) = iVar5;
        }
      }
      *(byte **)(iVar5 + 8) = pbVar6;
      *(int *)(pbVar6 + 4) = iVar5;
      pbVar6 = *(byte **)(*(int *)(pbVar4 + 4) + 8);
      if (pbVar6 == (byte *)0x0) goto LAB_0076bba8;
    }
    *pbVar6 = **(byte **)(pbVar4 + 4);
    **(undefined1 **)(pbVar4 + 4) = 1;
    if (*(undefined1 **)(pbVar6 + 8) != (undefined1 *)0x0) {
      **(undefined1 **)(pbVar6 + 8) = 1;
    }
    iVar7 = *(int *)(pbVar4 + 4);
    iVar5 = *(int *)(iVar7 + 8);
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(iVar5 + 0xc) != 0) {
      *(int *)(*(int *)(iVar5 + 0xc) + 4) = iVar7;
    }
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar7 + 4);
    if (*(int *)(*(int *)(param_2 + 0x10) + 4) == iVar7) {
      *(int *)(*(int *)(param_2 + 0x10) + 4) = iVar5;
    }
    else {
      iVar11 = *(int *)(iVar7 + 4);
      if (*(int *)(iVar11 + 0xc) == iVar7) {
        *(int *)(iVar11 + 0xc) = iVar5;
      }
      else {
        *(int *)(iVar11 + 8) = iVar5;
      }
    }
    *(int *)(iVar5 + 0xc) = iVar7;
    *(int *)(iVar7 + 4) = iVar5;
LAB_0076bba8:
    *pbVar4 = 1;
    goto LAB_0076bbac;
  }
LAB_0076bb64:
  *pbVar4 = 0;
  pbVar4 = pbVar9;
  goto LAB_0076bb8c;
}


