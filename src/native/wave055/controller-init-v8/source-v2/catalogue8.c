#include "cache8.h"

typedef struct StateCatalogueRun8 {
    const char *family,*member;
    StateWord055 type,first,count,indexed;
} StateCatalogueRun8;

static const StateCatalogueRun8 catalogue_runs8[] = {
    {"dmp_Texture","perspectiveShadow",0x8b56,0,1,1},
    {"dmp_Texture","shadowZBias",0x1406,0,1,1},
    {"dmp_Texture","shadowZScale",0x1406,0,1,1},
    {"dmp_Texture","samplerType",0x1404,0,4,1},
    {"dmp_Texture","texcoord",0x1404,2,2,1},
    {"dmp_Texture","ptRgbMap",0x1404,3,1,1},
    {"dmp_Texture","ptAlphaMap",0x1404,3,1,1},
    {"dmp_Texture","ptAlphaSeparate",0x8b56,3,1,1},
    {"dmp_Texture","ptClampU",0x1404,3,1,1},
    {"dmp_Texture","ptClampV",0x1404,3,1,1},
    {"dmp_Texture","ptShiftU",0x1404,3,1,1},
    {"dmp_Texture","ptShiftV",0x1404,3,1,1},
    {"dmp_Texture","ptMinFilter",0x1404,3,1,1},
    {"dmp_Texture","ptTexWidth",0x1404,3,1,1},
    {"dmp_Texture","ptTexOffset",0x1404,3,1,1},
    {"dmp_Texture","ptTexBias",0x1406,3,1,1},
    {"dmp_Texture","ptNoiseEnable",0x8b56,3,1,1},
    {"dmp_Texture","ptNoiseU",0x8b51,3,1,1},
    {"dmp_Texture","ptNoiseV",0x8b51,3,1,1},
    {"dmp_Texture","ptSamplerRgbMap",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerAlphaMap",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerNoiseMap",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerR",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerG",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerB",0x8b5d,3,1,1},
    {"dmp_Texture","ptSamplerA",0x8b5d,3,1,1},
    {"dmp_FragOperation","mode",0x1404,0,1,0},
    {"dmp_FragOperation","penumbraScale",0x1406,0,1,0},
    {"dmp_FragOperation","penumbraBias",0x1406,0,1,0},
    {"dmp_FragOperation","wScale",0x1406,0,1,0},
    {"dmp_FragOperation","enableClippingPlane",0x8b56,0,1,0},
    {"dmp_FragOperation","clippingPlane",0x8b52,0,1,0},
    {"dmp_FragOperation","enableAlphaTest",0x8b56,0,1,0},
    {"dmp_FragOperation","alphaTestFunc",0x1404,0,1,0},
    {"dmp_FragOperation","alphaRefValue",0x1406,0,1,0},
    {"dmp_Gas","lightXY",0x8b51,0,1,0},
    {"dmp_Gas","lightZ",0x8b52,0,1,0},
    {"dmp_Gas","deltaZ",0x1406,0,1,0},
    {"dmp_Gas","accMax",0x1406,0,1,0},
    {"dmp_Gas","autoAcc",0x8b56,0,1,0},
    {"dmp_Gas","attenuation",0x1406,0,1,0},
    {"dmp_Gas","colorLutInput",0x1404,0,1,0},
    {"dmp_Gas","shadingDensitySrc",0x1404,0,1,0},
    {"dmp_Gas","samplerTR",0x8b5d,0,1,0},
    {"dmp_Gas","samplerTG",0x8b5d,0,1,0},
    {"dmp_Gas","samplerTB",0x8b5d,0,1,0},
    {"dmp_FragmentLighting","enabled",0x8b56,0,1,0},
    {"dmp_FragmentLighting","ambient",0x8b52,0,1,0},
    {"dmp_FragmentMaterial","emission",0x8b52,0,1,0},
    {"dmp_FragmentMaterial","ambient",0x8b52,0,1,0},
    {"dmp_FragmentMaterial","diffuse",0x8b52,0,1,0},
    {"dmp_FragmentMaterial","specular0",0x8b52,0,1,0},
    {"dmp_FragmentMaterial","specular1",0x8b52,0,1,0},
    {"dmp_FragmentLightSource","enabled",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","ambient",0x8b52,0,8,1},
    {"dmp_FragmentLightSource","diffuse",0x8b52,0,8,1},
    {"dmp_FragmentLightSource","specular0",0x8b52,0,8,1},
    {"dmp_FragmentLightSource","specular1",0x8b52,0,8,1},
    {"dmp_FragmentLightSource","position",0x8b52,0,8,1},
    {"dmp_FragmentLightSource","spotDirection",0x8b51,0,8,1},
    {"dmp_FragmentLightSource","shadowed",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","geomFactor0",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","geomFactor1",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","twoSideDiffuse",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","samplerSP",0x8b5d,0,8,1},
    {"dmp_FragmentLightSource","spotEnabled",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","distanceAttenuationBias",0x1406,0,8,1},
    {"dmp_FragmentLightSource","distanceAttenuationScale",0x1406,0,8,1},
    {"dmp_FragmentLightSource","distanceAttenuationEnabled",0x8b56,0,8,1},
    {"dmp_FragmentLightSource","samplerDA",0x8b5d,0,8,1},
    {"dmp_LightEnv","absLutInputD0",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputD1",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputSP",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputFR",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputRB",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputRG",0x8b56,0,1,0},
    {"dmp_LightEnv","absLutInputRR",0x8b56,0,1,0},
    {"dmp_LightEnv","lutInputD0",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputD1",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputSP",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputFR",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputRB",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputRG",0x1404,0,1,0},
    {"dmp_LightEnv","lutInputRR",0x1404,0,1,0},
    {"dmp_LightEnv","lutScaleD0",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleD1",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleSP",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleFR",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleRB",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleRG",0x1406,0,1,0},
    {"dmp_LightEnv","lutScaleRR",0x1406,0,1,0},
    {"dmp_FragmentMaterial","samplerD0",0x8b5d,0,1,0},
    {"dmp_FragmentMaterial","samplerD1",0x8b5d,0,1,0},
    {"dmp_FragmentMaterial","samplerFR",0x8b5d,0,1,0},
    {"dmp_FragmentMaterial","samplerRB",0x8b5d,0,1,0},
    {"dmp_FragmentMaterial","samplerRG",0x8b5d,0,1,0},
    {"dmp_FragmentMaterial","samplerRR",0x8b5d,0,1,0},
    {"dmp_LightEnv","shadowSelector",0x1404,0,1,0},
    {"dmp_LightEnv","bumpSelector",0x1404,0,1,0},
    {"dmp_LightEnv","bumpMode",0x1404,0,1,0},
    {"dmp_LightEnv","bumpRenorm",0x8b56,0,1,0},
    {"dmp_LightEnv","config",0x1404,0,1,0},
    {"dmp_LightEnv","invertShadow",0x8b56,0,1,0},
    {"dmp_LightEnv","shadowPrimary",0x8b56,0,1,0},
    {"dmp_LightEnv","shadowSecondary",0x8b56,0,1,0},
    {"dmp_LightEnv","shadowAlpha",0x8b56,0,1,0},
    {"dmp_LightEnv","fresnelSelector",0x1404,0,1,0},
    {"dmp_LightEnv","clampHighlights",0x8b56,0,1,0},
    {"dmp_LightEnv","lutEnabledD0",0x8b56,0,1,0},
    {"dmp_LightEnv","lutEnabledD1",0x8b56,0,1,0},
    {"dmp_LightEnv","lutEnabledRefl",0x8b56,0,1,0},
    {"dmp_TexEnv","combineRgb",0x1404,0,6,1},
    {"dmp_TexEnv","combineAlpha",0x1404,0,6,1},
    {"dmp_TexEnv","srcRgb",0x8b54,0,6,1},
    {"dmp_TexEnv","srcAlpha",0x8b54,0,6,1},
    {"dmp_TexEnv","operandRgb",0x8b54,0,6,1},
    {"dmp_TexEnv","operandAlpha",0x8b54,0,6,1},
    {"dmp_TexEnv","scaleRgb",0x1406,0,6,1},
    {"dmp_TexEnv","scaleAlpha",0x1406,0,6,1},
    {"dmp_TexEnv","constRgba",0x8b52,0,6,1},
    {"dmp_TexEnv","bufferColor",0x8b52,0,1,1},
    {"dmp_TexEnv","bufferInput",0x8b53,1,4,1},
    {"dmp_Fog","mode",0x1404,0,1,0},
    {"dmp_Fog","color",0x8b51,0,1,0},
    {"dmp_Fog","zFlip",0x8b56,0,1,0},
    {"dmp_Fog","sampler",0x8b5d,0,1,0},
};

static char *append_name8(char *destination,const char *text) {
    while (*text)
        *destination++=*text++;
    return destination;
}

void state_builtin_catalogue8(StateCatalogue8 *catalogue) {
    StateWord055 index=0;
    for (StateWord055 r=0;r<sizeof(catalogue_runs8)/sizeof(catalogue_runs8[0]);r++) {
        const StateCatalogueRun8 *run=&catalogue_runs8[r];
        for (StateWord055 unit=run->first;unit<run->first+run->count;unit++) {
            char *name=catalogue->names[index];
            char *end=append_name8(name,run->family);
            if (run->indexed) {
                *end++='[';
                *end++=(char)('0'+unit);
                *end++=']';
            }
            *end++='.';
            end=append_name8(end,run->member);
            *end=0;
            catalogue->parameters[index].count=1;
            catalogue->parameters[index].type=run->type;
            catalogue->parameters[index].name=name;
            index++;
        }
    }
}
