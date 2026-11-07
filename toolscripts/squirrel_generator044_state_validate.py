import json
from native_material_wave011_build import pin,save
from squirrel_generator044_state_build import ROOT,WORK,load
from squirrel_generator044_state_native import Windows,Android
from squirrel_generator044_state_model import validate_native

PRIMARY='primary-actual-suspended'


def run():
 report=WORK/PRIMARY/'execution.json';record=json.loads(report.read_text());native=Windows(WORK/PRIMARY/'windows/generator044.dll')
 s,y,f=load(WORK/PRIMARY/'android/model.elf');model=Android(s,y);count=0
 for row in record['cases']:
  expected=dict(words=row['originalWords'])
  validate_native(native.execute(row['profile'],row['cleanup']),expected)
  validate_native(model.execute(row['profile'],row['cleanup']),expected);count+=2
 result=dict(schemaVersion=1,validatedObservations=count,allPassed=True,model=pin(ROOT/'toolscripts/squirrel_generator044_state_model.py'),primary=pin(report),sourceOrInventoryCreditGranted=0)
 save(WORK/'native-model-validation.json',result);return result


if __name__=='__main__':print(json.dumps(run()))
