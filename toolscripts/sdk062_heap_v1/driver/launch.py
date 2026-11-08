import hashlib,json,subprocess,sys
from pathlib import Path

def main(argv=None):
 arguments=list(sys.argv[1:]if argv is None else argv)
 if '--out'not in arguments:raise ValueError('exclusive --out is required')
 output=Path(arguments[arguments.index('--out')+1]);run=Path(__file__).resolve().parent/'run.py';result=subprocess.run([sys.executable,'-I','-B',str(run),*arguments],capture_output=True,text=True)
 if not output.is_dir():raise RuntimeError(result.stdout+result.stderr)
 (output/'process.log').write_text(result.stdout+result.stderr)
 receipt_path=output/'receipt.json';receipt=json.loads(receipt_path.read_text())if receipt_path.is_file()else{};journal=output/'audit-rejections.json';violations=json.loads(journal.read_text())if journal.is_file()else[]
 good=result.returncode==0 and receipt.get('status')=='passed'and not receipt.get('rejectedAttempts')and not violations
 report=dict(status='passed'if good else'failed',exitCode=result.returncode,postExitAuditRejections=violations,receiptSha256=hashlib.sha256(receipt_path.read_bytes()).hexdigest()if receipt_path.is_file()else None)
 (output/'process-completion.json').write_text(json.dumps(report,indent=2)+'\n')
 print(json.dumps(dict(status=report['status'],output=str(output))))
 if not good:raise SystemExit(1)
if __name__=='__main__':main()
