#include "0072e09c_0072e09c.h"



void fn_0072e09c(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  int local_28;
  
  puVar1 = DAT_008bfab0;
  iVar2 = DAT_008bfad8 + (param_2 & 0x1ff) * 4;
  iVar3 = param_1 + -0x661f;
  piVar8 = (int *)0x0;
  local_28 = param_4;
  if (param_1 != 0x661f) {
    if (param_1 < 0x661f) {
      if (param_1 != 0x6616) {
        if (0x6615 < param_1) {
          switch(param_1) {
          default:
            goto switchD_0072e158_caseD_6616;
          case 0x6617:
          case 0x6618:
          case 0x6619:
          case 0x661a:
          case 0x661b:
          case 0x661c:
          case 0x661d:
          case 0x661e:
            goto switchD_0072e158_caseD_6617;
          }
        }
        if (param_1 != 0x6612) {
          if (param_1 < 0x6612) {
            if (param_1 == 0xde1) {
              if (DAT_008bfab0[DAT_008bfab0[0x16] + 0x17] == param_2) {
                return;
              }
              if (param_2 != 0) {
                for (piVar8 = *(int **)(iVar2 + 0x10); piVar8 != (int *)0x0;
                    piVar8 = (int *)piVar8[3]) {
                  if (piVar8[2] == param_2) {
                    if (piVar8 != (int *)0x0) {
                      if (*piVar8 == 0) {
                        iVar2 = fn_00146f18(param_2);
                        *piVar8 = iVar2;
                        piVar8[1] = 0;
                      }
                      goto LAB_0072e2fc;
                    }
                    break;
                  }
                }
                if (DAT_0089a520 == (code *)0x0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  piVar8 = (int *)(*DAT_0089a520)(0x10000,0x100,0,0x10);
                }
                iVar2 = fn_00146f18(param_2);
                *piVar8 = iVar2;
                piVar8[1] = 0;
                piVar8[2] = param_2;
                piVar8[3] = 0;
                fn_0074403c(piVar8,param_2);
              }
LAB_0072e2fc:
              iVar2 = DAT_008bfad8;
              if (*(int **)(DAT_008bfad8 + 0x8a8) == (int *)0x0) {
                *(uint *)(*(int *)(DAT_008bfad8 + 8) + puVar1[0x16] * 4 + 4) = param_2;
              }
              else {
                *(uint *)(**(int **)(DAT_008bfad8 + 0x8a8) + puVar1[0x16] * 4 + 4) = param_2;
              }
              puVar1[puVar1[0x16] + 0x17] = param_2;
              *(int **)(iVar2 + puVar1[0x16] * 4 + 0x810) = piVar8;
              uVar5 = puVar1[0x16] + 10 >> 5;
              puVar1[uVar5] = puVar1[uVar5] | 1 << (puVar1[0x16] + 10 & 0x1f);
              return;
            }
            if (param_1 == 0x6600) {
              if (DAT_008bfab0[0x3d] == param_2) {
                return;
              }
              if (param_2 != 0) {
                for (piVar8 = *(int **)(iVar2 + 0x10); piVar8 != (int *)0x0;
                    piVar8 = (int *)piVar8[3]) {
                  if (piVar8[2] == param_2) {
                    if (piVar8 != (int *)0x0) {
                      if (*piVar8 == 0) {
                        if (DAT_0089a520 == (code *)0x0) {
                          puVar10 = (uint *)0x0;
                        }
                        else {
                          puVar10 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x9c);
                          if (puVar10 != (uint *)0x0) {
                            fn_00301f50(puVar10,0x9c);
                            *puVar10 = param_2;
                          }
                        }
                        piVar8[1] = 2;
                        *piVar8 = (int)puVar10;
                      }
                      goto LAB_0072e564;
                    }
                    break;
                  }
                }
                if (DAT_0089a520 == (code *)0x0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  piVar8 = (int *)(*DAT_0089a520)(0x10000,0x100,0,0x10);
                }
                if (DAT_0089a520 == (code *)0x0) {
                  puVar10 = (uint *)0x0;
                }
                else {
                  puVar10 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x9c);
                  if (puVar10 != (uint *)0x0) {
                    fn_00301f50(puVar10,0x9c);
                    *puVar10 = param_2;
                  }
                }
                *piVar8 = (int)puVar10;
                piVar8[1] = 2;
                piVar8[2] = param_2;
                piVar8[3] = 0;
                fn_0074403c(piVar8,param_2);
              }
LAB_0072e564:
              iVar2 = DAT_008bfad8;
              bVar11 = false;
              iVar3 = 0;
              do {
                if (param_2 == 0) {
                  iVar4 = *(int *)(iVar2 + 8);
                }
                else {
                  iVar4 = *piVar8;
                }
                uVar5 = *(uint *)(iVar4 + iVar3 * 4 + 0x1c);
                if (puVar1[iVar3 + 0x1d] != uVar5) {
                  puVar1[iVar3 + 0x1d] = uVar5;
                  if (uVar5 == 0) {
                    *(undefined4 *)(iVar2 + iVar3 * 4 + 0x828) = 0;
                  }
                  else {
                    iVar4 = *(int *)(iVar2 + (uVar5 & 0x1ff) * 4 + 0x10);
                    if (iVar4 != 0) {
                      do {
                        bVar11 = *(uint *)(iVar4 + 8) != uVar5;
                        if (bVar11) {
                          iVar4 = *(int *)(iVar4 + 0xc);
                        }
                      } while (bVar11 && iVar4 != 0);
                    }
                    *(int *)(iVar2 + iVar3 * 4 + 0x828) = iVar4;
                  }
                  bVar11 = true;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 0x20);
              if (bVar11) {
                *puVar1 = *puVar1 | 0x4000;
              }
              iVar3 = 0;
              do {
                if (param_2 == 0) {
                  uVar7 = *(uint *)(*(int *)(iVar2 + 8) + iVar3 * 4 + 4);
                  uVar5 = *(uint *)(*(int *)(iVar2 + 8) + iVar3 * 4 + 0x10);
                }
                else {
                  uVar7 = *(uint *)(*piVar8 + iVar3 * 4 + 4);
                  uVar5 = *(uint *)(*piVar8 + iVar3 * 4 + 0x10);
                }
                uVar6 = puVar1[iVar3 + 0x17];
                bVar11 = uVar6 == uVar7;
                if (bVar11) {
                  uVar6 = puVar1[iVar3 + 0x1a];
                }
                if (!bVar11 || uVar6 != uVar5) {
                  if (uVar7 == 0) {
                    uVar6 = iVar2 + iVar3 * 4;
                  }
                  puVar1[iVar3 + 0x17] = uVar7;
                  if (uVar7 == 0) {
                    *(undefined4 *)(uVar6 + 0x810) = 0;
                  }
                  else {
                    uVar6 = *(uint *)(iVar2 + (uVar7 & 0x1ff) * 4 + 0x10);
                    if (uVar6 != 0) {
                      do {
                        bVar11 = *(uint *)(uVar6 + 8) != uVar7;
                        if (bVar11) {
                          uVar6 = *(uint *)(uVar6 + 0xc);
                        }
                      } while (bVar11 && uVar6 != 0);
                    }
                    *(uint *)(iVar2 + iVar3 * 4 + 0x810) = uVar6;
                  }
                  if (uVar5 == 0) {
                    uVar6 = iVar2 + iVar3 * 4;
                  }
                  puVar1[iVar3 + 0x1a] = uVar5;
                  if (uVar5 == 0) {
                    *(undefined4 *)(uVar6 + 0x81c) = 0;
                  }
                  else {
                    iVar4 = *(int *)(iVar2 + (uVar5 & 0x1ff) * 4 + 0x10);
                    if (iVar4 != 0) {
                      do {
                        bVar11 = *(uint *)(iVar4 + 8) != uVar5;
                        if (bVar11) {
                          iVar4 = *(int *)(iVar4 + 0xc);
                        }
                      } while (bVar11 && iVar4 != 0);
                    }
                    *(int *)(iVar2 + iVar3 * 4 + 0x81c) = iVar4;
                  }
                  iVar4 = (int)(iVar3 + 10U) >> 5;
                  puVar1[iVar4] = puVar1[iVar4] | 1 << (iVar3 + 10U & 0x1f);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              puVar1[0x3d] = param_2;
              *(int **)(iVar2 + 0x8a8) = piVar8;
              local_28 = *(int *)(iVar2 + 0xc);
              if (local_28 == 0) {
                return;
              }
              fn_0072ea34(1,&local_28);
              *(undefined4 *)(DAT_008bfad8 + 0xc) = 0;
              return;
            }
            if (param_1 != 0x6610 && param_1 != 0x6611) {
              return;
            }
          }
          else if ((param_1 != 0x6613 && param_1 != 0x6614) && param_1 != 0x6615) {
            return;
          }
        }
      }
    }
    else if (iVar3 != 9) {
      if (iVar3 < 9) {
        switch(iVar3) {
        default:
          goto switchD_0072e158_caseD_6616;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          goto switchD_0072e158_caseD_6617;
        }
      }
      if (iVar3 != 0xe) {
        if (iVar3 < 0xe) {
          if ((iVar3 != 10 && iVar3 != 0xb) && (iVar3 != 0xc && iVar3 != 0xd)) {
            return;
          }
        }
        else if (iVar3 != 0xf && iVar3 != 0x10) {
          if (iVar3 != 0x1ef4) {
            return;
          }
          if (DAT_008bfab0[DAT_008bfab0[0x16] + 0x1a] == param_2) {
            return;
          }
          if (param_2 != 0) {
            for (piVar8 = *(int **)(iVar2 + 0x10); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[3])
            {
              if (piVar8[2] == param_2) {
                if (piVar8 != (int *)0x0) {
                  if (*piVar8 == 0) {
                    iVar2 = fn_00146e50(param_2);
                    *piVar8 = iVar2;
                    piVar8[1] = 1;
                  }
                  goto LAB_0072e3e4;
                }
                break;
              }
            }
            if (DAT_0089a520 == (code *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)(*DAT_0089a520)(0x10000,0x100,0,0x10);
            }
            iVar2 = fn_00146e50(param_2);
            *piVar8 = iVar2;
            piVar8[1] = 1;
            piVar8[2] = param_2;
            piVar8[3] = 0;
            fn_0074403c(piVar8,param_2);
          }
LAB_0072e3e4:
          iVar2 = DAT_008bfad8;
          if (*(int **)(DAT_008bfad8 + 0x8a8) == (int *)0x0) {
            *(uint *)(*(int *)(DAT_008bfad8 + 8) + puVar1[0x16] * 4 + 0x10) = param_2;
          }
          else {
            *(uint *)(**(int **)(DAT_008bfad8 + 0x8a8) + puVar1[0x16] * 4 + 0x10) = param_2;
          }
          puVar1[puVar1[0x16] + 0x1a] = param_2;
          *(int **)(iVar2 + puVar1[0x16] * 4 + 0x81c) = piVar8;
          uVar5 = puVar1[0x16] + 10 >> 5;
          puVar1[uVar5] = puVar1[uVar5] | 1 << (puVar1[0x16] + 10 & 0x1f);
          return;
        }
      }
    }
  }
switchD_0072e158_caseD_6617:
  puVar10 = DAT_008bfab0 + param_1 + -0x65f3;
  if (*puVar10 != param_2) {
    if (param_2 != 0) {
      for (piVar8 = *(int **)(iVar2 + 0x10); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[3]) {
        if (piVar8[2] == param_2) {
          if (piVar8 != (int *)0x0) {
            if (*piVar8 == 0) {
              puVar9 = (uint *)0x0;
              if ((DAT_0089a520 != (code *)0x0) &&
                 (puVar9 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x820), puVar9 != (uint *)0x0)) {
                fn_00301f50(puVar9,0x820);
                puVar9[0x207] = 0xffffffff;
                *puVar9 = param_2;
              }
              piVar8[1] = 3;
              *piVar8 = (int)puVar9;
            }
            goto LAB_0072e87c;
          }
          break;
        }
      }
      if (DAT_0089a520 == (code *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(*DAT_0089a520)(0x10000,0x100,0,0x10);
      }
      if (DAT_0089a520 == (code *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = (uint *)(*DAT_0089a520)(0x10000,0x100,0,0x820);
        if (puVar9 != (uint *)0x0) {
          fn_00301f50(puVar9,0x820);
          puVar9[0x207] = 0xffffffff;
          *puVar9 = param_2;
        }
      }
      *piVar8 = (int)puVar9;
      piVar8[1] = 3;
      piVar8[2] = param_2;
      piVar8[3] = 0;
      fn_0074403c(piVar8,param_2);
    }
LAB_0072e87c:
    iVar2 = DAT_008bfad8;
    if (*(int **)(DAT_008bfad8 + 0x8a8) == (int *)0x0) {
      iVar3 = *(int *)(DAT_008bfad8 + 8);
    }
    else {
      iVar3 = **(int **)(DAT_008bfad8 + 0x8a8);
    }
    *(uint *)(iVar3 + param_1 * 4 + -0x19824) = param_2;
    *puVar10 = param_2;
    *(int **)(iVar2 + param_1 * 4 + -0x19018) = piVar8;
    *puVar1 = *puVar1 | 0x4000;
    return;
  }
switchD_0072e158_caseD_6616:
  return;
}


