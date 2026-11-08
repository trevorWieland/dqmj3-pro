import json
from pathlib import Path
from controller6_measure import ROOT,WORK,pin


def runtime(report):
    assert report['caseSets']==len(report['cases'])and report['observations']==len(report['cases'])*4
    assert report['caseSets']==3086
    assert len({row['input']['label']for row in report['cases']})==report['caseSets']
    for row in report['cases']:
        assert row['original']['returned']
        assert row['original']['finalArenaSha256']==row['sourceArm']['finalArenaSha256'],row['input']['label']
        for name in['sourceArm','actualWindows','highAarch64']:
            assert row[name]['independentModelEqual']and not row[name]['independentModelDifferences'],row['input']['label']
        assert row['actualWindows']['actualWindowsExecution']
        assert row['actualWindows']['arenaBase']>0xffffffff and row['highAarch64']['arenaBase']>0xffffffff
        assert row['sourceArm']['savedIntegerVfpSpAndArgumentsPreserved']and row['highAarch64']['savedIntegerVfpSpAndArgumentsPreserved']
        assert not row['sourceArm']['sourceMapsOriginalExecutable']and not row['highAarch64']['sourceMapsOriginalExecutable']
    return report['cases']


def artifacts(first,second):
    rows=[]
    for name in['arm.elf','a64.elf','uniform6.dll']:
        a,b=pin(first/name),pin(second/name)
        assert (a['bytes'],a['sha256'])==(b['bytes'],b['sha256']),name
        rows.append(dict(primary=a,copied=b))
    return rows


def verify():
    first=WORK/'execution.json';second=WORK/'replay-v1/execution.json'
    a,b=[json.loads(path.read_text())for path in[first,second]]
    assert runtime(a)==runtime(b),'raw runtime rows differ; do not normalize them'
    assert a['originalVisitedPcs']==b['originalVisitedPcs']
    copied=json.loads((WORK/'replay-v1/copy-inputs.json').read_text())
    for row in copied['files']:
        assert pin(ROOT/row['original']['path'])==row['original']
        assert pin(ROOT/row['copied']['path'])==row['copied']
        assert row['original']['sha256']==row['copied']['sha256']
    controls=[]
    pa=WORK/'controls-primary-v2/returning-controls.json';pb=WORK/'replay-v1/returning-controls.json'
    ca,cb=[json.loads(path.read_text())for path in[pa,pb]]
    assert ca['controls']==cb['controls']==8 and ca['executions']==cb['executions']==24
    for x,y in zip(ca['cases'],cb['cases'],strict=True):
        assert all(x[key]==y[key]for key in['name','input','replacements','original','sourceArm','actualWindows','highAarch64'])
        assert x['allThreeNormallyReturnedAndRejected']and y['allThreeNormallyReturnedAndRejected']
        assert x['mutatedSource']['sha256']==y['mutatedSource']['sha256']
        controls.append(dict(name=x['name'],rawRuntimeExactlyEqual=True,
                             artifacts=artifacts(WORK/'controls-primary-v2/controls-v1'/x['name']/'uniform-build',WORK/'replay-v1/controls-v1'/x['name']/'uniform-build')))
    claim=json.loads((WORK/'claim.json').read_text())
    all_pcs={address for span in claim['instructionRanges']for address in range(span['start'],span['endExclusive'],4)}
    visited=set(a['originalVisitedPcs']);assert len(all_pcs)==4574 and visited<=all_pcs
    supplement_path=WORK/'final-path-supplement.json';supplement=json.loads(supplement_path.read_text())
    assert supplement['caseSets']==2
    for row in supplement['cases']:
        assert row['original']['returned']and row['sourceArm']['finalArenaSha256']==row['original']['finalArenaSha256']
        assert row['sourceArm']==row['copiedSourceArm']and row['actualWindows']==row['copiedActualWindows']and row['highAarch64']==row['copiedHighAarch64']
        assert all(row[key]['independentModelEqual']for key in['sourceArm','actualWindows','highAarch64'])
    supplemental_pcs={pc for row in supplement['cases']for pc in row['original']['visitedPcs']}
    final_visited=visited|supplemental_pcs
    invariant_path=WORK/'control-invariants.json';invariants=json.loads(invariant_path.read_text())
    unreachable={pc for row in invariants['rows']for pc in range(row['unexecuted']['start'],row['unexecuted']['endExclusive'],4)}
    assert len(unreachable)==5 and not unreachable&final_visited and final_visited|unreachable==all_pcs
    wrapper_path=WORK/'actual-wrapper-frontier.json';wrapper=json.loads(wrapper_path.read_text());assert wrapper['caseSets']==8
    for row in wrapper['cases']:
        assert row['originalWrapper']['returned']and row['originalWrapper']['actualWrapperExecuted']
        assert row['originalWrapper']['finalArenaSha256']==row['sourceArm']['finalArenaSha256']
        assert all(row[name]['independentModelEqual']for name in['sourceArm','actualWindows','highAarch64'])
    result=dict(status='primary-and-tiny-copied-source-replay-verification-passed',producer=pin(__file__),primary=pin(first),copied=pin(second),
                caseSets=a['caseSets'],observations=a['observations'],rawRuntimeRowsExactlyEqual=True,
                artifacts=artifacts(WORK/'uniform-build',WORK/'replay-v1/uniform-build'),
                controlsPrimary=pin(pa),controlsCopied=pin(pb),controls=controls,copiedInputs=pin(WORK/'replay-v1/copy-inputs.json'),
                sourceSnapshotFiles=len(copied['files']),sourceSnapshotBytes=copied['copiedBytes'],
                originalInstructionCount=len(all_pcs),originalExecutedInstructions=len(visited),unexecutedOriginalPcs=sorted(all_pcs-visited),
                finalPathSupplement=pin(supplement_path),controlInvariants=pin(invariant_path),actualWrapper=pin(wrapper_path),
                finalObservedOriginalInstructions=len(final_visited),invariantAccountedInstructions=len(unreachable),
                finalCoverageCompletelyAccounted=True,canonicalUniqueCaseSets=a['caseSets']+2,
                unexecutedMeansUnreachable=False,noWholeGameHardwareMatchingOrCreditClaim=True,sourceCreditGranted=0,
                executionEnvelopeBytesEqual=first.read_bytes()==second.read_bytes(),buildAndControlEnvelopesHaveDifferentPaths=True)
    out=WORK/'source-replay-comparison.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=a['caseSets'],finalObservedOriginalInstructions=len(final_visited),invariantAccountedInstructions=len(unreachable))))
    return result


if __name__=='__main__':verify()
