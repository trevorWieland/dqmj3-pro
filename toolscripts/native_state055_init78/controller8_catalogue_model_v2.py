import hashlib
import json
import struct
from controller8_measure import ROOT,WORK,pin
from native_wave014_oracle import original_image


def catalogue():
    rows=[]
    def add(name,kind):rows.append(dict(index=len(rows),count=1,type=kind,name=name))
    def fields(prefix,items):
        for name,kind in items:add(prefix+'.'+name,kind)
    fields('dmp_Texture[0]',[('perspectiveShadow',0x8b56),('shadowZBias',0x1406),('shadowZScale',0x1406)])
    for i in range(4):add(f'dmp_Texture[{i}].samplerType',0x1404)
    for i in[2,3]:add(f'dmp_Texture[{i}].texcoord',0x1404)
    fields('dmp_Texture[3]',[(name,kind)for name,kind in[
        ('ptRgbMap',0x1404),('ptAlphaMap',0x1404),('ptAlphaSeparate',0x8b56),('ptClampU',0x1404),('ptClampV',0x1404),('ptShiftU',0x1404),('ptShiftV',0x1404),('ptMinFilter',0x1404),('ptTexWidth',0x1404),('ptTexOffset',0x1404),('ptTexBias',0x1406),('ptNoiseEnable',0x8b56),('ptNoiseU',0x8b51),('ptNoiseV',0x8b51),('ptSamplerRgbMap',0x8b5d),('ptSamplerAlphaMap',0x8b5d),('ptSamplerNoiseMap',0x8b5d),('ptSamplerR',0x8b5d),('ptSamplerG',0x8b5d),('ptSamplerB',0x8b5d),('ptSamplerA',0x8b5d)]])
    fields('dmp_FragOperation',[('mode',0x1404),('penumbraScale',0x1406),('penumbraBias',0x1406),('wScale',0x1406),('enableClippingPlane',0x8b56),('clippingPlane',0x8b52),('enableAlphaTest',0x8b56),('alphaTestFunc',0x1404),('alphaRefValue',0x1406)])
    fields('dmp_Gas',[('lightXY',0x8b51),('lightZ',0x8b52),('deltaZ',0x1406),('accMax',0x1406),('autoAcc',0x8b56),('attenuation',0x1406),('colorLutInput',0x1404),('shadingDensitySrc',0x1404),('samplerTR',0x8b5d),('samplerTG',0x8b5d),('samplerTB',0x8b5d)])
    fields('dmp_FragmentLighting',[('enabled',0x8b56),('ambient',0x8b52)])
    fields('dmp_FragmentMaterial',[(name,0x8b52)for name in['emission','ambient','diffuse','specular0','specular1']])
    for name,kind in[('enabled',0x8b56),('ambient',0x8b52),('diffuse',0x8b52),('specular0',0x8b52),('specular1',0x8b52),('position',0x8b52),('spotDirection',0x8b51),('shadowed',0x8b56),('geomFactor0',0x8b56),('geomFactor1',0x8b56),('twoSideDiffuse',0x8b56),('samplerSP',0x8b5d),('spotEnabled',0x8b56),('distanceAttenuationBias',0x1406),('distanceAttenuationScale',0x1406),('distanceAttenuationEnabled',0x8b56),('samplerDA',0x8b5d)]:
        for i in range(8):add(f'dmp_FragmentLightSource[{i}].{name}',kind)
    for prefix,kind in[('absLutInput',0x8b56),('lutInput',0x1404),('lutScale',0x1406)]:
        for suffix in['D0','D1','SP','FR','RB','RG','RR']:add('dmp_LightEnv.'+prefix+suffix,kind)
    fields('dmp_FragmentMaterial',[('sampler'+suffix,0x8b5d)for suffix in['D0','D1','FR','RB','RG','RR']])
    fields('dmp_LightEnv',[('shadowSelector',0x1404),('bumpSelector',0x1404),('bumpMode',0x1404),('bumpRenorm',0x8b56),('config',0x1404),('invertShadow',0x8b56),('shadowPrimary',0x8b56),('shadowSecondary',0x8b56),('shadowAlpha',0x8b56),('fresnelSelector',0x1404),('clampHighlights',0x8b56),('lutEnabledD0',0x8b56),('lutEnabledD1',0x8b56),('lutEnabledRefl',0x8b56)])
    for name,kind in[('combineRgb',0x1404),('combineAlpha',0x1404),('srcRgb',0x8b54),('srcAlpha',0x8b54),('operandRgb',0x8b54),('operandAlpha',0x8b54),('scaleRgb',0x1406),('scaleAlpha',0x1406),('constRgba',0x8b52)]:
        for i in range(6):add(f'dmp_TexEnv[{i}].{name}',kind)
    add('dmp_TexEnv[0].bufferColor',0x8b52)
    for i in range(1,5):add(f'dmp_TexEnv[{i}].bufferInput',0x8b53)
    fields('dmp_Fog',[('mode',0x1404),('color',0x8b51),('zFlip',0x8b56),('sampler',0x8b5d)])
    return rows


def registers():
    rows=[0x229,*range(0x280,0x285),0x289,0x28a,0x28d,*range(0x2b0,0x2b5),0x2b9,0x2ba,0x2bd,0x251,0x252,0x254,0x242,0x24a,0x25e,*range(0x4d,0x57),*range(0x47,0x4c),0x64,0x6d,0x6f,0x80,0x8b,0x8f,*range(0xa8,0xae)]
    for base in[0xc0,0xc8,0xd0,0xd8,0xf0]:rows+=list(range(base,base+5))
    rows+=list(range(0xf8,0xfd))+[0xe0,0xe1,0xe4,0xe5,0xfd,0x120,0x121,0x122,0x126,0x100,0x104,0x130]
    for i in range(8):rows+=list(range(0x140+i*16,0x148+i*16))+list(range(0x149+i*16,0x14c+i*16))
    rows +=[0x1c0,0x1c2,0x1c3,0x1c4,0x1c6,0x1d0,0x1d1,0x1d2,0x1d9]
    return rows


def run():
    image=original_image();expected=[]
    for index in range(297):
        unit,count,kind,pointer=struct.unpack_from('<4I',image,0x7e1afc-0x100000+index*16);start=pointer-0x100000;end=image.index(0,start)
        expected.append(dict(index=unit,count=count,type=kind,name=image[start:end].decode('ascii')))
    expected_registers=[None]*189
    for i in range(189):
        index,value=struct.unpack_from('<2I',image,0x7e2d9c-0x100000+i*8);expected_registers[index]=value
    generated=catalogue();headers=registers();assert generated==expected and headers==expected_registers
    output=dict(status='source-semantic-family-generator-validates-all-original-catalogue-and-register-inputs-before-C',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),generatedDescriptions=297,generatedRegisters=189,everyCountTypeIndexNameAndRegisterMatches=True,
                catalogueLogicalSha256=hashlib.sha256(json.dumps(generated,separators=(',',':')).encode()).hexdigest(),registerBytesSha256=hashlib.sha256(struct.pack('<189I',*headers)).hexdigest(),originalNameAddressesRetainedInPortableSource=False,originalExecutableCopied=False,sourceCreditGranted=0)
    path=WORK/'catalogue-model-v2.json';assert not path.exists();path.write_text(json.dumps(output,indent=2)+'\n');print(json.dumps(pin(path)))


if __name__=='__main__':run()
